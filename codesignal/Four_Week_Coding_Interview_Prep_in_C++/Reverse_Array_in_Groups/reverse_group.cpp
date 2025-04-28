#include <algorithm>
#include <iostream>
#include <vector>
#include <iterator>

std::vector<int> reverseInGroups (std::vector<int>& nums, int k) 
{
  std::vector<int> res (std::size (nums));
  size_t i;
  for (i = 0; i + k < std::size (nums); i+=k)
  {
    std::reverse_copy (std::begin (nums) + i, 
                      std::begin (nums) + i + k, 
                      std::begin(res) + i);
  }
  if (i < std::size (nums))
  {
    std::reverse_copy (std::begin (nums) + i,
              std::end (nums),
              std::begin (res) + i);
  }
  return res;
}

int main () 
{
  std::vector<int> test = {1, 2, 3, 4, 5, 6, 7 , 8, 9, 10, 11};
  std::vector<int> test_case = reverseInGroups (test, 3);
  for (const auto& n: test_case) 
  {
    std::cout << n << " ";
  }
  std::cout << std::endl;
  return 0;
}
