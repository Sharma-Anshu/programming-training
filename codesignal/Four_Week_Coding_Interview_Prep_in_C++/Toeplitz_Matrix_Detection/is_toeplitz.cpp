#include <iostream>
#include <vector>

bool isToeplitz (const std::vector<std::vector<int>>& matrix)
{
  if (matrix.empty() || matrix[0].empty())
  {
    return true;
  }

  size_t rows = matrix.size();
  size_t cols = matrix[0].size();

  for (size_t i = 0; i < rows - 1; ++i)
  {
    for (size_t j = 0; j < cols - 1; ++j)
    {
      if (matrix[i][j] != matrix[i + 1][j + 1])
      {
        return false;
      }
    }
  }
  return true;
}

int main()
{
  std::vector<std::vector<int>> test_1 = {{6, 7, 8}, {4, 6, 7}, {1, 4, 6}};
  std::vector<std::vector<int>> test_2 = {{6, 7, 8}, {4, 6, 7}, {1, 4, 7}};
  std::cout << std::boolalpha;
  std::cout << isToeplitz(test_1) << std::endl;
  std::cout << isToeplitz(test_2) << std::endl;
  return 0;
}
