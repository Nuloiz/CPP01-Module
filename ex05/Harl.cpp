#include "Harl.hpp"

Harl::Harl() {
}

Harl::~Harl() {
}

void Harl::debug() {
    std::cout << "[Debug] I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info() {
    std::cout << "[Info] I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n";
}

void Harl::warning() {
    std::cout << "[Warning] I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n";
}
void Harl::error() {
    std::cout << "[Error] I’m sorry, I’m going to have to ask you to leave. We’ve had complaints about your behaviour.\n";
}

void Harl::complain(std::string level) {
    void (Harl::*log[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int i = 0;
    std::string info[] = {"debug", "info", "warning", "error"};
    Harl test;

    while (i < 4) {
        if (info[i] == level) {
            (test.*log[i])();
            return ;
        }
        i++;
    }
}
