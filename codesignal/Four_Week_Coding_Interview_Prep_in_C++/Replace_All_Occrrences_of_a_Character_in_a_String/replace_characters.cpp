#include <string>
#include <iostream>

std::string replaceCharacters(const std::string &input_string, char c1, char c2)
{
  std::string result = "";
  for(char l: input_string)
  {
    if(l != c1)
    {
      result += l;
    } else
    {
      result += c2;
    }
  }
  return result;
}

int main()
{
  std::cout << replaceCharacters("Hello World", 'o', 'a') << std::endl;
}
