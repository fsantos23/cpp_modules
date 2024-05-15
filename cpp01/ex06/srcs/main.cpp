#include "Harl.hpp"

int main()
{
    Harl harl;
    void (Harl::*ptr) (std::string) = &Harl::complain;

    (harl.*ptr)("debug");
    (harl.*ptr)("info");
    (harl.*ptr)("warning");
    (harl.*ptr)("error");
    (harl.*ptr)("");
}