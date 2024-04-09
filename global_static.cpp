// C++ program to demonstrate a global static keyword 
#include <iostream> 
class Test { 
public: 
    int a; 
    Test() 
    { 
        a = 10; 
        std::cout << "Constructor is executed\n"<<a; 
    } 
    ~Test() { std::cout << "Destructor is executed\n"; } 
}; 

int main() 
{
    std::cout << "main() starts\n"; 
     static Test obj; 
    std::cout << obj.a; 
    std::cout << "\nmain() terminates\n"; 
    return 0; 
}