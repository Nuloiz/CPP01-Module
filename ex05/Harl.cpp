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

void complain(std::string level) {
    if (level == "debug")
        debug();
    else if (level == "info")
        info();
    else if (level == "warning")
        warning();
    else if (level == "error")
        error();
    else
        std::cout << "Invalid level\n";
}
