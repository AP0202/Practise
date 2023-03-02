#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,i;
    cout<<"Enter the length of the array:"<<endl;
    cin>>n;
    cout<<"\nEnter the k:";
    cin>>k;
    int arr[n];
    cout<<"Enter the elements in array:\n";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    sort(arr,arr+n);

    int ans = arr[n-1] - arr[0];

    int small = arr[0] + k;
    int big = arr[n-1] - k;

    if(small>big)
        swap(small,big);

    for(int j=1;j<n-1;j++)
    {
        int subtract = arr[j] - k;
        int add = arr[j] + k;

        if(subtract>small || add<big)
            continue;

        if(big-subtract<=add-small)
            small = subtract;
        else
            big = add;
    }
    cout<<"The minimum difference between heights is:"<<min(ans,big-small);
}
