class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
    if(flowerbed[0] == 0 && n > 0)
    {
        if(flowerbed.size() == 1)
        {
        
            flowerbed[0] = 1;
            n--;   
        
        } 
        else if(flowerbed[1] != 1)
        {

            flowerbed[0] = 1;
            n--; 
        }


    }
       

        
        for(int i = 1 ; i < flowerbed.size() - 1 ; i++)
        {
            if(n > 0 && flowerbed[i - 1] == 0 && flowerbed[i] == 0 && flowerbed[i + 1] == 0)
            {
                flowerbed[i] = 1;
                n--;
            }
        }

        if(n > 0 && flowerbed.size() >= 2 && flowerbed[flowerbed.size() - 1] == 0 && flowerbed[flowerbed.size() - 2] == 0)
        {
            flowerbed[flowerbed.size() - 1] == 1;
            n--;
        }

        if(n == 0)
        return true;

        return false;

       
    }
};

/*


You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent plots.

Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return true if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule and false otherwise.

 

Example 1:

Input: flowerbed = [1,0,0,0,1], n = 1
Output: true
Example 2:

Input: flowerbed = [1,0,0,0,1], n = 2
Output: false

*/
