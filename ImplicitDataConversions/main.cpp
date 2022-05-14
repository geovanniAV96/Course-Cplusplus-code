#include <iostream>

int main()
{
    double price { 45.6 };
    int units { 10 };

    auto total_price = price * units; // units will be implicitly converted to double 
    // the convertion is done from smallest to largest type

    std::cout << "Total_price : " << total_price << std::endl;
    std::cout << "sizeof total price : " << sizeof(total_price) << std::endl;

    //Implicit conversions in assigments
    int x;
    double y { 45.44 };

    x = y; // double to int, we chop the decimal part
    std::cout << "The value of x is : " << x << std::endl; // 45
    std::cout << "sizeof x : " << sizeof(x) << std::endl; // 4 byte

    return 0;
}