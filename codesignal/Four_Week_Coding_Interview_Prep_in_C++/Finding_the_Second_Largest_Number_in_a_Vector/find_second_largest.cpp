#include <iostream>
#include <vector>
#include <optional>

std::optional<int> findSecondLargest(const std::vector<int>& nums)
{
  std::optional<int> largest;
  std::optional<int> second_largest;

  for(int n: nums)
  {
    if(largest)
    {
      if(*largest < n)
      {
        second_largest = largest;
        largest = n;
      }else 
      {
        if(second_largest)
        {
          if(*second_largest < n && *largest != n)
          {
            second_largest = n;
          }
        } else if(*largest != n)
        {
          second_largest = n;
        }
      }
    }else 
    {
      largest = n;
    }
  }
  
  return second_largest;
}

int main()
{
  std::vector<int> testcase = {6, 6};
  std::optional<int> result = findSecondLargest(testcase);
  if(result)
  {
    std::cout << *result << std::endl;
  } else
  {
    std::cout << "null" << std::endl;
  }
  return 0;
}
