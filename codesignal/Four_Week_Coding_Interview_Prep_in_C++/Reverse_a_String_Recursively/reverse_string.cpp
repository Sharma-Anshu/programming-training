#include <iostream>
#include <string>

std::string reverseString (const std::string& s)
{
  if (s.size () == 0)
  {
    return "";
  }
  return s.back () + reverseString (s.substr (0, s.size() - 1));
}

int main ()
{
  std::cout << reverseString ("hello") << std::endl;
  return 0;
}
