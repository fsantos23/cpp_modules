#include "Harl.hpp"

int main()
{
    Harl harl;
    void (Harl::*ptr) (std::string) = &Harl::complain;

    //o que é que é suposto usar sem ser else if na função complain
    (harl.*ptr)("debug");
    (harl.*ptr)("info");
    (harl.*ptr)("warning");
    (harl.*ptr)("error");
    (harl.*ptr)("");
}