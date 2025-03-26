#include <utility>
#include <vector>
#include <iostream>

std::pair<int, int> countEvenOdd(const std::vector<int>& nums)
{
  int even = 0;
  int odd = 0;
  for(int n: nums)
  {
    if(n % 2 == 0)
    {
      even += 1;
    } else
    {
      odd += 1;
    }
  }
  return std::make_pair(odd, even);
}

int main()
{
  std::pair<int, int> result = countEvenOdd({1, 2, 3, 4, 5, 6});
  std::cout << result.first << std::endl;
  std::cout << result.second << std::endl;
  return 0;
}
