#include <iostream>
#include <string>

std::string repeatingSubstring (const std::string& str) 
{
  for (size_t s = str.size() - 1; s > 0; --s) 
  {
    if (str.size() % s == 0) 
    {
      std::string ptn = str.substr(0, s);
      size_t l = s;
      bool flg = true;
      while (l < str.size()) 
      {
        if (str.substr(l, s) != ptn) 
        {
          flg = false;
          break;
        }
        l += s;
      }
      if (flg) 
      {
        return ptn;
      } 
    }
  }
  return "";
}

int main () 
{
  std::cout << repeatingSubstring ("abababab") << std::endl;
  return 0;
}
