#include <iostream>
#include <vector>

int main() {
  // Use std::vector<int> or std::vector<char> to store boolean values as an alternative
  std::vector<char> vec; //or std::vector<int>
  vec.push_back(1); //1 for true, 0 for false
  vec.push_back(0);
  bool b = vec[0] == 1; //explicit type conversion
  bool c = vec[1] == 1;
  std::cout << b << " " << c << std::endl; 
  return 0;
} 