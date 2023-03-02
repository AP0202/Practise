#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int next_per(int arr[],int n)
{
    int i = n-1;
    int done = 0;

    while(i>=0)
    {
        if(arr[i]>arr[i-1])
        {
            swap(arr[i],arr[i-1]);
            done=1;
            break;
        }
        i--;
    }
    int arr1[n];
    if(done == 0)
    {
        for(int i=0,j=n-1;i<n;i++,j--)
        {
            arr1[i] = arr[j];
            cout<<arr1[i];
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i];
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the array size";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in array";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    next_per(arr,n);
}
