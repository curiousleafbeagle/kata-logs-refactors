// kata: If you can't sleep, just count sheep!!
// link: https://www.codewars.com/kata/5b077ebdaf15be5c7f000077
// difficulty: 8 kyu
// initial submission: January 6, 2025 | tested: yes

#include <string>

std::string countSheep(int number) {
  std::string result; //output value display
  for (int i=1; i <=number; ++i)
    {
     result += std::to_string(i) + " sheep..."; //print number + sheep...
  }
return result; 

}
