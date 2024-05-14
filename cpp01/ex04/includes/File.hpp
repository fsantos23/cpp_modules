#ifndef FILE_HPP
#define FILE_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <cctype>
#include <fstream>

class File {
    private:
        std::string filename;
        std::string s1;
        std::string s2;

    public:
        File(std::string filename, std::string s1, std::string s2);
        File(File const & src);
        File & operator= (File const & rhs);
        ~File(void);

        std::string getName(int i) const;
        void setName(std::string str, int i);

        std::string replace(std::string str);
};

#endif