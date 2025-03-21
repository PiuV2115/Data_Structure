#include<iostream>
#include<string>
using namespace std;

class Node {
public:
    int dist;
    string city;
    Node* next;
    
    Node(string x, int d) {
        city = x;
        dist = d;
        next = nullptr;
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

class List {
public:
    Node* arr[100];
    string cities[100];
    
    List(int v) {
        for (int i = 0; i < v; i++) {
            arr[i] = nullptr;
        }
    }

    
    int findCityIndex(string city, int v) {
        for (int i = 0; i < v; i++) {
            if (cities[i] == city) {
                return i;
            }
        }
        return -1; // If city is not found
    }

    void Edge(int e, int v) {
        string m, n;
        int d;
        for (int i = 0; i < e; i++) {
            cout << i + 1 << "] Enter (Source , Destination) : ";
            cin >> m >> n;
            cout << "Distance Between (" << m << " , " << n << ") : ";
            cin >> d;

         
            int srcIndex = findCityIndex(m, v);
            int destIndex = findCityIndex(n, v);

            if (srcIndex == -1 || destIndex == -1) {
                cout << "Invalid city names. Please check your input." << endl;
                continue;
            }

           
            Node* temp = new Node(n, d);
            temp->next = arr[srcIndex];
            arr[srcIndex] = temp;

            Node* temp1 = new Node(m, d);
            temp1->next = arr[destIndex];
            arr[destIndex] = temp1;
        }
    }

    void Display(int v) {
        for (int j = 0; j < v; j++) {
            cout << "------------" << endl;
            cout << "|" << cities[j] << "|";
            Node* temp = arr[j];
            while (temp != nullptr) {
                cout << " -----> [ " << temp->city << "," << temp->dist << " ]";
                temp = temp->next;
            }
            cout << "\n";
        }
        cout << "------------" << endl;
    }

    void setCities(int v) {
        for (int i = 0; i < v; i++) {
            cin >> cities[i];
        }
    }
};

int main() {
    int v, e;
    string a[10];
    int choice;

    cout << "Enter No. of Cities: ";
    cin >> v;
    cout << "Enter No. of Paths: ";
    cin >> e;
    cout << "Enter Names of the cities:\n";
    for (int i = 0; i < v; i++) {
        cin >> a[i];
    }
    Matrix m(v,a);
    List lt(v);
    for (int i = 0; i < v; i++) {
        lt.cities[i] = a[i];
    }

    do {
        cout << "\n1. Adjacency Matrix  2. Adjacency List \nEnter Your Choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
           m.accept(e,a,v);
			cout<<"\nAccpetion of Adjacecny Matrix is Done";
			cout<<"\nDisplay of Adjacency Matrix : \n";
			m.display(v);
			break;
            break;
        case 2:
            lt.Edge(e, v);
            lt.Display(v);
            break;
        default:
            cout << "Invalid Choice" << endl;
        }
    } while (choice != 3);

    return 0;
}
