// Question Link:-https://leetcode.com/problems/battleships-in-a-board/description/
/*
Given an m x n matrix board where each cell is a battleship 'X' or empty '.', return the number of the battleships on board.

Battleships can only be placed horizontally or vertically on board. In other words, they can only be made of the shape 1 x k (1 row, k columns) or k x 1 (k rows, 1 column), where k can be of any size. At least one horizontal or vertical cell separates between two battleships (i.e., there are no adjacent battleships).



Example 1:


Input: board = [["X",".",".","X"],[".",".",".","X"],[".",".",".","X"]]
Output: 2
Example 2:

Input: board = [["."]]
Output: 0


Constraints:

m == board.length
n == board[i].length
1 <= m, n <= 200
board[i][j] is either '.' or 'X'.


Follow up: Could you do it in one-pass, using only O(1) extra memory and without modifying the values board?
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int countBattleships(vector<vector<char>> &board)
    {

        int m = board.size();
        int n = board[0].size();
        int count = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (board[i][j] == 'X')
                {
                    if (i - 1 >= 0 && i - 1 < m && board[i - 1][j] == 'X')
                    {
                    }
                    else if (j - 1 >= 0 && j - 1 < n && board[i][j - 1] == 'X')
                    {
                    }
                    else
                    {
                        count++;
                    }
                }
            }
        }

        return count;
    }
};
int main()
{
    vector<vector<char>> board = {{'X', '.', '.', 'X'}, {'.', '.', '.', 'X'}, {'.', '.', '.', 'X'}};

    Solution ss;

    int ans = ss.countBattleships(board);

    cout << ans << endl;

    return 0;
}