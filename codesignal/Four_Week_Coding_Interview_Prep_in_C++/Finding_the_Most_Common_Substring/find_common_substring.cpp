#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
#include <vector>

std::string findCommonSubstring(const std::string& str, int len) 
{
  std::unordered_map<std::string, int> frq_map;
  for (size_t i = 0; i < str.size() - (len - 1); ++i) 
  {
    frq_map[str.substr(i, len)] += 1;
  }
  std::string result;
  int most_common = 0;
  for (const auto& [k, v]: frq_map) 
  {
    if (v > most_common) 
    {
      result = k;
      most_common = v;
    } 
    else if (v == most_common && k < result) 
    {
      result = k;
    }
  }
  return result;
}

int main () 
{
  std::string test = "bananabananaba";
  std::cout << findCommonSubstring(test, 5) << std::endl;
  return 0;
}
