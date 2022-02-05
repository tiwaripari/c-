#include<iostream>
using namespace std;
int main()
{
    int arr[1000]={},t=0;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=t;i++)
    {
        int minimum=arr[i],index=i,temp=0;
        for(int j=i;j<=t;j++)
        {
            if(arr[j]<minimum)
            {
                minimum=arr[j];
                index=j;
            }

        }
        temp=arr[i];
        arr[i]=arr[index];
        arr[index]=temp;

    }
    for(int i=1;i<=t;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
