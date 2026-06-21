#ifndef TYPEWRITER_H
#define TYPEWRITER_H

#include <string>
#include <iostream>
#include <thread>
#include <chrono>

void typewriter_effect(const std::string& str, float pause_seconds) {
    for (char c : str) {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::duration<float>(pause_seconds));
    }
    std::cout << std::endl;
}

#endif
