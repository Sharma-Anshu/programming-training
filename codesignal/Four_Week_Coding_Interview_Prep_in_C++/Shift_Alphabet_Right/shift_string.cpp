#include <string>
#include <iostream>

std::string shiftString(const std::string &s)
{
  std::string result = "";
  for(char l: s)
  {
    if (l == 'z')
    {
      result += 'a';
    } else if (l == 'Z')
    {
      result += 'A';
    } else if ((l > 64 && l < 90)||(l > 96 && l < 122))
    {
      result += static_cast<char>(l + 1);
    } else
    {
      result += l;
    }

  }
  return result;
}

int main()
{
  std::cout << "Test Case" << std::endl;
  std::cout << shiftString("abc123XYz!") << std::endl;

}
