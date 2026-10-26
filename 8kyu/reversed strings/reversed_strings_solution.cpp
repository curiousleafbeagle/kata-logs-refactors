// kata: Reversed Strings
// link: https://www.codewars.com/kata/5168bb5dfe9a00b126000018
// difficulty: 8 kyu
// initial submission: January 7, 2025 | tested: yes

#include <string>
using namespace std ; 

string reverseString (string str )
{
  reverse(str.begin(), str.end());
  return str ;
}
