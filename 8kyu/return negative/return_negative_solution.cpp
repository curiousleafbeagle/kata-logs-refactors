// kata: Return Negative
// link: https://www.codewars.com/kata/55685cd7ad70877c23000102
// difficulty: 8 kyu
// initial submission: January 1, 2025 | tested: yes

#include <string> 

int makeNegative(int num)
{
  std::string a = "-";
  std::string b = std::to_string(num);//convert int to str
  std::string c = a+b; //combine strings
  if (num < 0){
    return num;
  } 
  else if (num > 0){
    return std::stoi(c); //convert str to int
  }
  else{
  return num;
    }
  return num;
}
