#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int max(int x, int y)
{
    return (x>y)?x:y;
}
int minJumps(int arr[], int n)
{
    int max_reach=arr[0];
    int step = arr[0];
    int jump=1;
    int i=1;
    for(i=1;i<n;i++)
    {
        if(n<=1)
            return 0;
        if(arr[0]==0)
            return -1;

        if(i==n-1)
            return jump;

        max_reach = max(max_reach,i+arr[i]);

        step--;

        if(step == 0)
        {
            jump++;

            if(i>=max_reach)
                return -1;

            step = max_reach - i;
        }
    }
    return -1;
}

int main()
{
    int n,i;
    cout<<"Enter the length of the array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in array:\n";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout << ("Minimum number of jumps to reach end is %d ",
             minJumps(arr, n));

}
