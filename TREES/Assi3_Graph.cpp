#include<iostream>
using namespace std;
class Node
{
public:
	int dist;
	Node *next;
	Node(int x)
	{
		dist=x;
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
	int m,n;
	for(int i=0;i<e;i++)
		{
				cout<<"Enter Edge : ";
				cin>>m>>n;
				Node *temp=new Node(n);
				temp->next=arr[m];
				arr[m]=temp;
				Node *temp1=new Node(m);
				temp1->next=arr[n];
				arr[n]=temp1;
   		}
	}
	
	void Display(int v)
	{
	  for(int j=0;j<v;j++)
	  {
	    Node *temp=arr[j];
	    while(temp!=nullptr)
	    {
	        cout<<temp->dist<<"\t";
	        temp=temp->next;
	    }
	    cout<<"\n";
	  } 
	}
};
class Matrix
{
	public:
	int a[10][10],i=0,j=0;
	Matrix(int v)
	{
		for(i=0;i<v;i++)
		{
			for(j=0;j<v;j++)
			{
				a[i][j]=0;
			}
		}
	}

void accept(int edge)
{
	int m,n;
	for(int i=0;i<edge;i++)
	{
		cout<<i+1<<"] Edge : ";
		cin>>m>>n;
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
	cout<<"Enter No. of Vertices : ";
	cin>>v;
	cout<<"Enter No. of Edges : ";
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
	}while(choice!=6);

}
