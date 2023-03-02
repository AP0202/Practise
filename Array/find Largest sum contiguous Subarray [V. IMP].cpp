#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the length of the array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in array:\n";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int max_so_far = INT_MIN, max_ending_here = 0; // can also take max_so_far = arr[0]

    for (int i = 0; i < n; i++)
    {
        max_ending_here = max_ending_here + arr[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }

    cout<<"The sum of contiguous sub-array is: "<<max_so_far;
}
