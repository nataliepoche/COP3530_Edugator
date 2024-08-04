/*
    Exploring the swamp

    Explorer Albert, a coffee bean aficionado, is passing through a swamp while simultaneously
    trying to pick up as many coffee beans as possible. The swamp is represented by a m x n 
    integer array, swamp, where swamp[i][j] represents the number of coffee beans located at
    row i, column j of the swamp.

    Albert always enters the swamp at row 0, column 0, and always exits the swamp at row m, 
    column n. At each step, he moves either one unit to the right (across one column) or one
    unit down (across one row). When Albert visits swamp[i][j], he collects all the coffee beans
     at that location. Write a function that returns the maximum number of coffee beans that
    Albert can collect as he traverses through the swamp. Implement your solution using dynamic 
    programming.

    Sample Input:
        5 3 4
        8 6 9
        1 3 2
    
    Sample Output:
        30
*/

#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
using namespace std;

int swampExplorer(std::vector<std::vector<int>> &swamp_maze)
{
    // swamp_maze is the 2D grid of the swamp with coffee beans at each location
    // return the max beans that Albert can collect

    int m = swamp_maze.size();
    int n = swamp_maze[0].size();

    // Create DP table to store the maximum coffee beans collected up to each cell
    vector<vector<int>> dp(m, vector<int>(n, 0));

    // Initialize the starting point
    dp[0][0] = swamp_maze[0][0];

    // Fill the first row (can only come from the left)
    for(int i = 1; i < n; i++){
        dp[0][i] = dp[0][i - 1] + swamp_maze[0][i];
    }

    // Fill the first column(can only come from above)
    for(int i = 1; i < m; i++){
        dp[i][0] = dp[i - 1][0] + swamp_maze[i][0];
    }

    // Fill the rest of the DP table
    for(int i = 1; i < m; i++){
        for(int j = 1; j < n; j++){
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + swamp_maze[i][j];
        }
    }

    // The bottom-right cell contains the maximum number of coffee beans collected
    return dp[m -1][n - 1];
}