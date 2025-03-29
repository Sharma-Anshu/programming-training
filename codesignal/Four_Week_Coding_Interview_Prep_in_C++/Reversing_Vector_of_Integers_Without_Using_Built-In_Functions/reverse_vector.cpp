#include <iostream>
#include <vector>

std::vector<int> reverseVector (const std::vector<int>& lst)
{
  std::vector<int> result;
  for (std::vector<int>::const_reverse_iterator rit = lst.rbegin(); rit != lst.rend(); ++rit)
  {
    result.push_back(*rit);
  }
  return result;
}

int main()
{
  std::vector<int> test = {1, 2, 3, 4, 5};
  std::vector<int> testcase = reverseVector (test);
  for (std::vector<int>::iterator itr = testcase.begin(); itr != testcase.end(); ++itr)
  {
    std::cout << *itr;
    if (itr != testcase.end() - 1)
    {
      std::cout << ", ";
    }
  }
  std::cout << std::endl;
  return 0;
}
