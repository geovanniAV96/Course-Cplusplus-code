#include <iostream>

int main()
{
    int arr0[5]{1, 2, 3, 4, 5};
    int arr1[5]{6, 7, 8, 9, 10};
    int * p_arr1 {arr1};
    int * p_arr0 {arr0};

    // Print arr0
    std::cout << "arr0 : ";
    for(size_t i{}; i < std::size(arr0); ++i)
    {
        std::cout << p_arr0[i] << " ";
    }
    std::cout << std::endl;

    // Print arr1
    std::cout << "arr1 : ";
    for(size_t i{}; i < std::size(arr1); ++i)
    {
        std::cout << p_arr1[i] << " ";
    }

    // Swapping data the hard way
    int temp[5];

    // Move data from arr1 into temp
    for(size_t i{0}; i < std::size(arr1); ++i)
    {
        temp[i] = arr1[i];
    }

    // Move data from arr0 to arr1
    for(size_t i{0}; i < std::size(arr0); ++i)
    {
        arr1[i] = arr0[i];
    }

    // Move data temp to arr0
    for(size_t i{}; i < std::size(temp); ++i)
    {
        arr0[i] = temp[i];
    }
    std::cout << std::endl;
    /*
    int * temp{nullptr};
    temp = arr1;
    arr1 = arr0;
    */

    //Print arr0
    std::cout << "arr0 : ";
    for (size_t i{}; i < std::size(arr0); ++i) {
        std::cout << p_arr0[i] << " ";
    }
    std::cout << std::endl;

    //Print arr1
    std::cout << "arr1 : ";
    for (size_t i{}; i < std::size(arr1); ++i) {
        std::cout << p_arr1[i] << " ";
    }
    std::cout << std::endl;

    // Swapping data the easy way
    int arr2[5]{1, 2, 3, 4, 5};
    int arr3[5]{6, 7, 8, 9, 10};
    int * p_arr2 {arr2};
    int * p_arr3 {arr3};
    int * temp2{nullptr};

    // Print arr2
    std::cout << "arr2 : ";
    for(size_t i{}; i < std::size(arr2); ++i)
    {
        std::cout << p_arr2[i] << " ";
    }
    std::cout << std::endl;

    // Print arr3
    std::cout << "arr3 : ";
    for(size_t i{}; i < std::size(arr3); ++i)
    {
        std::cout << p_arr3[i] << " ";
    }
    std::cout << std::endl;

    temp2 = p_arr3;
    p_arr3 = p_arr2;
    p_arr2 = temp;

    // Print arr2
    std::cout << "arr2 : ";
    for(size_t i{}; i < std::size(arr2); ++i)
    {
        std::cout << p_arr2[i] << " ";
    }
    std::cout << std::endl;

    // Print arr3
    std::cout << "arr3 : ";
    for(size_t i{}; i < std::size(arr3); ++i)
    {
        std::cout << p_arr3[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}