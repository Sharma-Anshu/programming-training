#include <iostream>
#include <vector>
#include <algorithm>

std::pair<int, int> minMaxDiagonal (const std::vector<std::vector<int>>& grid) 
{
  if (grid.empty() || grid[0].empty()) 
  {
    return std::make_pair(-1, -1);
  }

  int rows = grid.size ();
  int cols = grid[0].size ();

  int max = grid[0][cols - 1];
  int min = grid[0][cols - 1];

  for (int i = 0; i < rows; ++i) 
  {
    //grid[i][cols - i - 1] <- current val
    int elem = grid[i][cols - i - 1];
    if (elem > max) 
    {
      max = elem;
    }
    if (elem < min) 
    {
      min = elem;
    }
  }
  return std::make_pair(min, max);
}

int main ()
{
  std::vector<std::vector<int>> test = 
  {
    {5, 1, 9, 11},
    {2, 4, 8, 10},
    {13, 3, 6, 7},
    {15, 14, 12, 16}
  };
  std::pair<int, int> testcase = minMaxDiagonal (test);
  std::cout << testcase.first << ", " << testcase.second << std::endl;
  return 0;
}
