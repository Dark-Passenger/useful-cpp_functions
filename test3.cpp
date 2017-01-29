#include <algorithm>
#include <string>
#include <iostream>

inline bool starts_with(const std::string& main_string, const std::string& sub_string)
{
    if (sub_string.size() > main_string.size())
        return false;

    return std::equal(sub_string.begin(),sub_string.end(), main_string.begin());

}

int main()
{
    std::string main = "this is new for me";
    std::string sub = "is this the new life is the a fantasy";

    if(starts_with(main, sub))
        std::cout << "string starts with sub" <<std::endl;
    else
        std::cout << "string does not start with sub" << std::endl;

    return 0;
}
