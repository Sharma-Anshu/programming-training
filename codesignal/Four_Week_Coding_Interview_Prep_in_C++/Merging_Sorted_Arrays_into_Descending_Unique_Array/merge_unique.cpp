#include <iostream>
#include <vector>
#include <set>

std::vector<int> mergeUnique (const std::vector<int>& arr1, const std::vector<int>& arr2) 
{
  std::set<int> used_nums;
  std::vector<int> result;
  auto itr1 = arr1.rbegin();
  auto itr2 = arr2.rbegin();
  while (itr1 != arr1.rend() && itr2 != arr2.rend()) 
  {
    if (*itr1 > *itr2) 
    {
      if (!used_nums.contains (*itr1)) 
      {
        result.push_back (*itr1);
        used_nums.insert (*itr1);
      }
      itr1++;
    } else 
    {
      if (!used_nums.contains (*itr2)) 
      {
        result.push_back (*itr2);
        used_nums.insert (*itr2);
      }
      itr2++;
    }
  }
  while (itr1 != arr1.rend()) 
  {
    if (!used_nums.contains (*itr1)) 
    {
      result.push_back (*itr1);
      used_nums.insert (*itr1);
    }
    itr1++;
  }
  while (itr2 != arr2.rend()) 
  {
    if (!used_nums.contains (*itr2)) 
    {
      result.push_back (*itr2);
      used_nums.insert (*itr2);
    }
    itr2++;
  }
  return result;
}

int main () 
{
  std::vector<int> l1 = {1, 2, 3, 4, 5};
  std::vector<int> l2 = {3, 4, 5, 6, 7};
  std::vector<int> testcase = mergeUnique (l1, l2);
  for (const auto& n: testcase) 
  {
    std::cout << n << " ";
  }
  std::cout << std::endl;
  return 0;
}
