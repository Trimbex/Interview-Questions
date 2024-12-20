class Solution {
public:

 int maxArea(vector<int>& height) 
 {
       int Left = 0, Right = height.size() - 1;
       int maxArea = 0;
       while(Left < Right)
       {
        maxArea = max(maxArea, min(height[Left], height[Right]) * (Right - Left));
        height[Left] >= height[Right] ? Right-- : Left++;
       }

       return maxArea;
 }
    // BRUTE FORCE
    // int maxArea(vector<int>& height) {
    //     int max;
    //     vector<int> areas;
    //     for(int i = 0 ; i < height.size() ; i++)
    //     {
    //         for(int j = 0 ; j < height.size() ; j++)
    //         {

    //             areas.push_back(min(height[i],height[j]) * abs(j - i));
    //         }
    //     }

    //     std::sort(areas.begin(),areas.end());
    //     return areas[areas.size() - 1];
        
    // }
};

/*

You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.

 

Example 1:


Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
Example 2:

Input: height = [1,1]
Output: 1
 

Constraints:

n == height.length
2 <= n <= 105
0 <= height[i] <= 104 */
