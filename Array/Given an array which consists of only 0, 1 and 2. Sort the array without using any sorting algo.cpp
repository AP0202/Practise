#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the length of array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers (0,1,2) in array\n";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int cnt0=0,cnt1=0,cnt2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            cnt0++;
        }
        else if(arr[i]==1)
        {
            cnt1++;
        }
        else
            cnt2++;
    }
    int i=0;
    while(cnt0 > 0)
    {
        arr[i]=0;
        i++;
        cnt0--;
    }
    while(cnt1 > 0)
    {
        arr[i] = 1;
        i++;
        cnt1--;
    }
    while(cnt2 > 0)
    {
        arr[i] = 2;
        i++;
        cnt2--;
    }

    cout<<"The sorted array is:";
    for(int j=0;j<n;j++)
        cout<<arr[j]<<" ";
}
