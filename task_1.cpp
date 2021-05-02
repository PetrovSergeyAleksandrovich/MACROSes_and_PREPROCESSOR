// Implementation of advanced input and output of days of the week
#include <iostream>
#include "headers/days_of_the_week.h"

int main()
{
    int user_input;
    //infinite cycle
    while(true)
    {
        std::cout << "Type number of the week: ";
        std::cin >> user_input;
        get_day_of_the_week_name(user_input);
    }

#if false
    std::cout << "do not printing this" << std::endl;
#endif

#if true
    std::cout << "printing this" << std::endl;
#endif

    return 0;
}