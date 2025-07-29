#include<iostream>
#include<vector>
using namespace std;
void Merge(vector<int> &arr,int st,int end,int mid)
{
    vector<int> temp;
    int i=st , j=mid+1;
    while(i<=mid&&j<=end)
    {
        if(arr[i]>=arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i<=mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    while(j<=end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx=0;idx<temp.size();idx++)
    {
        arr[st+idx]=temp[idx];
    }
}
void mergeSort(vector<int> &arr,int st,int end)
{
    if(st<end)
    {
        int mid=st+(end-st)/2;
        mergeSort(arr,st,mid);
        mergeSort(arr,mid+1,end);

        Merge(arr,st,end,mid);
    }
}

int main()
{
   
    int size;
    cout<<"Enter Size of an array : ";
    cin>>size;
     vector<int> A(size);
    cout<<"Enter a Array : ";
    for(int i=0;i<size;i++)
    {
        cin>>A[i];
    }
    mergeSort(A,0,size-1);
    cout<<"Sorted Arrray is : ";
    for(int i=0;i<size;i++)
    {
        cout<<A[i]<<"\t";
    }
    return 0;
}
