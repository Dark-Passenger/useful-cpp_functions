#include <string>
#include <iostream>

namespace std
{
    inline int ctoi(char c)
    {
        return static_cast<int>(c) - 48;
    }
}

void do_Something(int x)
{
    std::cout << "int is : " << x << std::endl;
}

int main()
{
    char c = '2';
    std::cout << "char 2 is now int " << std::ctoi(c) << std::endl;

    c = '1';
    std::cout << "char 1 is now int " << std::ctoi(c) << std::endl;

    c = '3';
    std::cout << "char 3 is now int " << std::ctoi(c) << std::endl;

    std::string s ("2");

    std::cout << "string 2 is now int " << std::stoi(s) << std::endl;

    s = "1";
    std::cout << "string 1 is now int " << std::stoi(s) << std::endl;

    s = "3";
    std::cout << "string 3 is now int " << std::stoi(s) << std::endl;

    return 0;
}
