#include <iostream>
#include <vector>

int belowTarget (const std::vector<std::vector<int>>& matrix, int target)
{
  if (matrix.empty() || matrix[0].empty())
  {
    return 0;
  }

  int count = 0;

  int rows = matrix.size();
  int cols = matrix.size();

  int row = 0;
  int col = cols - 1;
  while (row < rows && col >= 0)
  {
    if (matrix[row][col] < target)
    {
      count += col + 1;
      row++; //moves down
    }else
    {
      col--; //moves left
    }
  }

  return count;
}

int main ()
{
  std::vector<std::vector<int>> matrix =  {
    {1, 2, 3, 4},
    {2, 3, 4, 5},
    {3, 4, 5, 6},
    {4, 5, 6, 7}
  };
  std::cout << belowTarget(matrix, 5) << std::endl;
  return 0;
}
