#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    int ans = 0, count=0;
    vector<int> vect;
    vect.push_back(arr[0]);
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
            vect.push_back(arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(i>0 && vect[i] == vect[i-1]+1)
            count++;
        else
            count=1;

        ans = max(ans,count);
    }
    cout<<ans;
}
