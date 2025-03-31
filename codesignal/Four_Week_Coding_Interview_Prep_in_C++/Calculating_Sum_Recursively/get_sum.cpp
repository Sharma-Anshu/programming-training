#include <iostream>

int getSum (int n)
{
  if (n == 1)
  {
    return 1;
  }
  return getSum (n - 1) + n;
}

int main ()
{
  std::cout << getSum(5) << std::endl;
  std::cout << getSum(1) << std::endl;
  return 0;
}
