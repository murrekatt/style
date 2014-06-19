//
// This is some header with license, etc.
//
#ifndef MYCLASS_HPP
#define MYCLASS_HPP TRUE

#include<string>
#include<vector>

namespace myname {

class MyClass {
public:
    MyClass();
    ~MyClass();

    void sayHello_();
    int getAnswer_();
    bool isVarReady_();
    std::vector<std::string> complexMethod_();
private:
    int myInt_;
    std::string myString_;
};

} // namespace myname
#endif // MYCLASS_HPP
