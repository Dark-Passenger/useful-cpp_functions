#include <algorithm>
#include <string>
#include <iostream>

bool contains(const std::string& main_string, const std::string& sub_string)
{
    if(main_string.find(sub_string)!=std::string::npos)
        return true;

    return false;
}

int main()
{

    std::string main = "this is new for me";
    std::string sub = "new for me";

    if(contains(main, sub))
        std::cout << "string ends with sub" <<std::endl;
    else
        std::cout << "string does not end with sub" << std::endl;

    return 0;
}
