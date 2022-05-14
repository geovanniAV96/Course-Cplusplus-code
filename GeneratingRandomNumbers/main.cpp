#include <iostream>
#include <ctime>

int main()
{
    std::srand(std::time(0)); //seed

    int random_num = std::rand();
    std::cout << "random_num : " << random_num << std::endl; // 0 ~ RAND_MAX
    std::cout << std::endl;

    random_num = std::rand();
    std::cout << "random_num : " << random_num << std::endl; // 0 ~ RAND_MAX
    std::cout << std::endl;

    // Generate random numbers in a loop
    //int random_num;

    for(size_t i {0}; i < 20; i++)
    {
        random_num = std::rand();
        std::cout << "random_num" << i << ":" << random_num << std::endl; // 0 ~ RAND_MAX
    }
    std::cout << std::endl;

    //Generate a range between 0 and 10
    int random_num2 = std::rand() % 11; // [0 ~ 10]
    for(size_t i{0}; i < 20; i++)
    {
        random_num2 = std::rand() % 11;
        std::cout << "random_num " << i << " : " << random_num2 << std::endl; // 0 ~ RAND_MAX
    }
    std::cout << std::endl;

    int random_num3 = std::rand() % 10 + 1; // [1 ~ 10] 
    for(size_t i{0}; i < 20; i++)
    {
        random_num3 = std::rand() % 10 + 1;
        std::cout << "random_num " << i << " : " << random_num3 << std::endl; // 0 ~ RAND_MAX
    }

    return 0;
}