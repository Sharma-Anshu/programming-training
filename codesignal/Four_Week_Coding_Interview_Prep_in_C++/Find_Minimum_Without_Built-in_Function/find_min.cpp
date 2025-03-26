#include <vector>
#include <iostream>
#include <optional>

std::optional<int> findMin(const std::vector<int>& nums)
{
  if(nums.size() == 0)
  {
    return std::nullopt;
  }else
  {
    int min_num = nums[0];
    for(int n: nums)
    {
      if(n < min_num)
      {
        min_num = n;
      }
    }
    return min_num;
  }
}

int main()
{
  std::vector<int> testcase1 = {1, 2, 3};
  std::vector<int> testcase2 = {};
  std::optional<int> result1 = findMin({5, 7, 1, 8});
  std::optional<int> result2 = findMin({});
  if(result1.has_value())
  {
    std::cout << result1.value() << std::endl;
  } else
  {
    std::cout << "null" << std::endl;
  }
  if(result2.has_value())
  {
    std::cout << result2.value() << std::endl;
  } else
  {
    std::cout << "null" << std::endl;
  }
  return 0;
}
