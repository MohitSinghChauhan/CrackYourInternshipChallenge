
#include <bits/stdc++.h>
using namespace std;

//* Approach 1

// int findDuplicate(vector<int>& nums) {

//         sort(nums.begin(),nums.end());

//         for(int i=0; i<nums.size(); i++){
//             if(nums[i]==nums[i+1] and i<nums.size()-1){
//                 return nums[i];
//             }
//         }
// 	return -1;
// }

//* Approach 2

int findDuplicate(vector<int> &nums)
{

    for (int i = 0; i < nums.size(); i++)
    {

        if (nums[abs(nums[i])] < 0)
        {
            return abs(nums[i]);
        }

        nums[abs(nums[i])] *= -1;
    }

    return -1;
}

int main()
{
    // your code goes here
    vector<int> arr{1, 3, 9, 6, 7, 5, 2, 8, 4, 3};
    cout << findDuplicate(arr);
    return 0;
}
