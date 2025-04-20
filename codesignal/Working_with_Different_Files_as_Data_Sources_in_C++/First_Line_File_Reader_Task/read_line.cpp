#include <iostream>
#include <fstream>
#include <string>

int main() 
{
  std::string file_path = "input.txt";
  std::ifstream file(file_path);
  std::string line;

  // TODO: Use std::getline to read the first line from the file
  std::getline(file, line);
  // TODO: Print the first line to the console
  std::cout << line << std::endl;
  return 0;
}
