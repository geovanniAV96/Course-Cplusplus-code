#include <iostream>

int main()
{
    /*double temperature;

    std::cout << "Please enter a degree value in Celsius : " << std::endl;

    std::cin >> temperature;

    double fahrenheit = (9.0 / 5) * temperature + 32;

    std::cout << temperature << " Celsius is " << fahrenheit << " Fahrenheit";*/

    // Box area and volume
    std::cout << "Welcome to box calculator. Please type in length, width and height informatin : " << std::endl;
    double length;
    double width;
    double height;
    std::cout << "length : ";
    std::cin >> length;
    std::cout << "width : ";
    std::cin >> width;
    std::cout << "height : ";
    std::cin >> height;
    std::cout << "The base area is : " << length * width << std::endl;
    std::cout << "The volume is : " << length * width * height << std::endl;
    return 0;
}