#include<iostream>
using namespace std;
class Node
{
public:
	int dist;
	string city;
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
	int d;
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
				temp1->next=arr[i+1];
				arr[i+1]=temp1;
   		}
	}
	
	void Display(int v)
	{
	  for(int j=0;j<v;j++)
	  {
	  	cout<<"------------";
	  	cout<<"|"<<arr[j]<<"|";
	    Node *temp=arr[j]->next;
	    while(temp!=nullptr)
	    {
	        cout<<"-----> [ "<<temp->city<<","<<temp->dist<<" ]";
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
	int a[10][10];
	string c[10]; 
	char [26]={'a','b','c','d', 'e', 'f', 'g', 'h', 'i', 'j', 
                        'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 
                        'u', 'v', 'w', 'x', 'y', 'z'};
	int dist;
	Matrix(int v,string ch[10])
	{
		for(int i=0;i<v;i++)
		{
			for(int j=0;j<v;j++)
			{
			    a[i][j]=0;
			}
			c[i]=ch[i];
		}
	}

void accept(int edge)
{
	s m,n;
	for(int i=0;i<edge;i++)
	{
		cout<<i+1<<"] Path [source , Destination] : ";
		cin>>m>>n;
		cout<<"Enter Distance : ";
		cin>>dist;
		a[m][n]=dist;
		a[n][m]=dist;
	}
}

void display(int size)
{
    int n=0,count=0,t=1;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
		    for(int k=0;k<size;k++)
		    {
		        cout<<"\t"<<c[k];
		    }
		    cout<<"\n"<<c[i]<<"\t";
		    cout<<"[";
			cout<<a[i][j]<<"\t";
		}
		cout<<"]\n";
	}
}
	
};



int main()
{

	int v,e;
	string a[i]
	int choice;
	cout<<"Enter No. of Cities : ";
	cin>>v;
	cout<<"Enter No. of Paths : ";
	cin>>e;
	List lt(v);
	do{
	cout<<"\n1.Adjacency Matrix Accept \n2.Adjacency Matriz Display\n3.Adjacency list Accept\n4.Adjacency List Display\nEnter Your Choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1: m.accept(e);
			cout<<"\nAccpetion of Adjacecny Matrix is Done";
			cout<<"\nDisplay of Adjacency Matrix : \n";
			m.display(v);
			break;
			
		case 2:
		  	cout<<"Enter Names of the cities";
            for(int i=0;i<v;i++)
            {
            cin>>a[i];
            }
	        Matrix m(v,a);
		    lt.Edge(e);
			lt.Display(v);
			break;
		
		default:cout<<"Invalid Choice";
	}
	}while(choice!=5);

}
