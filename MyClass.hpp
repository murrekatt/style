//
// This is some header with license, etc.
//
#ifndef MYNAME_MYCLASS_HPP
#define MYNAME_MYCLASS_HPP

#include <string>
#include <vector>

namespace myname
{

class MyClass
{
public:
  MyClass();
  ~MyClass();

  void sayHello();
  int getAnswer() const;
  bool isVarReady() const;
  std::vector<std::string> complexMethod();

private:
  int myInt_;
  std::string myString_;
};

} // namespace myname

#endif // MYNAME_MYCLASS_HPP
