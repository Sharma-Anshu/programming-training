#include <iostream>
#include <cmath>

bool isPerfectSquare(long long n)
{
  for(long long i = 1; i <= sqrt(n); i++)
  {
    if(n == i*i)
    {
      return true;
    }
  }
  return false;
}

int main()
{
  std::cout << isPerfectSquare(2) << std::endl;
  std::cout << isPerfectSquare(24) << std::endl;
  return 0;
}
