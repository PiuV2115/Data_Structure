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
public;
	Node *arr[100];
	List(int v)
	{
		for(int i=0;i<v;i++)
		{
			arr[i]=nullptr;
		}
	}
	void Edge()
	{
	for(int i=0;i<e;i++)
		{
				cout<<"Enter Edge : ";
				cin>>m>>n;
				Node *temp=new Node(n);
				temp->next=arr[n];
				a[n]=temp;
				Node *temp=new Node(m);
				temp->next=arr[m];
				a[m]=temp;
   		}
	}
};
class Matrix
{
	public:
	int a[10][10],i=0,j=0;
	Graph()
	{
		for(i=0;i<10;i++)
		{
			for(j=0;j<10;j++)
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
	Matrix m;
	int v,e;
	int choice;
	cout<<"Enter No. of Vertices : ";
	cin>>v;
	cout<<"Enter No. of Edges : ";
	cin>>e;
	do{
	cout<<"1.Adjacency Matrix \n2. Adjacency list\nEnter Your Choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1: 
		int ch;
		cout<<"1.Accept\n2.Display\nEnter Your Choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1: m.accept(e);
			cout<<"\nAccpetion of Adjacecny Matrix is Done";
			break;
			
			case 2:
			cout<<"Display of Adjacency Matrix : \n";
			m.display(v);
			break;
			
			default:cout<<"Invalid choice";
		}
		break;
		
		case 2: 
		int ch;
		List.lt(v);
		cout<<"1.Accept\n2.Display\nEnter Your Choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1: lt.Edge(e);
			break;
			
			case 2:lt.Display(v);
			break;
			
			default:cout<<"Invalid choice";
		}
		break;
		
		default:cout<<"Invalid Choice";
	}
	}while(choice!=4);
	obj.display(v);
}
