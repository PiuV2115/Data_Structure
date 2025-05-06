#include<iostream>
using namespace std;
int no, i,j,key[10],r[10][10];
class Node
{
	public:
	int data ;
	Node *left;
	Node *right;
	Node(int num)
	{
		data=num;
		left=right=nullptr;
	}
	friend void PreOrder(Node *);
}*root;

void create()
{
int i,j,w[10][10],p[10],q[10],c[10][10];
  cout<<"Enter no. of keys : ";
  cin>>no;
  cout<<"Enter Keys : ";
  for(i=1;i<=no;i++)
  {
  	cin>>key[i];
  }
  cout<<"Enter Successful Probability : ";
  for(i=1;i<=no;i++)
  {
  	cin>>p[i];
  }
  cout<<"Enter Unsuccessful Probability : ";
   for(i=0;i<=no;i++)
  {
  	cin>>q[i];
  }
  
  for(int m=0;m<=no;m++)
  {
  	for(i=0;i<=no;i++)
  	{
  		for(j=0;j<=no;j++)
  		{
  			if(j-i==m)
  			{
  				cout<<"\n";
  				if(i==j)
  				{
  					w[i][j]=q[j];
  					cout<<"\nW["<<i<<"]["<<j<<"]="<<w[i][j];
  					c[i][j]=0;
  					r[i][j]=0;
  					cout<<"\nC["<<i<<"]["<<j<<"]="<<c[i][j];
  					cout<<"\nr["<<i<<"]["<<j<<"]="<<r[i][j];
  				}//end of 1st if
  				else
  				{
  					w[i][j]=w[i][j-1]+p[j]+q[j];
  					cout<<"\nW["<<i<<"]["<<j<<"]="<<w[i][j];
  					int min=9999,t=0;
  					for(int k=i+1;k<=j;k++)
  					{
  						t=c[i][k-1]+c[k][j];
  						if(min>t)
  						{
  							min=t;
  							r[i][j]=k;
  						}
  						c[i][j]=min+w[i][j];	
  					}
  					cout<<"\nC["<<i<<"]["<<j<<"]="<<c[i][j];
  					cout<<"\nr["<<i<<"]["<<j<<"]="<<r[i][j];
  				}//end of else
  				
  			}//end of 2nd innner if
  			
  		}//end of jth for loop
  		
  	}//end of ith for loop
  
  }//end of kth for loop  

}


Node* insert(int i,int j)
{
	if(i==j)
	{
		return 0;
	}
	int rootindex=r[i][j];
	Node *root= new Node(key[rootindex]);
	root->left=insert(i,rootindex-1);
	root->right=insert(rootindex,j);
}


void PreOrder(Node *root)
{
		if(root==nullptr)
		{
		return;
		}
		cout<<root->data;
		PreOrder(root->left);
		PreOrder(root->right);
}

int main()
{
  int ch,choice;
  do{
  cout<<"1. Create \n2. Insert \n3.Display\nEnter Your Choice :";
  cin>>ch;
  switch(ch)
  {
  	case 1:create();
  	break;
  	
  	case 2:insert(0,no);
  	break;
  	
  	case 3:PreOrder(root);
  	break;
  }
  cout<<"\n";
 
}while(choice==1);
	return 0;
}//end of main




