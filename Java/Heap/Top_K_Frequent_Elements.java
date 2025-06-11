/*

Code


Testcase
Testcase
Test Result
347. Top K Frequent Elements
Solved
Medium
Topics
premium lock icon
Companies
Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

 

Example 1:

Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]
Example 2:

Input: nums = [1], k = 1
Output: [1]
 

Constraints:

1 <= nums.length <= 105
-104 <= nums[i] <= 104
k is in the range [1, the number of unique elements in the array].
It is guaranteed that the answer is unique.
 

Follow up: Your algorithm's time complexity must be better than O(n log n), where n is the array's size.
*/


class Solution {
    public int[] topKFrequent(int[] nums, int k) {

    HashMap<Integer,Integer> map = new HashMap<>();
    //populate the hashmap
    for (int num : nums) {
        map.put(num, map.getOrDefault(num, 0) + 1);
    }

    PriorityQueue<Integer> heap = new PriorityQueue<>(
        (a,b) -> Integer.compare(map.get(a),map.get(b))

    );

    for(int key: map.keySet())
    {
        heap.add(key);
        if(heap.size() > k)
        {
            heap.poll();
        }
    }

     int[] res = new int[k];
    int i = 0;
     for(int num: heap)
     {
        res[i++] = num;
     }

     return res;

    }
}
