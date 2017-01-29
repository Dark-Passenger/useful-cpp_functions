#include <algorithm>
#include <string>
#include <iostream>

bool ends_with(const std::string& main_string, const std::string& sub_string)
{
    if (sub_string.size() > main_string.size())
        return false;

    return std::equal(sub_string.rbegin(),sub_string.rend(), main_string.rbegin());
}

int main()
{
    std::string main = "this is new for me";
    std::string sub = "and me";

    if(ends_with(main, sub))
        std::cout << "string ends with sub" <<std::endl;
    else
        std::cout << "string does not end with sub" << std::endl;

    return 0;
}
