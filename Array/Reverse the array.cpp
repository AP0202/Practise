#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the length of array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in array:\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int start=0,end_array=n-1;
    while(start<end_array)
    {
        int temp = arr[start];
        arr[start] = arr[end_array];
        arr[end_array] = temp;
        start++;
        end_array--;
    }
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
