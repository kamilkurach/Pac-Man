#include <string>
#include <iostream>
#include "engine.h"

int main(int argc, char const *argv[]) {

    std::string str = "Init";
    engine::my_engine my_engine;

    int s = my_engine.sum(16, 17);
    float sf = my_engine.sum_float(16.5789, 17.5);

    std::cout << str << std::endl;
    std::cout << "Sum: " + std::to_string(s) << std::endl;
    std::cout << "Sum float: " + std::to_string(sf) << std::endl;

    return 0;

}
