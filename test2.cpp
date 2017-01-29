#include <numeric>
#include <iostream>
#include <vector>

inline std::string string_merge(const std::vector<std::string> v)
{
    return std::accumulate(v.begin(), v.end(), std::string(""));
}

inline bool starts_with(const std::string& main_string, const std::string& sub_string)
{
    if (sub_string.size() > main_string.size())
        return false;

    return std::equal(sub_string.begin(),sub_string.end(), main_string.begin());
}

inline bool ends_with(const std::string& main_string, const std::string& sub_string)
{
    if (sub_string.size() > main_string.size())
        return false;

    return std::equal(sub_string.rbegin(),sub_string.rend(), main_string.rbegin());
}

inline bool contains(const std::string& main_string, const std::string& sub_string)
{
    if(main_string.find(sub_string)!=std::string::npos)
        return true;

    return false;
}

std::vector<std::string> split_string(
        const std::string& main_string,
        const char delimiters = ' ')
{
    std::size_t last_position = main_string.find_first_not_of(delimiters, 0);
    std::size_t position = main_string.find_first_of(delimiters, last_position);
    std::vector<std::string> tokens;

    while (position != std::string::npos || last_position != std::string::npos)
    {
        tokens.emplace_back(main_string.substr(last_position, position - last_position));
        last_position = main_string.find_first_not_of(delimiters, position);
        position = main_string.find_first_of(delimiters, last_position);
    }

    return tokens;
}


void split_string(
        std::vector<std::string>& tokens,
        const std::string &main_string,
        const char delimiters = ' ')
{
    //Skip delimiters at beginning
    std::size_t last_position = main_string.find_first_not_of(delimiters, 0);

    // Find first non-delimiter
    std::size_t position = main_string.find_first_of(delimiters, last_position);

    while (position != std::string::npos || last_position != std::string::npos)
    {
        tokens.emplace_back(main_string.substr(last_position, position - last_position));
        last_position = main_string.find_first_not_of(delimiters, position);
        position = main_string.find_first_of(delimiters, last_position);
    }

}

int main()
{
    std::vector<std::string> v {"this","is","new","for","me","too"};

    std::cout << "string is : " << mergeVector(v) << std::endl;

    return 0;
}
