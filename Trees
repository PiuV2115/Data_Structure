
#include<iostream>
using namespace std;
int count=0,count1=0,a[10],r1,r2;
class BT
{
  public:
	int data;
	BT *left;
	BT *right;
	BT(int x)
	{
		data=x;
		left=nullptr;
		right=nullptr;
	}
	friend void create();
	friend void insert(BT *,BT *);
	friend void PreOrder(BT *,BT *);
	friend void InOrder(BT *);
	friend void PostOrder(BT *);
	friend void Properties(BT *);
	
}*root,*temp;

void create()
{
root=NULL;
int val;
char ch;
do{
	cout<<"Enter Data : ";
	cin>>val;
	temp=new BT(val);
	if(root==nullptr)
	{
		root=temp;
	}
	else
	{
	insert(temp,root);
	}
	cout<<"Do you want to Continue (Y/N) : ";
	cin>>ch;
}while(ch=='Y'||ch=='y');
}

void insert(BT *temp,BT *root1)
{
	char ch;
	cout<<"left or Right (L/R) :";
	cin>>ch;
	if(ch=='l'||ch=='L')
	{
		if(root1->left==nullptr)
		{
			root1->left=temp;
		}
		else
		{
			insert(temp,root1->left);
		}
	}
	else if (ch=='r'||ch=='R')
	{
		if(root1->right==nullptr)
		{
			root1->right=temp;
		}
		else
		{
			insert(temp,root1->right);
		}
	}
	else
	{
		cout<<"Invalid Choice ";
	}
}
void PreOrder(BT *current)
{
	if(current==nullptr)
	{
	return;
	}
	if(current->left==nullptr&&current->right==nullptr)
	{
	a[count1]=current->data;
	count1++;
	}
	cout<<current->data;
	count++;
	PreOrder(current->left);
	PreOrder(current->right);	
}

void InOrder(BT *current)
{
	if(current==nullptr)
	{return;}
	InOrder(current->left);
	cout<<current->data;
	InOrder(current->right);
}

void PostOrder(BT *current)
{
	if(current==nullptr)
	{return;}
	PostOrder(current->left);
	PostOrder(current->right);
	cout<<current->data;
}

void height(BT *current)
{
	if(current==nullptr) 
	{return ; }
	r1=height(current->left);
	r2=height(current->right);
}

void Properties(BT *current)
{
cout<<"\nProperties of Binary Tree\n";
cout<<"No. of Nodes Are : "<<count;
cout<<"\nNo. of Leaf Nodes : ";
for(int i=0;i<count1;i++)
{
cout<<a[i];
}
cout<<"\nAncestors of all nodes : "<<current->data<<"\n";
if(r1>r2)
cout<<"Height is : "<<r1;
else
cout<<"Height is : "<<r2;
}

int main()
{
int choice;
do{
cout<<"\n1.Create\n2.Insert\n3.PreOrder\n4.InOrder\n5.PostOrder\n6.Tree Properties\n7.Exit \nEnter Your Choice : ";
cin>>choice;
switch(choice)
{
	case 1: create();
	break;
	
	case 2: cout<<"\nInsertion will be handled in create function\n";
	break;
	
	case 3: 
	cout<<"\nPreOrder Display : ";
	PreOrder(root);
	cout<<"\n";
	break;
	
	case 4: 
	cout<<"\nInOrder Display : ";
	InOrder(root);
	cout<<"\n";
	break;
	
	case 5: 
	cout<<"\nPostOrder Display : ";
	PostOrder(root);
	cout<<"\n";
	break;
	
	case 6: Properties(root);
	break;

	case 7: exit(0);
	break;
	
	default : cout<<"Invalid Choice \n";
}
}while(1);

return 0;
}
