/*
    Maze Escape

    Sometimes when dealing with graphs, it is easiest to leave it in its input format 
    rather than creating another structure like an adjacency list/matrix. You are given 
    a graph represented as a vector of strings. Write a function 
    `traverse(vector<string>& graph)` that takes as input a graph and returns the length 
    of the shortest path between vertices `s` and `t`. If no path exists between `s` and 
    `t`, then return `-1`. The details of the graph as a vector of strings are as follows:

    1. The start position is represented by a 's' and will always be the first character of 
       the first string (`graph[0][0]`). 
    2. The end position is represented by a 't' and will always be the last character of the 
       final string (`graph[graph.size()-1][graph[0].length()-1]`).
    3. A '.' character represents a normal vertex in the graph.
    4. A '#' character represents that you cannot visit this vertex in the graph (or there 
       is no vertex at this position).
    5. Adjacent vertices are those immediately horizontal or vertical from the current vertex 
       (diagonal moves are not allowed).
    6. The cost of moving along one edge (from one vertex to an adjacent vertex) is always 1 
       (i.e. this is an unweighted graph).

    Sample Input
        s#.#.   
        .#...  
        ...#t    

    Sample Output: 8
*/

#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

int traverse(std::vector<std::string> &graph) 
{
    int rows = graph.size();
    int cols = graph[0].size();

    vector<vector<bool>>visited (rows, vector<bool>(cols, false));
    queue<pair<pair<int, int>, int>> q; // ((row, col), distance)

    // Initialize BFS
    q.push({{0, 0}, 0});
    visited[0][0] = true;

    // Directions array to explore 4 adjacent positions (up, down, left, right)
    int directions[4][2] = {{-1, 0},
                            {1, 0},
                            {0, -1},
                            {0, 1}};

    while(!q.empty()){
        auto current = q.front();
        q.pop();

        int row = current.first.first;
        int col = current.first.second;
        int distance = current.second;

        // Check if target 't' is reached
        if(graph[row][col] == 't'){
            return distance;
        }

        // Explore adjacent positions
        for(int i = 0; i < 4; i++){
            int newRow = row + directions[i][0];
            int newCol = col + directions[i][1];

            // check if new position is within bounds and not visited or blocked
            if(newRow >= 0 && newRow < rows && newCol >=0 && newCol < cols && !visited[newRow][newCol] && graph[newRow][newCol] != '#'){
                visited[newRow][newCol] = true;
                q.push({{newRow, newCol}, distance + 1});
            }
        }

    }

	return -1;
}
