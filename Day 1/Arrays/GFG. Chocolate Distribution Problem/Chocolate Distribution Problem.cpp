// Problem link: https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1/#

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long findMinDiff(vector<long long> a, long long n, long long m)
    {
        //* Time Complexity: O(N*logN) [Bcoz library sort have time complexity O(N*logN)]
        if (m == 0 || n == 0)
            return 0;

        long long min_diff = LONG_MAX;

        sort(begin(a), end(a));
        // for arrays
        

        for (long long i = 0; i < n; i++)
        {

            // if(a[i+n-1]-a[i]<min_diff and i<a.size()-n+1){
            if (a[i + m - 1] - a[i] < min_diff and i <= n - m)
            {
                long long diff = a[i + m - 1] - a[i];
                min_diff = diff;
            }
        }

        return min_diff;
    }
};
