#include <iostream>

void reverseArr (int arr[], int s, int e) 
{
  std::cout << "Start Reverse: " << s << " " << e << std::endl;
  int tmp;
  for (int i = s; i < s + ((e - s) / 2); ++i) 
  {
    std::cout << arr[i] << " " << arr[s + e - i - 1] << std::endl;
    tmp = arr[i];
    arr[i] = arr[s + e - i - 1];
    arr[s + e - i - 1] = tmp;
  }
}

void antiRotate (int nums[], int n, int k) 
{
  k = k % n; // Ensure k is within the bounds of the vector length

  //Reverse the Entire array
  reverseArr(nums, 0, n);
  //Reverse the last k elements
  reverseArr(nums, (n - k), n);
  //Reverse the rest of the vector
  reverseArr(nums, 0, (n - k));
}

int main () 
{
  int test[7] = {1, 2, 3, 4, 5, 6, 7};
  antiRotate (test, 7, 3);
  for (int n: test) 
  {
    std::cout << n << " ";
  }
  std::cout << std::endl;
}
