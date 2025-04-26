#include <iostream>
#include <vector>

std::vector<int> shuffleArray (std::vector<int> nums, int k)
{
  std::vector<int> res;
  std::vector<int> shuffle;
  for (size_t i = 0; i < nums.size(); ++i) 
  {
    if ((i + 1) % k == 0) 
    {
      shuffle.push_back(nums[i]);
    } else 
    {
      res.push_back(nums[i]);
    }
  }

  for (const auto& n: shuffle) 
  {
    res.push_back(n);
  }

  return res;
}

int main () 
{
  std::vector<int> test = {1, 2, 3, 4, 5, 6, 7, 8};
  std::vector<int> testcase = shuffleArray(test, 3);
  for (const auto& n: testcase) 
  {
    std::cout << n << " ";
  }
  std::cout << std::endl;
  return 0;
}
