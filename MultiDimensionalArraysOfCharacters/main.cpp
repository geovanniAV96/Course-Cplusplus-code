#include <iostream>

int main()
{
    const size_t name_length{15};

    char members [][name_length]
    {
        {'J', 'o', 'h', 'n'},
        {'S','a','m','u','e','l',},
        {'R','a','s','h','i','d'},
        {'R','o','d','r','i','g','e','z'}
    };

    //Declaring a 2D array

    //Printing out like this is unsafe : may go over and print outside your valid memory block
    //until a terminating null character is encountered.
    std::cout << "Unsafe printing of members : " << std::endl;
    for(size_t i{0}; i < std::size(members); i++)
    {
        std::cout << members[i] << std::endl;
    }
    std::cout << std::endl;

    //Can loop around manually printing out each character
    std::cout << "Printing out character by character manually : " << std::endl;
    for(size_t i{0}; i < std::size(members); i++)
    {
        for(size_t j{0}; j < std::size(members[i]); j++)
        {
            std::cout << members[i][j];
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    //Better : Using C-string literals
    //Compared to initialization with characteres with in '', this is even easier to type.
    //The entire string is a single entity you can manage easily.
    char members1[][name_length]
    {
        "John",
        "Samuel",
        "Rashid",
        "Rodriguez"
    };

    //Printing out memebers1
    std::cout << "Printing out members1 (C-string literals) : " << std::endl;
    for(size_t i{0}; i < std::size(members1); i++)
    {
        std::cout << members1[i] << std::endl;
    }

    return 0;
}