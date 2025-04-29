#include <iostream>
#include <vector>
#include <algorithm>

void rearrange (std::vector<int>& nums) 
{
  size_t qtr = nums.size() / 4;
  size_t rem = nums.size() % 4;
  std::reverse(std::begin (nums), std::begin (nums) + (3 * qtr) + rem);
  std::reverse(std::begin (nums), std::begin (nums) + (2 * qtr) + rem);
  std::reverse(std::begin (nums) + (2 * qtr) + rem, std::begin (nums) + (3 * qtr) + rem);
}

int main () 
{
  std::vector<int> test1 = {1, 2, 3, 4, 5, 6, 7, 8};
  std::vector<int> test2 = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  rearrange (test1);
  rearrange (test2);

  for (const auto& n: test1) 
  {
    std::cout  << n << " ";
  }
  std::cout << std::endl;
  for (const auto& n: test2) 
  {
    std::cout  << n << " ";
  }
  std::cout << std::endl;

  return 0;
}
