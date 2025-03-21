#include<iostream>
#include<vector>
using namespace std;
class Matrix
{
    int a[10][10],v,e;
    vector<int> final1;
    vector<int> start1;
    vector<int> MST;
    Matrix(int x,int y)
    {
        v=x;
        e=y;
        for(int i=0;i<v;i++)\
        {
            for(int j=0;j<v;j++)
            {
                a[i][j]=0;
            }
            final1[i].push_back(-1);
            start1[i].push_back(1);
        }
    }
    
    void edge()
    {
        int u, v, w;
        cout<<"Enter the Edges : ";
        for(int i=0;i<e;i++)
        {
            cout<<i+1<<"] Edge (Source,Destination,Weight) : ";
            cin>>u>>v>>w;
            a[u][v]=w;
        }
    }
    
    void prim()
    {
       for(int k=0;k<v-1;k++)
        {
                final1[s]=1;
                start1[s]=-1;   
            
            int min=9999;parent=-1;child=-1;sum=0;
            for(int i=0;i<v;i++)
            {
                if(final1[i]!=1)
                {
                    for(int j=0;j<v;j++)
                    {
                        if(a[i][j]!=0&&min>a[i][j]&&final[j]!=1)
                        {
                            min=a[i][j];
                            parent=i;
                            child=j;
                        }//end of inner most if condition
                    } //end of inner most for loop
                } //end of outer if condition
            }//end of ith loop
                MST.push_back(parent);
                MST.push_back(child);
                MST.push_back(min);
                sum+=min;
                final1[child]=1;
                start1[child]=-1;
         }// End of outer most for loop 
         cout<<"Weight of MST is : "<<sum;
    }
    
    void display()
    {
        for(int i=0;i<v;i++)
        {
            MST[i]
        }
    }
};
int main()
{
    int v1,e1,u,v,w;
    cout<<"Enter No of Vertices : ";
    cin>>v1;
    cout<<"Enter no of Edges : ";
    cin>>e1;
    Matrix M(v1,e1);
    M.egde();
    M.display();
    return 0;
}
