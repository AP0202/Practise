#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int duplicate(int arr[],int n)
{
    sort(arr,arr+n);
    int num=0;
    if(n==2)
        return arr[0];
    else{
        for(int i=0;i<=n-2;i++)
        {
            if(arr[i]==arr[i+1]){
                num=arr[i];
                break;
            }
        }
    }
    if(num == 0)
        return 0;
    else
        return num;
}

int main()
{
    int n;
    cout<<"Enter the length of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers in array: \n";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<"The duplicate number in array is: "<<duplicate(arr,n);
}
