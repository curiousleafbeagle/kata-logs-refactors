// kata: Convert a Number to a String!
// link: https://www.codewars.com/kata/5265326f5fda8eb1160004c8
// difficulty: 8 kyu
// initial submission: December 29, 2024 | tested: yes

#include <iostream>
#include <string>
using namespace std;

std::string number_to_string(int num) {
  cout << "Enter Number: ";
  cin >> num;
  string number_to_string = to_string(num);
  cout << "String is: " << number_to_string << endl;
  
  return number_to_string;
}
