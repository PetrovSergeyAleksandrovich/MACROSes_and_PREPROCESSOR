#include <ctime>
#include <Windows.h>

#define WAGONS_QUANTITY 10
#define TRAIN(action, target) action ## _ ## target

int randomizer()
{
    int x = 100;
    Sleep(1000);
    srand ( time(NULL) );
    x = rand() % 30;
    return x;
}

void set_passengers(int *x)
{
    for(int i = 0; i < WAGONS_QUANTITY; i++)
    {
        *(x+i) = randomizer();
        std::cout << "WAGON NUMBER " << i+1 << " HAS " << *(x+i) << " PASSENGERS "<< std::endl;
    }
}

void count_passengers(int *x)
{
    int total_passengers = 0;
    for(int i = 0; i < WAGONS_QUANTITY; i++)
    {
        total_passengers += *(x+i);
    }
    std::cout << "PASSENGERS IN TRAIN " << total_passengers << std::endl;
}

void overload_wagons(int *x)
{
    for(int i = 0; i < WAGONS_QUANTITY; i++)
    {
        if(*(x+i) > 20) std::cout << "WAGON NUMBER " << i+1 << " HAS OVERLOAD PASSENGERS"<< std::endl;
    }
}

void get_wagons(int *x)
{
    for(int i = 0; i < WAGONS_QUANTITY; i++)
    {
        if(*(x+i) <= 5 ) std::cout << "WAGON NUMBER " << i+1 << " HAS LOW PASSENGERS"<< std::endl;
    }
}
