class Solution {
public:
    bool isMovingRight(int n) {
        return n > 0; 
    }

    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stk;

        for (int asteroid : asteroids) {
            bool destroyed = false; // ONLY FOR INCOMING ASTEROID

            while (!stk.empty() && isMovingRight(stk.top()) && !isMovingRight(asteroid)) {
                if (abs(stk.top()) < abs(asteroid)) {
                    stk.pop(); 
                } else if (abs(stk.top()) == abs(asteroid)) {
                    stk.pop(); 
                    destroyed = true;
                    break;
                } else {
                    destroyed = true; 
                    break;
                }
            }

            if (!destroyed) {
                stk.push(asteroid);
            }
        }

        vector<int> answer;
        while (!stk.empty()) {
            answer.push_back(stk.top());
            stk.pop();
        }

        reverse(answer.begin(), answer.end());
        return answer;
    }
};



/*

We are given an array asteroids of integers representing asteroids in a row.

For each asteroid, the absolute value represents its size, and the sign represents its direction (positive meaning right, negative meaning left). Each asteroid moves at the same speed.

Find out the state of the asteroids after all collisions. If two asteroids meet, the smaller one will explode. If both are the same size, both will explode. Two asteroids moving in the same direction will never meet.

 

Example 1:

Input: asteroids = [5,10,-5]
Output: [5,10]
Explanation: The 10 and -5 collide resulting in 10. The 5 and 10 never collide.
Example 2:

Input: asteroids = [8,-8]
Output: []
Explanation: The 8 and -8 collide exploding each other.
Example 3:

Input: asteroids = [10,2,-5]
Output: [10]
Explanation: The 2 and -5 collide resulting in -5. The 10 and -5 collide resulting in 10.
 

Constraints:

2 <= asteroids.length <= 10^4
-1000 <= asteroids[i] <= 1000
asteroids[i] != 0

*/
