#include <iostream>

#define WINTER 0
#define SPRING 1
#define SUMMER 0
#define AUTUMN 0

int main ()
{

#if WINTER
    std::cout << "winter";
#endif

#if SPRING
    std::cout << "spring";
#endif

#if SUMMER
    std::cout << "summer";
#endif

#if AUTUMN
    std::cout << "autumn";
#endif

    return 0;
}

