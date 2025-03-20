#include <vector>
#include <string>
#include <cctype>
#include <iostream>

std::vector<int> findVowels(const std::string& s)
{
  std::vector<int> vowels_indx;
  char l;
  for (int i = 0; i < s.size(); i++)
  {
    l = std::tolower(s[i]);
    if (l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u')
    {
      vowels_indx.push_back(i);
    }
  }
  return vowels_indx;
}

int main()
{
  std::string test = "Hello WORLD";
  std::vector<int> result = findVowels(test);
  for (int i = 0; i < result.size(); ++i)
  {
    std::cout << result[i];
    if (i != result.size() - 1)
    {
      std::cout << ",";
    }
  }
  return 0;
}
