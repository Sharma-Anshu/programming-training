#include <iostream>
#include <vector>

std::vector<int> decreasingSequence(int n)
{
  if (n == 1)
  {
    return {1};
  }
  std::vector<int> res = {n};
  std::vector<int> seq = decreasingSequence(n - 1);
  res.insert(res.end(), seq.begin(), seq.end());
  return res;
}

int main()
{
  std::vector<int> testcase = decreasingSequence(5);
  for(std::vector<int>::iterator itr = testcase.begin(); itr != testcase.end(); ++itr)
  {
    std::cout << *itr;
    if(itr != testcase.end() - 1)
    {
      std::cout << ", ";
    }
  }
  std::cout << std::endl;
  return 0;
}
