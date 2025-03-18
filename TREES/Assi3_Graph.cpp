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
	Node *arr[100];
	List(int v)
	{
		for(int i=0;i<v;i++)
		{
			arr[i]=nullptr;
		}
	}
	void Edge(int e)
	{
	string m,n;
	int d;
	for(int i=0;i<2*e;i+=2)
		{
				cout<<i+1<<"] Enter (Source , Destination) : ";
				cin>>m>>n;
				cout<<"Distance Between ("<<m<<" , "<<n<<") :" ;
				cin>>d;
				int j=i+1;
				Node *temp=new Node(n,d);
				temp->next=arr[i];
				arr[i]=temp;
				Node *temp1=new Node(m,d);
				temp1->next=arr[j];
				arr[j]=temp1;
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

void accept(int edge,string alpha[10],int v)
{
	string m,n;
	for(int i=0;i<edge;i++)
	{
		cout<<i+1<<"] Path [source , Destination] : ";
		cin>>m>>n;
		cout<<"Enter Distance : ";
		cin>>dist;
		for(int i=0;i<v;i++)
		{
		    for(int j=0;j<v;j++)
		    {
		        if(alpha[i]==m&&alpha[j]==n)
		        {
	        	a[i][j]=dist;
	        	a[j][i]=dist;
		        }
		    }
		}
	}
}

void display(int size)
{
    int n=0,count=0,t=1;
     for(int k=0;k<size;k++)
		    {
		        cout<<"\t  "<<c[k];
		    }
		    cout<<"\n";
	for(int i=0;i<size;i++)
	{
	     cout<<c[i]<<" | ";
		for(int j=0;j<size;j++)
		{
			cout<<a[i][j]<<"\t  ";
		}
		cout<<"|\n";
	}
}
	
};



int main()
{

	int v,e;
	string a[10];
	int choice;
	cout<<"Enter No. of Cities : ";
	cin>>v;
	cout<<"Enter No. of Paths : ";
	cin>>e;
	cout<<"Enter Names of the cities";
            for(int i=0;i<v;i++)
            {
            cin>>a[i];
            }
	Matrix m(v,a);
	List lt(v);
	do{
	cout<<"\n1.Adjacency Matrix 2.Adjacency List \nEnter Your Choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1: m.accept(e,a,v);
			cout<<"\nAccpetion of Adjacecny Matrix is Done";
			cout<<"\nDisplay of Adjacency Matrix : \n";
			m.display(v);
			break;
			
		case 2:
		    lt.Edge(e);
			lt.Display(v);
			break;
		
		default:cout<<"Invalid Choice";
	}
	}while(choice!=3);

}
