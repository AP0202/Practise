#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void kadane_algo(int arr[],int n)
{
    int max_so_far = INT_MIN;
    int max_ending_here = 0;

    for(int i=0;i<n;i++)
    {
        max_ending_here = max_ending_here + arr[i];

        if(max_so_far<max_ending_here)
            max_so_far = max_ending_here;

        if(max_ending_here<0)
            max_ending_here=0;
    }

     cout<<"The sum of contiguous sub-array is: "<<max_so_far;
}

int main()
{
    int n,m;
    cout<<"Enter the length of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers in array : \n";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    kadane_algo(arr,n);
}
