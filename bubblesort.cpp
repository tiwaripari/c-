#include<iostream>
using namespace std;
int main()
{
    int arr[100]={},t;
    cin>>t;

    for(int i=1;i<=t;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<(t-1);i++)
    {
        for(int j=1;j<(t-i);j++)
        {   int temp=arr[j];
            if(arr[j]>arr[j+1])
            {
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

     for(int i=1;i<=t;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}

