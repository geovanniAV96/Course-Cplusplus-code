#include <iostream>

int main()
{
    int age;

    std::cout << "Please type in an integral value : " << std::endl;
    std::cin >> age;

    if(age < 21)
    {
        std::cout << "Sorry, you are too young for the treatment" << std::endl;
    }
    else if(age > 39)
    {
        std::cout << "Sorry, you are too old for the treatment" << std::endl;
    }
    else
    {
        std::cout << "You are eligible for the treatment" << std::endl;
    }
    
    return 0;
}