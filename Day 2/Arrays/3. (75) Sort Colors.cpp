// Problem link: https://leetcode.com/problems/sort-colors/

#include <bits/stdc++.h>
using namespace std;

//* Approach 1, Simply Sort with Merge Sort, time: O(N*logN)

//* Approach 2, time: O(N) but Two pass

// class Solution
// {
// public:
//     void sortColors(vector<int> &nums)
//     {
//         int cnt0 = 0, cnt1 = 0, cnt2 = 0;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (nums[i] == 0)
//                 cnt0++;
//             else if (nums[i] == 1)
//                 cnt1++;
//             else
//                 cnt2++;
//         }
//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (cnt0)
//             {
//                 nums[i] = 0;
//                 cnt0--;
//                 continue;
//             }
//             else if (cnt1)
//             {
//                 nums[i] = 1;
//                 cnt1--;
//                 continue;
//             }
//             else
//             {
//                 nums[i] = 2;
//                 cnt2--;
//                 continue;
//             }
//         }
//     }
// };

//* Approach 3, Dutch National Flag Algo (three pointers approach - low, mid, high),
//* time: O(N) and One Pass
//* space: O(1)

/*
  Algorithm:
    Consider three pointers low = 0, mid = 0, high = nums.size() - 1
    The algorithm ensures that at any point, every element before low is 0, every element after high is 2, every element in between are either 0, 1 or 2 i.e. unprocessed.
    We'll use mid pointer to traverse and check the array elements i.e. while(mid <= high). Three cases are possible:
    -> nums[mid] == 0 In this case swap(nums[low], nums[mid] and increment both low and mid pointer i.e. low++ mid++
    -> nums[mid] == 1 In this case mid++
    -> nums[mid] == 2 In this case swap(nums[mid], nums[high] and decrement high pointer i.e. high--

*/

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int n = nums.size();
        int low = 0, mid = 0, hi = n - 1;

        while (mid <= hi)
        {
            if (nums[mid] == 0)
            {
                swap(nums[mid], nums[low]);
                mid++;
                low++;
            }
            else if (nums[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(nums[mid], nums[hi]);
                hi--;
                //! We are here not incrementing mid pointer index i.e, mid++ bcoz if we do that so then previous index of mid pointer will remian unprocessed
                //! suppose we swap a[hi]=0 to a[mid]=2 then 0 at a[mid] will remain unprocessed (remain after low pointer) bcoz mid pointer move 1 index forward
            }
        }
    }
};