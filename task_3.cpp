#include <iostream>

#define WINTER 0
#define SPRING 0
#define SUMMER 0
#define AUTUMN 1

int main ()
{

#if WINTER
    std::cout << "winter";
#endif

#if SPRING
    std::cout << SPRING;
#endif

#if SUMMER
    std::cout << SUMMER;
#endif

#if AUTUMN
    std::cout << AUTUMN;
#endif

    return 0;
}

