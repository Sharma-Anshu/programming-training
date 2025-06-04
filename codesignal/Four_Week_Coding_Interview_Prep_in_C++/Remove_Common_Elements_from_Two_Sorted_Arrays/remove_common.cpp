#include <iostream>
#include <vector>

std::vector<int> removeCommon (const std::vector<int>& l1, const std::vector<int>& l2) 
{
  std::vector<int> result;
  auto itr1 = l1.begin();
  auto itr2 = l2.begin();
  while (itr1 != l1.end() && itr2 != l2.end()) 
  {
    if (*itr1 < *itr2) 
    {
      result.push_back(*itr1);
      itr1++;
    }else if (*itr1 > *itr2) 
    {
      result.push_back(*itr2);
      itr2++;
    }else 
    {
      itr1++;
      itr2++;
    }
  }
  while (itr1 != l1.end()) 
  {
    result.push_back(*itr1);
    itr1++;
  }
  while (itr2 != l2.end()) 
  {
    result.push_back(*itr2);
    itr2++;
  }
  return result;
}

int main () 
{
  std::vector<int> arr1 = {2, 5, 7, 10};
  std::vector<int> arr2 = {1, 5, 9};
  std::vector<int> test = removeCommon (arr1, arr2);
  for (const auto n: test) 
  {
    std::cout << n << " ";
  }
  std::cout << std::endl;
  return 0;
}
