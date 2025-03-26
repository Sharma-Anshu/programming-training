#include <string>
#include <iostream>

std::string swapCharacters(const std::string& s)
{
  std::string result = "";
  size_t n = s.size() - (s.size() % 2);
  for(size_t i = 0; i < n; i += 2)
  {
    result += s[i + 1];
    result += s[i];
  }
  if(n != s.size())
  {
    result += s[s.size() - 1];
  }
  return result;
}

int main()
{
  std::cout << swapCharacters("abcdef") << std::endl;
  std::cout << swapCharacters("hello") << std::endl;
  return 0;
}
