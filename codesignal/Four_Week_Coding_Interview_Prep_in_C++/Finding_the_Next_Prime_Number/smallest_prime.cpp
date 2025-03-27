#include <iostream>
#include <cmath>
#include <limits>

bool isPrime(int n)
{
  if(n <= 1)
  {
    return false;
  }
  for(int d = 2; d <= std::sqrt(n); d++)
  {
    if(n % d == 0)
    {
      return false;
    }
  }
  return true;
}

int smallestPrime(int n)
{
  int num = n + 1;
  while(n < std::numeric_limits<int>::max())
  {
    if(isPrime(num))
    {
      return num;
    }
    num++;
  }
  return -1;
}

int main()
{
  std::cout << smallestPrime(7) << std::endl;
  std::cout << smallestPrime(13) << std::endl;
  std::cout << smallestPrime(50) << std::endl;
  return 0;
}
