#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {20,12,17};
    int n=3;
    int k=6;

    int start=0;
    int cnt=0;
    int nextMin=0;
    for(int i=0;i<n;)
    {
        if(arr[i]<=k)
        {
            i++;
            start++;
            nextMin++;
        }
        else
        {
            while(arr[nextMin]>k && nextMin<n)
            {
                nextMin++;
            }
            if(arr[nextMin]<k)
            {
                swap(arr[start],arr[nextMin]);
                cnt++;
                cout<<"Count increase ";
            }
            if(nextMin == n-1)
                break;
            else{
                i++;
                start=i;
            }
        }
    }
    cout<<"Count is "<<cnt;
}
