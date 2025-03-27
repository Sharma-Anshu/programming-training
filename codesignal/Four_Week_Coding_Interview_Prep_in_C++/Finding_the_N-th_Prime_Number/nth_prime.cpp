#include <iostream>
#include <vector>

int isPrime(int n, std::vector<int>& primes)
{
  for(int i = 0; i <= primes.size(); ++i)
  {
    if(n % primes[i] == 0)
    {
      return false;
    }
    if(primes[i] * primes[i] > n)
    {
      break;
    }
  }
  return true;
}

int nthPrime(int n)
{
  int counter = n;
  std::vector<int> primes;
  primes.push_back(2);
  counter--;
  int num = 3;
  while(counter > 0)
  {
    if(isPrime(num, primes))
    {
      primes.push_back(num);
      counter--;
    }
    num += 2;
  }
  return primes[n - 1];
}

int main()
{
  std::cout << nthPrime(5) << std::endl;
  return 0;
}
