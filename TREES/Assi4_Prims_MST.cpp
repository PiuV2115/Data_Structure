
#include<iostream>
#include<vector>
using namespace std;
class Matrix
{
    public:
    int a[10][10],v,e;
    vector<int> final1;
    vector<int> start1;
    vector<int> MST;
    Matrix(int x,int y)
    {
        v=x;
        e=y;
        for(int i=0;i<v;i++)
        {
            for(int j=0;j<v;j++)
            {
                a[i][j]=0;
            }
            final1.push_back(-1);
            start1.push_back(1);
        }
    }
    
    void Edge()
    {
        int u, v, w;
        cout<<"Enter the Edges : \n";
        for(int i=0;i<e;i++)
        {
            cout<<i+1<<"] Edge (Source,Destination,Weight) : ";
            cin>>u>>v>>w;
            a[u][v]=w;
            a[v][u]=w;
        }
    }
    
    void prim()
    {
        int sum=0,i,j;
       for(int k=0;k<v-1;k++)
        {
                final1[0]=1;
                start1[0]=-1;   
            
            int min=9999,parent=-1,child=-1;
            for(i=0;i<v;i++)
            {
                if(final1[i]==1)
                {
                    for(j=0;j<v;j++)
                    {
                        if(a[i][j]!=0&&min>a[i][j]&&final1[j]!=1)
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
                a[i][j]=0;
                a[j][i]=0;
                final1[child]=1;
                start1[child]=-1;
         }// End of outer most for loop 
         cout<<"Weight of MST is : "<<sum;
    }
    
    void display()
    {
        cout<<"    ";
        for(int k=0;k<v;k++)
        {
            cout<<k<<" ";
        }
        cout<<"\n";
        for(int i=0;i<v;i++)
        {
            cout<<i<<" [ ";
            for(int j=0;j<v;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<" ]\n";
        }
    }
};
int main()
{
    int v1,e1;
    cout<<"Enter No of Vertices : ";
    cin>>v1;
    cout<<"Enter no of Edges : ";
    cin>>e1;
    Matrix M(v1,e1);
    M.Edge();
    M.display();
    M.prim();
    return 0;
}
