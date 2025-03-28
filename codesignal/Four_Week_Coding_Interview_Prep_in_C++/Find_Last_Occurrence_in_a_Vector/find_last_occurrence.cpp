#include <iostream>
#include <vector>

int findLastOccurrence(const std::vector<int>& nums, int val)
{
  for(int i = nums.size() - 1; i >= 0; i--)
  {
    if(nums[i] == val)
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  std::vector<int> test = {1, 2, 3, 4, 5};
  std::cout << findLastOccurrence(test, 5) << std::endl;
  std::cout << findLastOccurrence(test, 10) << std::endl;
  return 0;
}
