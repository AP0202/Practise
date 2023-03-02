#include <iostream>
#include <utility>
using namespace std;
//Method 1
/*int using_min_max()
{
    pair<int,int> mnmx; //first is minimum and second is maximum
    int n,i;
    cout<<"Enter the length of the array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in array:\n";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    if(n==1)
    {
        cout<<"Minimum: "<<arr[0];
        cout<<"Maximum: "<<arr[0];
        return 0;
    }

    if(arr[0]>arr[1])
    {
        mnmx.first = arr[1];
        mnmx.second = arr[0];
    }
    else
    {
        mnmx.first = arr[0];
        mnmx.second = arr[1];
    }

    for(i=2;i<n;i++)
    {
        if(arr[i]>mnmx.second)
            mnmx.second = arr[i];
        else if(arr[i]<mnmx.first)
            mnmx.first = arr[i];
    }
    cout<<"Minimum is: "<<mnmx.first<<endl;
    cout<<"Maximum is: "<<mnmx.second;
    return 0;
}*/

/*
Pair MaxMin(array, array_size)
   if array_size = 1
      return element as both max and min
   else if arry_size = 2
      one comparison to determine max and min
      return that pair
   else    /* array_size  > 2
      recur for max and min of left half
      recur for max and min of right half
      one comparison determines true max of the two candidates
      one comparison determines true min of the two candidates
      return the pair of max and min

*/

struct Pair{
    int min;
    int max;
};

struct Pair divide_conquer(int arr[],int low, int high)
{

    struct Pair mnmx,mnmx_left,mnmx_right;
    int mid;

    if(low==high)
    {
        mnmx.min = arr[low];
        mnmx.max = arr[low];
        return mnmx;
    }

    if(high == low+1) // Meaning there are 2 elements in array.
    {
        if(arr[low]>arr[high])
            {
                mnmx.min = arr[high];
                mnmx.max = arr[low];
            }
        else
            {
                mnmx.min = arr[low];
                mnmx.max = arr[high];
            }
        return mnmx;
    }
    mid = (high+low)/ 2;
    mnmx_left = divide_conquer(arr,low,mid);
    mnmx_right = divide_conquer(arr,mid+1,high);

    //Comparing minimum of two parts
    if(mnmx_left.min<mnmx_right.min)
        mnmx.min = mnmx_left.min;
    else
        mnmx.min = mnmx_right.min;

    //Comparing maximum of two parts
    if(mnmx_left.max>mnmx_right.max)
        mnmx.max = mnmx_left.max;
    else
        mnmx.max = mnmx_right.max;

    return mnmx;
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
    struct Pair minmax =  divide_conquer(arr,0,n-1);
    cout<<"Minimum is: "<<minmax.min<<endl;
    cout<<"Maximum is:"<<minmax.max;
    return 0;
}
