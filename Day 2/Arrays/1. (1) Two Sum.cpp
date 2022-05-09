// Problem link: https://leetcode.com/problems/two-sum/
#include <bits/stdc++.h>
using namespace std;

// * Approach 1 #Bruteforce - O(n^2)

// class Solution
// {
// public:
//     vector<int> twoSum(vector<int> &nums, int target)
//     {
//         vector<int> ans;
//         int n = nums.size();

//         for (int i = 0; i < n; i++)
//         {
//             int k = target - num[i]; //! this line saves operations of calculating nums[i] again nd again in inner loop.
//             for (int j = i + 1; j < n; j++)
//             {
//                //* if (nums[i] + nums[j] == target)
//                 if (nums[j] == k)
//                 {
//                     ans.push_back(i);
//                     ans.push_back(j);
//                     break;
//                 }
//             }
//         }

//         return ans;
//     }
// };

// * Approach 3 #Hashmap time - O(n), space - O(n) 

// class Solution
// {
// public:
//     vector<int> twoSum(vector<int> &nums, int target)
//     {
//         vector<int> ans;
//         unordered_map<int, int> map;
//         int n = nums.size();
//         for (int i = 0; i < n; i++)
//         {
//             int numberToFind = target - nums[i];
//             if (map.find(numberToFind) != map.end())
//             {
//                 ans.push_back(map[numberToFind]);
//                 ans.push_back(i);
//                 break;
//             }

//             map[nums[i]] = i;
//         }

//         return ans;
//     }
// };
