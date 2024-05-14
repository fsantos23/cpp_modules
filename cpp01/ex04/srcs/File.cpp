#include "../includes/File.hpp"

File::File (std::string filename, std::string s1, std::string s2) : filename(filename), s1(s1), s2(s2)
{
    std::cout << "Replacer initialized" << std::endl;
}

File::~File(void)
{
    std::cout << "Replacer finished" << std::endl;
}

std::string File::getName(int i) const
{
    if(i == 0)
        return this->filename;
    if(i == 1)
        return this->s1;
    if(i == 2)
        return this->s2;
    return NULL;
}

std::string File::replace(std::string str)
{
    size_t pos = 0;

    pos = str.find(getName(1));

    if((int)pos >= 0)
    {
        str.erase((int)pos, getName(1).length());
        str.insert((int)pos, getName(2));
    }
    return str;
}