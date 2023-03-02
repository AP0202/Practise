#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the length of array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers in array\n";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int left = 0, right = n-1;
    while(left<right)
    {
        if(arr[right]<0)
        {
            int temp = arr[right];
            while(arr[left]<0)
            {
                left++;
            }
            arr[right] = arr[left];
            arr[left] = temp;
            left++;
        }
        right--;
    }
    cout<<"The final array is:\n";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
//-12, 11, -13, -5, 6, -7, 5, -3, -6
