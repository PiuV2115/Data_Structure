#include<iostream>
using namespace std;
class Prims
{
    int a[10];
    Prims(int v)
    {
    for(int i=0;i<v;i++)
    {
        a[i]=0;
    }
    }
}
int main()
{
    int wt,node,parent,v;
    int p,ch,x,flag=0;
    cout<<"Enter No of Vertices : ";
    cin>>v;
    Prims obj(v);
    for(int j=0;j<v;j++)
    {
        if(flag==0)
        {
        cout<<"Enter The Source Edge's wt , node , parent :";
        cin>>wt,node,parent;
            enque(wt,node,parent);
            a[node]=-1;
            p=node;
        }
        flag=1;
        do{
        cout<<"Enter Adjacent Edge for vertex "<<p<<"(wt,node,parent) :";
        cin>>wt>>node>>parent;
        enque(wt,node,parent);
        cout<<"Add one More ? Press 1 :";
        cin>>ch
        }while(ch==1);
        if(parent!=-1)
        {
        p=deque();
        for(int i=0;i<v;i++)
        {
            if(a[i]==p)
            {
                a[i]=-1;
            }
        }
        }
    }    
}
