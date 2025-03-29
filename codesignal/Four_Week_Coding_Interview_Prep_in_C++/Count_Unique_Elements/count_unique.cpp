#include <iostream>
#include <vector>
#include <unordered_map>

int countUnique(const std::vector<int>& lst)
{
  std::unordered_map<int, int> frq_map;
  for(int n: lst)
  {
    frq_map[n]++;
  }
  int unique_count = 0;
  for(const auto& pair : frq_map)
  {
    if(pair.second == 1)
    {
      unique_count++;
    }
  }
  return unique_count;
}

int main()
{
  std::cout << countUnique({1, 2, 2, 3, 4, 5, 4}) << std::endl;
  return 0;
}
