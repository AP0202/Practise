#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void merge_array(int arr1[],int arr2[],int n, int m)
{
    int i = n-1;
    int j = 0;

    for(;i>=0 && j<m;i--,j++)
    {
        if(arr1[i]>=arr2[j])
            swap(arr1[i],arr2[j]);
        else
            break;
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    for(int i=0;i<n;i++)
        cout<<arr1[i]<<" ";
    for(int j=0;j<m;j++)
        cout<<arr2[j]<<" ";
}

int main()
{
    int n,m;
    cout<<"Enter the length of array 1:";
    cin>>n;
    int arr1[n];
    cout<<"Enter the numbers in array 1: \n";
    for(int i=0;i<n;i++)
        cin>>arr1[i];

    cout<<"Enter the length of array 2:";
    cin>>m;
    int arr2[m];
    cout<<"Enter the numbers in array 2: \n";
    for(int i=0;i<m;i++)
        cin>>arr2[i];
    merge_array(arr1,arr2,n,m);
}
