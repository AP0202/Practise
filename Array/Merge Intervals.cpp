#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter how many rows you want in array :";
    cin>>n;
    vector<vector<int>> intervals;
    vector<vector<int>> ans;
    cout<<"Enter the intervals in array";
    for(int i=0;i<n;i++){
        int first,second;
        cin>>first;
        cin>>second;
        intervals.push_back({first,second});
    }
    cout<<"The 2-d vector you created is:\n"
    for (int i = 0; i < intervals.size(); i++)
    {
        for (int j = 0; j < intervals[i].size(); j++)
        {
            cout << intervals[i][j] << " ";
        }
        cout << endl;
    }

    sort(intervals.begin(),intervals.end());

    int startingInterval = intervals[0][0];
    int endingInterval = intervals[0][1];
    for(int i=0;i<intervals.size();i++)
    {
        if(intervals[i][0] <= endingInterval)
            endingInterval = max(intervals[i][1],endingInterval);
        else{
            ans.push_back({startingInterval,endingInterval});
            startingInterval = intervals[i][0];
            endingInterval = intervals[i][1];
        }
    }
    ans.push_back({startingInterval,endingInterval});

    cout<<"Merged Interval:\n";
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

}

/*
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;

        sort(intervals.begin(),intervals.end());

        int startingInterval = intervals[0][0];
        int endingInterval = intervals[0][1];

        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]<=endingInterval)
                endingInterval = max(intervals[i][1],endingInterval);

            else{
                ans.push_back({startingInterval,endingInterval});
                startingInterval = intervals[i][0];
                endingInterval = intervals[i][1];
            }
        }
        ans.push_back({startingInterval,endingInterval});
        return ans;
    }
};
*/
