#include<iostream>
#include<vector>
using namespace std;

class Graph
{
public:
	int v,e;
	int count=0;
	int minwt=0;
	int m[100][100];
	vector<int>start1;
	vector<int>final1;
	vector<int>edge1;
	
	Graph(int x,int y)
	{
		v=x;
		e=y;
		for(int i=0;i<v;i++)
		{
			for(int j=0;j<v;j++)
			{
				m[i][j]=0;
			}
		}
		for(int i=0;i<v;i++)
		{
			start1.push_back(1);//start1[0]=1
			final1.push_back(-1);//final1[0]=-1
		}
	}//end of const
	
	void disp()
	{
		cout<<"\nDisplay :\n";
		for(int i=0;i<v;i++)
		{
			for(int j=0;j<v;j++)
			{
				cout<<m[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	
	void edge(int u,int v,int w)
	{
		m[u][v]=w;
		m[v][u]=w;
	}
	
	void prim()
	{
		start1[0]=-1;
		final1[0]=1;
		
		while(count<v-1)
		{
			int min1=9999;
			int child=-1;
			
			int parent=-1;
			
			for(int j=0;j<v;j++)
			{
				if(final1[j]==1)//j=0
				{
					for(int k=0;k<v;k++)
					{
						if(m[j][k]!=0 && min1 > m[j][k] && final1[k] == -1)
						{
							min1=m[j][k];
							parent = j;
							child = k;
						}
					}//end of inner for loop
				}//end of middle for loop
			}//end of outer for
			
			edge1.push_back(parent);
			edge1.push_back(min1);
			final1[child]=1;
			m[parent][child]=0;
			m[child][parent]=0;
			minwt=minwt+min1;
			count++;
			
		}//end of while loop
		
		cout<<"Minimum Weight: "<<minwt;
		for(int i=0;i<3*(v-1);i=i+3)
		{
			cout<< edge1[i] << " "<< edge1[i+1]<<endl; 
		}
	}
	
};

int main()
{
	Graph g(5,6);
	g.edge(0,1,2);
	g.edge(0,2,4);
	g.edge(2,3,1);
	g.edge(1,4,3);
	g.edge(3,4,4);
	g.edge(1,3,2);
	g.disp();
	g.prim();
	return 0;
}
