#include "../includes/File.hpp"

int main()
{
    std::fstream info;
    std::fstream new_file;
    std::string str;
    std::string new_str;

    // falta so checkar se o file nao tiver permissoes se funciona ou nao 
    File file("txt.txt", "ola", "akskakskaskaskaskskkas");

    new_file.open("new_txt.txt", std::ios::out);
    if (!new_file)
    {
        std::cout << "Couldn't create file" << std::endl;
        return 1;
    }
    info.open(file.getName(0).c_str(), std::ios::in);
    if (!info)
    {
        std::cout << "Couldn't open the file" << std::endl;
        return 1;
    }
    else
    {
        while (1)
        {
            if(info.eof())
                break;
            std::getline(info, str);
            new_str = file.replace(str);
            new_file << new_str << std::endl;
        }
        new_file.close();
        info.close();
    }
    return 0;
}