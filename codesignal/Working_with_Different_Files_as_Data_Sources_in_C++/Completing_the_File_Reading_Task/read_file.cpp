#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main()
{
  std::string file_path = "input.txt";
  std::ifstream file(file_path);
  std::ostringstream content;

  content << file.rdbuf();

  std::cout << "Full file content:\n" << content.str() << std::endl;
  return 0;
}
