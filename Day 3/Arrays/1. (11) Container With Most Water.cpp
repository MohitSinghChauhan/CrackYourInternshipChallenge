// Problem link: https://leetcode.com/problems/container-with-most-water

#include <bits/stdc++.h>
using namespace std;

//* Approach 1 -- Bruteforce -- O(N^2) --Gives TLE
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int n = height.size();
        int h, length;
        int max = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                h = height[j] > height[i] ? height[i] : height[j];
                length = j - i;

                if (h * length > max)
                {
                    max = h * length;
                }
            }
        }

        return max;
    }
};

//* Approach 2 - O(N)
//* here we increase(forward movement of low pointer) small wall's pointer as by increasing that area can be increased or decreased,
//* but on decrementing(backward movement of high pointer) the area will surely decrease...as when calculating area we consider small wall.

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int n = height.size();
        int lo = 0, hi = n - 1;
        int h; // for height
        int max = INT_MIN;
        int width;
        while (lo < hi)
        {
            width = hi - lo;
            h = height[hi] > height[lo] ? height[lo] : height[hi];
            int area = h * width;
            if (area > max)
            {
                max = area;
            }
            if (height[lo] < height[hi])
            {
                lo++;
            }
            //! Important - need to think more
            else
            {
                hi--;
            }
        }

        return max;
    }
};

//* more optimization

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int n = height.size();
        int lo = 0, hi = n - 1;
        int h; // for height
        int max = INT_MIN;
        int width;
        while (lo < hi)
        {
            width = hi - lo;
            h = height[hi] > height[lo] ? height[lo] : height[hi];
            int area = h * width;
            if (area > max)
            {
                max = area;
            }
            if (height[lo] < height[hi])
            {
                lo++;
            }
            else if (height[lo] > height[hi])
            {
                hi--;
            }
            else
            {
                lo++;
                hi--;
            }
        }

        return max;
    }
};
