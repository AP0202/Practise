#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the array size";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in array";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int minPrice = INT_MAX;
    int maxProfit = 0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]<minPrice)
            minPrice = arr[i];

        if(maxProfit < arr[i] - minPrice)
            maxProfit = arr[i] - minPrice;
    }

    cout<<"Max Profit: "<<maxProfit;
}
