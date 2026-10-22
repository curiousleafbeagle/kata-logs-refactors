// kata: Convert a Boolean to a String
// link: https://www.codewars.com/kata/551b4501ac0447318f0009cd
// difficulty: 8 kyu
// initial submission: October 20, 2026 | tested: yes

#include <string>

std::string boolean_to_string(bool b){
  if (b)
    return "true"; //if b=true
  else
    return "false"; //if b=false
}
