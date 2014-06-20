//
// This is some header with license, etc.
//

#include "MyClass.hpp"

#include "some_locale.hpp"
#include "other_locale.hpp"

#include <iostream>

namespace myname
{

MyClass::MyClass()
  : myInt_(5)
  , myString_("Hi!")
{
}

MyClass::~MyClass()
{
}

void MyClass::sayHello()
{
  std::cout << "Hello\n";
}

int MyClass::getAnswer() const
{
  return 42;
}

bool MyClass::isVarReady() const
{
  return true;
}

std::vector<std::string> MyClass::complexMethod()
{
  int num = 25;
  std::vector<std::string> strings;

  if (num % 5)
  {
    strings.push_back(std::string("divisable by 5"));
  }
  else if (num % 3)
  {
    strings.push_back(std::string("divisable by 3"));
  }
  else
  {
    strings.push_back(std::string("not divisable by 3 nor 5"));
  }
  
  for (auto& string : strings)
    std::cout << string << std::endl;
  
  if (isVarReady())
    return strings;

  return std::vector<std::string>();
}

} // namespace myname
