#include <iostream>
#include <string>
#include <unordered_map>

std::string commonChars (const std::string& str1, const std::string& str2) 
{
  std::unordered_map<char, int> freq_map;
  for (const auto& c: str2) 
  {
    freq_map[c]++;
  }
  std::string res = "";
  for (const auto& c: str1) 
  {
    if (freq_map[c] > 0) 
    {
      res += c;
      freq_map[c]--;
    }
  }
  return res;
}

int main () 
{
  std::cout << commonChar ("apple", "peach") << std::endl;
  return 0;
}
