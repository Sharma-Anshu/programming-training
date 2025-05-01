#include <iostream>
#include <string>
#include <vector>

std::string longestCommonSuffix (const std::vector<std::string>& strs) 
{
  if (strs.empty()) return "";
  std::string shortest = strs[0];
  for (const auto& s: strs) 
  {
    if (s.size() < shortest.size()) 
    {
      shortest = s;
    }
  }

  std::string res;
  for (size_t i = 0; i < shortest.size(); ++i) 
  {
    char sel = shortest[shortest.size() - i - 1];
    for (const auto& s: strs) 
    {
      if (s[s.size() - i - 1] != sel) 
      {
        return res;
      }
    }
    res = sel + res;
  }
  return res;
}

int main () 
{
  std::vector<std::string> test = {"fake", "cake", "blake", "drake"};
  std::cout << longestCommonSuffix(test) << std::endl;
  return 0;
}
