#include <iostream>

using namespace std;

/**
 * In this "algorithm" we'll list and
 * explain types of variables on c++ 
 */

// This is how we declare a valriable in cpp,
// this actually is not required, this is just fro compiler
// but, Is nice to know about sintax and definitions of cpp
extern int variableDeclared;
extern float aSecondVariableDeclared;

int main() {
  /**
   * The types of var are:
   * Boolean
   * Character
   * Integer
   * Floating point
   * Duoble floating point
   * Valueless
   * Wide character
   * 
   * Also in cpp we have something called modifiers
   * Signed
   * Unsigned
   * Short
   * Long
   */
  
  // We'll list the total size in memory of each type of variable
  // in bytes
  cout << "Size of char : " << sizeof(char) << endl;
  cout << "Size of int : " << sizeof(int) << endl;
  cout << "Size of short int : " << sizeof(short int) << endl;
  cout << "Size of long int : " << sizeof(long int) << endl;
  cout << "Size of float : " << sizeof(float) << endl;
  cout << "Size of double : " << sizeof(double) << endl;
  cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

  // actually we can set custom alias to defined types in cpp with this sintax
  typedef int customIntNaming;
  customIntNaming intNumber = 100; //is the same as int

  // enumerated types
  enum Colors { red, green, blue, white, black };
  Colors c = black;

  // vars definitions in cpp
  bool tinyBool;
  char characterValue;
  int intNumber1;
  float floatNumber;
  double doubledNumber;

  // finally var initialization
  tinyBool = true;
  intNumber = 100;

  // void voidValueless; This one is not allowed
  return 0;
}

// This is something vey nice, how to define constants in cpp
// Using #define preprocesor
#define PIVALUE 3.14;

// Using const keyword (ES6 took this feature!!)
const int WIDTH = 10;

// function declarions works same as variables definitions
int customFunction() {
  // we have to return a int value
  // as we saay in our definition of this function 
  return 100;
}
