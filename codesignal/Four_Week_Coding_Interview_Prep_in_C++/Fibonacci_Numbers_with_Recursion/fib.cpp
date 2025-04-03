#include <iostream>
#include <unordered_map>

long long fib (int n)
{
  static std::unordered_map<int,long long> fib_nums;
  if (n == 0)
  {
    return 0;
  } else if (n <= 2)
  {
    return 1;
  }
  if (fib_nums.find(n) != fib_nums.end())
  {
    return fib_nums[n];
  }
  long long v = fib (n - 1) + fib (n - 2);
  fib_nums[n] = v;
  return v;
}

int main ()
{
  std::cout << fib (10) << std::endl;
  return 0;
}
