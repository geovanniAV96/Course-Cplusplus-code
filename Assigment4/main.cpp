#include <iostream>

int main()
{
    int number;

    std::cout << "Please type in an integral value : " << std::endl;
    std::cin >> number;

    if(number % 2 != 0)
    {
        std::cout << number << " is odd" << std::endl;
    }
    else
    {
        std::cout << number << " is even" << std::endl;
    }
    
    return 0;
}