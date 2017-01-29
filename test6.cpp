#include <vector>
#include <string>
#include <iostream>

std::vector<std::string> split_string(
        const std::string& main_string,
        const char delimiter = ' ')
{
    std::size_t last_position = main_string.find_first_not_of(delimiter, 0);
    std::size_t position = main_string.find_first_of(delimiter, last_position);
    std::vector<std::string> tokens;

    while (position != std::string::npos || last_position != std::string::npos)
    {
        tokens.emplace_back(main_string.substr(last_position, position - last_position));
        last_position = main_string.find_first_not_of(delimiter, position);
        position = main_string.find_first_of(delimiter, last_position);
    }

    return tokens;
}


void split_string(
        std::vector<std::string>& tokens,
        const std::string &main_string,
        const char delimiter = ' ')
{
    //Skip delimiter at beginning
    std::size_t last_position = main_string.find_first_not_of(delimiter, 0);

    // Find first non-delimiter
    std::size_t position = main_string.find_first_of(delimiter, last_position);

    while (position != std::string::npos || last_position != std::string::npos)
    {
        tokens.emplace_back(main_string.substr(last_position, position - last_position));
        last_position = main_string.find_first_not_of(delimiter, position);
        position = main_string.find_first_of(delimiter, last_position);
    }

}

int main()
{
    std::string main = "this, is, a, list, of, string, stuff,to,do,a";

    std::vector<std::string> v;

    split_string(v,main,',');

    for(const std::string sub : v)
    {
        std::cout << sub << std::endl;
    }

    return 0;

}
