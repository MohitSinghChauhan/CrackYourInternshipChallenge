// Problem Link: https://leetcode.com/problems/move-zeroes/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int n = nums.size();
        int index = 0;
        int cnt_zero = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                cnt_zero++;
                continue;
            }
            nums[index++] = nums[i];
        }

        for (int i = n - 1; cnt_zero > 0; i--)
        {
            nums[i] = 0;
            cnt_zero--;
        }
    }
};