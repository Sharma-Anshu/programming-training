#include <string>
#include <cctype>
#include <iostream>

bool isPalindrome(const std::string& str)
{
  size_t left = 0;
  size_t right = str.size() - 1;
  while(left <= right)
  {
    if(std::isalnum(str[left]) && std::isalnum(str[right]))
    {
      if(std::tolower(str[left]) != std::tolower(str[right]))
      {
        return false;
      }
      left++;
      right--;
    } else if(std::isalnum(str[left]) == false)
    {
      left++;
    } else if(std::isalnum(str[right]) == false)
    {
      right--;
    }
  }
  return true;
}

int main()
{
  std::cout << std::boolalpha;
  std::cout << isPalindrome("racecar") << std::endl;
  std::cout << isPalindrome("A1B2!c3c2b1a") << std::endl;
  return 0;
}
