#include <iostream>

bool areCoprime(int a, int b)
{
  int temp;
  if(b > a)
  {
    temp = b;
    b = a;
    a = temp;
  }
  while(b != 0)
  {
    temp = b;
    b = a % b;
    a = temp;
  }
  if(a != 1)
  {
    return false;
  }
  return true;
}

int main()
{
  std::cout << std::boolalpha << areCoprime(2, 3) << std::endl;
  std::cout << areCoprime(12, 9) << std::endl;
  std::cout << areCoprime(12, 11) << std::endl;
  return 0;
}
