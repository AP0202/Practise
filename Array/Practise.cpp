#include <bits/stdc++.h>
using namespace std;

int getPairsCount(int arr[], int n, int sum)
{
    unordered_map<int, int> m;

    // Store counts of all elements in map m
    for (int i = 0; i < n; i++){
        m[arr[i]]++;
        cout<<m[arr[i]]<<endl;
    }
    int twice_count = 0;

    // iterate through each element and increment the
    // count (Notice that every pair is counted twice)
    for (int i = 0; i < n; i++) {
        cout<<"\nThe difference : "<<m[sum - arr[i]];
        twice_count += m[sum - arr[i]];
        cout<<"\nTwice Count: "<<twice_count;

        // if (arr[i], arr[i]) pair satisfies the condition,
        // then we need to ensure that the count is
        // decreased by one such that the (arr[i], arr[i])
        // pair is not considered
        if (sum - arr[i] == arr[i]){
            twice_count--;
        }
    }

    // return the half of twice_count
    return twice_count / 2;
}

// Driver function to test the above function
int main()
{
    int arr[] = { 1, 5, 7, -1, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 6;
    cout << "Count of pairs is "
         << getPairsCount(arr, n, sum);
    return 0;
}
