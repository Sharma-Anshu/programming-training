#include <iostream>
#include <vector>

int findRow (const std::vector<std::vector<int>>& matrix, int target) 
{
  if (matrix.empty() && matrix[0].empty()) 
  {
    return -1;
  }

  int rows = matrix.size();
  int cols = matrix[0].size();

  int row = 0;
  int col = cols - 1;

  while (row < rows || col >= 0) 
  {
    if (matrix[row][col] == target) 
    {
      return row;
    } else if (matrix[row][col] > target) 
    {
      col--;
    } else 
    {
      row++;
    }
  }
  return -1;
}

int main () 
{
  std::vector<std::vector<int>> test = 
  {
    {1, 4, 7, 11},
    {2, 5, 8, 12},
    {3, 6, 9, 16}
  };
  std::cout << findRow(test, 9) << std::endl;
  return 0;
}
