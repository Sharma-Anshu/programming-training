#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main()
{
  std::string file_path = "input.txt";
  std::ifstream file(file_path);
  std::string word1, word2;

  file >> word1 >> word2;
  std::cout << "First word: " << word1 << std::endl;
  std::cout << "Second word: " << word2 << std::endl;
  return 0;
}
