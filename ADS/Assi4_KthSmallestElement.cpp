#include<iostream>
#include<vector>
using namespace std;
void Merge(vector<int> &arr1 , vector<int> &arr2,int key)
{
    vector<int> temp;
    int i=0, j=0;
    while(i<arr1.size()&&j<arr2.size())
    {
        if(arr1[i]<=arr2[j])
        {
            temp.push_back(arr1[i]);
            i++;
        }
        else
        {
            temp.push_back(arr2[j]);
            j++;
        }
    }

    while(i<=arr1.size())
    {
        temp.push_back(arr1[i]);
        i++;
    }

    while(j<=arr2.size())
    {
        temp.push_back(arr2[j]);
        j++;
    }
    for(int k=0;k<temp.size();k++)
    {
        if(k==key)
        {
            cout<<key<<"th Smallest Element is : "<<temp[k-1];
            break;
        }
    }
}

int main()
{
   int x , key;
   vector<int> a1={4, 5 , 6};
   vector<int> a2={1 , 2 , 3};
    cout<<"Kth smallest to find : ";
    cin>>key;
    
    if(key<a1.size+a2.size)
        cout<<"Invalid Input";
        
    Merge(a1 , a2 , key);
    
    return 0;
}
