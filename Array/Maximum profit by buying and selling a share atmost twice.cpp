#include<iostream>
#include<bits/stdc++.h>

using namespace std;
//Solving this sum using peak-valley approach
int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int price[n];
    cout<<"Enter the elements in array:";
    for(int i=0;i<n;i++)
        cin>>price[i];
    // Initializing variable
    // valley-peak approach
    /*
                       80
                       /
        30            /
       /  \          25
      /    15       /
     /      \      /
    2        10   /
               \ /
                8

    */

    int profit = 0;
    for(int i=1;i<n;i++)
    {
        int sub = price[i] - price[i-1];
        if(sub>0)
            profit+=sub;
    }
    cout<<"Maximum Profit: "<<profit;
    return 0;
}
