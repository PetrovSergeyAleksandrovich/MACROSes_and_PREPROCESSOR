#define MONDAY 1
#define TUESDAY 2
#define WEDNESDAY 3
#define THURSDAY 4
#define FRIDAY 5
#define SATURDAY 6
#define SUNDAY 7

void get_day_of_the_week_name(int &user_input)
{
    if(user_input == MONDAY) std::cout << "MONDAY" << std::endl;
    else if(user_input == TUESDAY) std::cout << "TUESDAY" << std::endl;
    else if(user_input == WEDNESDAY) std::cout << "WEDNESDAY" << std::endl;
    else if(user_input == THURSDAY) std::cout << "THURSDAY" << std::endl;
    else if(user_input == FRIDAY) std::cout << "FRIDAY" << std::endl;
    else if(user_input == SATURDAY) std::cout << "SATURDAY" << std::endl;
    else if(user_input == SUNDAY) std::cout << "SUNDAY" << std::endl;
    else std::cout << "wrong number" << std::endl;
}