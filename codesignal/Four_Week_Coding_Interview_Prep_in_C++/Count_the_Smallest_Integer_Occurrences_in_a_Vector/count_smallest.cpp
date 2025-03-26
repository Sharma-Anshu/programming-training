#include <vector>
#include <iostream>
#include <limits>

int countSmallest(const std::vector<int>& nums)
{
  int min = std::numeric_limits<int>::max();
  int min_count = 0;
  for(int n: nums)
  {
    if(n < min)
    {
      min = n;
      min_count = 1;
    } else if(n == min)
    {
      min_count += 1;
    }
  }
  return min_count;
}

int main()
{
  std::cout << countSmallest({2, 3, 4, 2, 1, 1, 5}) << std::endl;
}
