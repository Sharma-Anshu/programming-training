#include <iostream>
#include <vector>

std::vector<int> mergeReverse (const std::vector<int>& l1, const std::vector<int>& l2) 
{
  std::vector<int> mergeVec;
  auto itr1 = l1.rbegin();
  auto itr2 = l2.rbegin();
  while (itr1 != l1.rend() && itr2 != l2.rend()) 
  {
    if (*itr1 > *itr2) 
    {
      mergeVec.push_back(*itr1);
      itr1++;
    } else 
    {
      mergeVec.push_back(*itr2);
      itr2++;
    }
  }
  while (itr1 != l1.rend()) 
  {
    mergeVec.push_back(*itr1);
    itr1++;
  }
  while (itr2 != l2.rend()) 
  {
    mergeVec.push_back(*itr2);
    itr2++;
  }
  return mergeVec;
}

int main () 
{
  std::vector<int> test1 = {1, 3, 5, 7, 9};
  std::vector<int> test2 = {2, 2, 3, 4, 6, 6};
  std::vector<int> testcase = mergeReverse (test1, test2);
  for (auto n: testcase) 
  {
    std::cout << n << " ";
  }
  std::cout << std::endl;
  return 0;
}
