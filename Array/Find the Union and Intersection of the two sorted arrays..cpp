#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void get_union(int arr1[],int arr2[],int n1, int n2)
{
    set <int> hs;
    int i=0,j=0;
    for(i=0;i<n1;i++)
        hs.insert(arr1[i]);

    for(j=0;j<n2;j++)
        hs.insert(arr2[j]);

    int distinct_count = hs.size();
    cout<<"The number of distinct elements are: "<<distinct_count;
}

void get_intersection(int arr1[], int arr2[], int n1, int n2)
{
    sort(arr1,arr1+n1);
    sort(arr2,arr2+n2);

    int i=0,j=0;
    int cnt=0;
    while(i<n1 && j<n2)
    {
        if(arr1[i]>arr2[j])
            j++;
        else if(arr1[i]<arr2[j])
            i++;
        else
            cnt++;
        i++;
        j++;
    }
    cout<<"The number of duplicate elements are: "<<cnt;
}

int main()
{
    int n1,n2,i;
    cout<<"Enter the length of the array 1:"<<endl;
    cin>>n1;
    int arr1[n1];
    cout<<"Enter the elements in array:\n";
    for(int i=0;i<n1;i++)
        cin>>arr1[i];

    cout<<"Enter the length of the array 2:"<<endl;
    cin>>n2;
    int arr2[n2];
    cout<<"Enter the elements in array:\n";
    for(int i=0;i<n2;i++)
        cin>>arr2[i];

    get_union(arr1,arr2,n1,n2);
    get_intersection(arr1,arr2,n1,n2);
}
