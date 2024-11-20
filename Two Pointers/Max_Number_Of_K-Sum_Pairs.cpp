class Solution {
public:
    int maxOperations(vector<int>& nums, int k)
    {
        sort(nums.begin(),nums.end());

        int Left = 0; int Right = nums.size() - 1; int count = 0;

        while(Left < Right)
        {
            if(nums[Left] + nums[Right] == k)
            {
                Left++;
                Right--;
                count++;
            } 
            else if(nums[Left] + nums[Right] > k)
            Right--;
            else 
            Left++;

        
        }

        return count;
    }


        
    
    // BRUTE FORCE
    // int maxOperations(vector<int>& nums, int k) {
    //     int count = 0;
    //     int size = nums.size();

    //     for(int i = 0 ; i < size ; i++)
    //     {
    //         for(int j = 0 ; j < size ; j++)
    //         {
    //             if(i != j && (nums[i] + nums[j] == k))
    //             {
    //                 nums.erase(nums.begin() + i);
    //                 nums.erase(nums.begin() + j - 1);
    //                 count++;
    //                 i = 0; j = 0;
    //                 size = nums.size();


    //             }

    //         }
    //     }

    //    return count;
        
    // }
};




/* 
You are given an integer array nums and an integer k.

In one operation, you can pick two numbers from the array whose sum equals k and remove them from the array.

Return the maximum number of operations you can perform on the array.

 

Example 1:

Input: nums = [1,2,3,4], k = 5
Output: 2
Explanation: Starting with nums = [1,2,3,4]:
- Remove numbers 1 and 4, then nums = [2,3]
- Remove numbers 2 and 3, then nums = []
There are no more pairs that sum up to 5, hence a total of 2 operations.
Example 2:

Input: nums = [3,1,3,4,3], k = 6
Output: 1
Explanation: Starting with nums = [3,1,3,4,3]:
- Remove the first two 3's, then nums = [1,4,3]
There are no more pairs that sum up to 6, hence a total of 1 operation.
 

Constraints:

1 <= nums.length <= 10^5
1 <= nums[i] <= 10^9
1 <= k <= 10^9
*/
