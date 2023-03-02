#include<iostream>
using namespace std;

void merge_arrays(int arr[],int left, int mid, int right)
{
    int n1,n2;
    n1=mid-left+1;
    n2 = right - mid;
    int L[n1],R[n2];
    for(int i=0;i<n1;i++)
        L[i] = arr[left+i];
    for(int j=0;j<n2;j++)
        R[j] = arr[mid+1+j];

    int i=0,j=0,k=left;
    while(i<n1&&j<n2){
        if(L[i]<=R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

}


void mergeSort(int arr[],int left, int right)
{
    if(left>=right)
        return;
    int mid = (left + right) /2;
    mergeSort(arr,0,mid);
    mergeSort(arr,mid+1,right);
    merge_arrays(arr,left,mid,right);
}

void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
}


int main()
{
    int n;
    cout<<"Enter the length of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers in array:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    mergeSort(arr,0,n-1);
    cout << "\nSorted array is \n";
    printArray(arr, n);
    cout<<"\nEnter the kth term:";
    int k;
    cin>>k;
    cout<<"The kth smallest term is:";
    cout<<arr[k-1];
    return 0;
}
