class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int size = grid.size();
        unordered_map<string,int> rows,cols;
        string rowKey,colKey;
        int result = 0;

        //fill rows

        for(int i = 0 ; i < size ; i++)
        {
            rowKey = "";
            for(int j = 0 ; j < size ; j++)
            {
                rowKey += to_string(grid[i][j]) + ",";
            }
            rows[rowKey]++;
            
        }

        //fill cols
        
        for(int i = 0 ; i < size ; i++)
        {
            colKey = "";
            for(int j = 0 ; j < size ; j++)
            {
                colKey += to_string(grid[j][i]) + ",";
            }
            cols[colKey]++;
            
        }

      for (const auto& entry : rows) {
            result += entry.second * cols[entry.first];  
        }




        return result;

        
    
   
        
    }
};



/*
Given a 0-indexed n x n integer matrix grid, return the number of pairs (ri, cj) such that row ri and column cj are equal.

A row and column pair is considered equal if they contain the same elements in the same order (i.e., an equal array).

 

Example 1:


Input: grid = [[3,2,1],[1,7,6],[2,7,7]]
Output: 1
Explanation: There is 1 equal row and column pair:
- (Row 2, Column 1): [2,7,7]
Example 2:


Input: grid = [[3,1,2,2],[1,4,4,5],[2,4,2,2],[2,4,2,2]]
Output: 3
Explanation: There are 3 equal row and column pairs:
- (Row 0, Column 0): [3,1,2,2]
- (Row 2, Column 2): [2,4,2,2]
- (Row 3, Column 2): [2,4,2,2]
 

Constraints:

n == grid.length == grid[i].length
1 <= n <= 200
1 <= grid[i][j] <= 10^5
*/
