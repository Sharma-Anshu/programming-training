#include <iostream>
#include <vector>

std::vector<int> shiftListElements (const std::vector<int>& lst, int shift)
{
  std::vector<int> result;
  int s = shift % static_cast<int>(lst.size());
  if (s < 0)
  {
    s = lst.size() + s;
  }
  for (std::vector<int>::const_iterator iter = lst.end() - s; iter != lst.end(); ++iter)
  {
    result.push_back(*iter);
  }
  for (std::vector<int>::const_iterator iter = lst.begin(); iter != lst.end() - s; ++iter)
  {
    result.push_back(*iter);
  }
  return result;
}

void displayVec (const std::vector<int>& lst)
{
  for (std::vector<int>::const_iterator iter = lst.begin(); iter != lst.end(); ++iter)
  {
    std::cout << *iter;
    if (iter != lst.end() - 1)
    {
      std::cout << ", ";
    }
  }
  std::cout << std::endl;
}

int main ()
{
  std::vector<int> test = {1, 2, 3, 4, 5};
  std::vector<int> tcase = shiftListElements (test, 2);
  displayVec (tcase);
  std::vector<int> tcase2 = shiftListElements (test, -1);
  displayVec (tcase2);
  return 0;
}
