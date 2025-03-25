#include <iostream>
#include <string>

std::string changeCase(const std::string& input_string)
{
  std::string result = "";
  for(char l: input_string)
  {
    if(l > 64 && l < 91)
    {
      result += static_cast<char>(l + 32);
    } else if(l > 96 && l < 123)
    {
      result += static_cast<char>(l -32);
    } else
    {
      result += l;
    }
  }
  return result;
}

int main()
{
  std::cout << changeCase("Aa_Zz_HelLo wOrLD 123") << std::endl;
  return 0;
} 
