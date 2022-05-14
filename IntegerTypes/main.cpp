#include <iostream>

int main()
{
    // Braced initializers
    // Variable may contain random garbage value. WARNING
    int elephant_count;

    int lion_count{}; // Initializes to zero

    int dog_count {10}; // Initializes to 10

    int cat_count {15}; // Initializes to 15

    // Can use expression as initializer
    int domesticated_animals { dog_count + cat_count };

    std::cout << elephant_count << std::endl;
    std::cout << lion_count << std::endl;
    std::cout << dog_count << std::endl;
    std::cout << cat_count << std::endl;
    std::cout << domesticated_animals << std::endl;

    //Functional Initialization
    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count + orange_count);
    int narrowing_conversion_functional (2.9); // Information lost. less safe than braced initializers

    std::cout << apple_count << std::endl;
    std::cout << orange_count << std::endl;
    std::cout << fruit_count << std::endl;
    std::cout << narrowing_conversion_functional << std::endl;

    //Assigment notation
    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    int narrowing_conversion_assigment = 2.9;

    std::cout << bike_count << std::endl;
    std::cout << truck_count << std::endl;
    std::cout << vehicle_count << std::endl;
    std::cout << narrowing_conversion_assigment << std::endl;

    std::cout << sizeof(int) << std::endl;
    std::cout << sizeof(truck_count) << std::endl;

    return 0;
}