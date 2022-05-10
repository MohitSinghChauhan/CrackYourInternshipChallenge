// Problem link: https://leetcode.com/problems/subarray-sum-equals-k/

#include <bits/stdc++.h>
using namespace std;

//* Approach 1 -- Bruteforce -- O(N^2) --Gives TLE
class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {

        int cnt = 0;
        int n = nums.size();
        int sum = 0;
        // int lo=0, hi=n-1;
        for (int i = 0; i < n; i++)
        {
            sum = nums[i];
            if (sum == k)
                cnt++;
            for (int j = i + 1; j < n; j++)
            {
                sum += nums[j];
                if (sum == k)
                    cnt++;
            }
        }
        return cnt;
    }
};

