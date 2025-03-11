#include<iostream>
using namespace std;
class Node
{
public:
	int dist;
	Node *next;
	Node(string x,int d)
	{
		city=x;
		dist=d;
		next=nullptr;
	}
};
class List
{
public:
	Node *arr[100],*track[100];
	List(int v)
	{
		for(int i=0;i<v;i++)
		{
			arr[i]=nullptr;
			track[i]=nullptr;
		}
	}
	void Edge(int e)
	{
	string m,n;
	for(int i=0;i<2*e;i+2)
		{
				cout<<i+1<<"] Enter (Source , Destination) : ";
				cin>>m>>n;
				cout<<"Distance Between ("<<m<<" , "<<n<<") :" ;
				cin>>d;
				Node *temp=new Node(n,d);
				arr[i]->city=m;
				temp->next=arr[i];
				arr[i]=temp;
				Node *temp1=new Node(m,d);
				arr[i+1]->city=n;
				Node *temp1->next=arr[i+1];
				arr[i+1]=temp1;
   		}
	}
	
	void Display(int v)
	{
	  for(int j=0;j<v;j++)
	  {
	  	cout<<"------------";
	  	cout<<"|"<<a[j]<<"|";
	    Node *temp=arr[j]->next;
	    while(temp!=nullptr)
	    {
	        cout<<"-----> [ "<<temp->city<<","<<temp->d<<" ]";
	        temp=temp->next;
	    }
	    cout<<"\n";
	  }
	   cout<<"------------";
	}
};
class Matrix
{
	public:
	string a[10][10],i=0,j=0;
	Matrix(int v)
	{
		for(i=0;i<v;i++)
		{
			for(j=0;j<v;j++)
			{
				cout<<i<<"] City : ";
				cin>>tempcity;
				a[i][j]=tempcity;
			}
		}
	}

void accept(int edge)
{
	string m,n;
	for(int i=0;i<edge;i++)
	{
		cout<<i+1<<"] Path [source , Destination] : ";
		cin>>m>>n;
		for(int m=0;m<v;m++)
		{
			for(int n=0;n<v;n++)
			{
				if(a[i][j]==m)
				{
					cout<<""/.h;
				}
			}
		}
		a[m][n]=1;
		a[n][m]=1;
	}
}

void display(int size)
{
	for(i=0;i<size;i++)
	{
		cout<<"[";
		for(j=0;j<size;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"]\n";
	}
}
	
};



int main()
{

	int v,e;
	int choice;
	cout<<"Enter No. of Cities : ";
	cin>>v;
	cout<<"Enter No. of Paths : ";
	cin>>e;
	Matrix m(v);
	List lt(v);
	do{
	cout<<"\n1.Adjacency Matrix Accept \n2.Adjacency Matriz Display\n3.Adjacency list Accept\n4.Adjacency List Display\nEnter Your Choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1: m.accept(e);
			cout<<"\nAccpetion of Adjacecny Matrix is Done";
			break;
			
		case 2:
			cout<<"\nDisplay of Adjacency Matrix : \n";
			m.display(v);
			break;
			
		case 3: lt.Edge(e);
			break;
			
		case 4:lt.Display(v);
			break;
		
		default:cout<<"Invalid Choice";
	}
	}while(choice!=5);

}
