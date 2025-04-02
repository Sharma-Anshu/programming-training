#include <iostream>
#include <cmath>

int sumDigitsPower (int n, int pos)
{
  if(n == 0)
  {
    return 0;
  }
  return sumDigitsPower (n / 10, pos + 1) + std::pow ((n % 10), pos);
}

int main ()
{
  std::cout << sumDigitsPower (253, 1) << std::endl;
  std::cout << sumDigitsPower (1000, 1) << std::endl;
  return 0;
}
