#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

std::string efficientLCP (std::vector<std::string>& strs) 
{
  std::sort(strs.begin(), strs.end());
  std::string shortest = strs.front();
  std::string longest = strs.back();
  std::string prefix;
  for (size_t i = 0; i < shortest.size(); ++i) 
  {
    if (shortest[i] != longest[i]) 
    {
      break;
    }
    prefix += shortest[i];
  }
  return prefix;
}

int main () 
{
  std::vector<std::string> test = {"tractor", "traffic", "transmit"};
  std::cout << efficientLCP(test) << std::endl;
  return 0;
}
