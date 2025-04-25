#include <iostream>
#include <vector>

void reverseVector (int arr[], int n)
{
  int tmp;
  for (int i = 0; i < n/2 ; ++i)
  {
    tmp = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = tmp;
  }
}


int main() 
{
  int test_1[3] = {1, 2, 3};
  int test_2[4] = {1, 2, 3, 4};
  reverseVector(test_1, 3);
  reverseVector(test_2, 4);
  for (int n: test_1)
  {
    std::cout << n << ", ";
  }
  std::cout << std::endl;
  for (int n: test_2)
  {
    std::cout << n << ", ";
  }
  return 0;
}
