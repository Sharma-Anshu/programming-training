#include <iostream>

std::vector<int> getPrimeFactors(int n)
{
  int num = n;
  std::vector<int> factors;
  if(num % 2 == 0)
  {
    factors.push_back(2);
    num = num / 2;
  }
  while(num % 2 == 0)
  {
    num = num / 2;
  }
  for(int f = 3; f * f < n; f+=2)
  {
    if(num % f == 0)
    {
      factors.push_back(f);
      num = num / f;
    }
    while(num % f == 0)
    {
      num = num / f;
    }
  }
  if(num != 1)
  {
    factors.push_back(n);
  }
  return factors;
}

int main()
{
  std::vector<int> result = getPrimeFactors(45);
  for(int n: result)
  {
    std::cout << n << std::endl;
  }
  return 0;
}
