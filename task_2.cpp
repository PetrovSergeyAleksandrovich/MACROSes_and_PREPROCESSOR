#include <iostream>
#include "headers/trains_and_wagons.h"

int main ()
{
    int wagons[WAGONS_QUANTITY];
    TRAIN(set, passengers)(wagons);
    std::cout << std::endl;
    TRAIN(overload, wagons)(wagons);
    std::cout << std::endl;
    TRAIN(get, wagons)(wagons);
    std::cout << std::endl;
    TRAIN(count, passengers)(wagons);
    return 0;
}
