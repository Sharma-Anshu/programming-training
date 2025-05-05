#include <iostream>
#include <string>
#include <vector>

std::string largestCommonPrefix(const std::vector<std::string>& words) 
{
  std::string shortest = words[0];
  for (const auto& w: words) 
  {
    if (w.size() < shortest.size()) 
    {
      shortest = w;
    }
  }
  std::string res = "";
  for (size_t i = 0; i < shortest.size(); ++i) 
  {
    for (const auto& w: words) 
    {
      if (w[i] != shortest[i]) 
      {
        return res;
      }
    }
    res += shortest[i];
  }
  return res;
}

int main () 
{
  std::vector<std::string> test = {"tractor", "traffic", "transmit"};
  std::cout << largestCommonPrefix(test) << std::endl;
  return 0;
}
