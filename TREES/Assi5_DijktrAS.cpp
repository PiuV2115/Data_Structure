#include<iostream>
#include<vector>
using namespace std;
class Matrix
{
    public:
    int a[10][10],v,e;
    vector<int> dist;
    vector<int> visit;
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
            dist.push_back(99999);
            visit.push_back(-1);
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
        int sum=0,current=0,i,j,min=9999;
        dist[current]=0;
       for(int k=0;k<v;k++)
        {      
            visit[current]=1;
            if(visit[current]==-1)
            {
         		visit[current]=1;
                    for(j=0;j<v;j++)
                    {
                        if(a[i][j]!=0&&visit[j]!=1)
                        {
                        	if(dist[j]>dist[current]+a[current][j])
                        	{
                     		dist[j]=dist[current]+a[current][j];
                         }//end of inner most if condition
                        } //end of second if condition
                    } //end of inner most for loop
                } //end of outer if condition
         
                for(int i=0;i<v;i++)
                {
                	if(a[current][i]<min)
                	{
                	min=i;
                	}
                }
                current=min;
                visit[current]=-1;
         }// End of outer most for loop 
         cout<<"Weight of MST is : "<<sum<<"\n";
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
            cout<<i<<" | ";
            for(int j=0;j<v;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<" |\n";
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
