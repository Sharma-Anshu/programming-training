#include <iostream>
#include <vector>

bool isContiguousSublist (const std::vector<int>& listA, const std::vector<int>& listB)
{
  std::vector<int>::const_iterator itr_b = listB.begin();
  for (std::vector<int>::const_iterator itr_a = listA.begin(); itr_a != listA.end(); ++itr_a)
  {
    if (*itr_a == *itr_b)
    {
      itr_b++;
    } else
    {
      itr_b = listB.begin();
    }
    if (itr_b == listB.end())
    {
      return true;
    }
  }
  return false;
}

int main ()
{
  std::cout << isContiguousSublist({1, 2, 3, 4, 5}, {2, 3}) << std::endl;
  std::cout << isContiguousSublist({1, 3, 2, 4, 5}, {2, 3}) << std::endl;
  return 0;
}
