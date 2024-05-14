#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;
    void (Harl::*ptr) (std::string) = &Harl::complain;
    int option;

    switch option:
    {

    }
    (harl.*ptr)("debug");
    (harl.*ptr)("info");
    (harl.*ptr)("warning");
    (harl.*ptr)("error");
    (harl.*ptr)("");
}