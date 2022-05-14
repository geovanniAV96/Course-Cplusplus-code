#include <iostream>

int global_var{44};

int main()
{
    bool green {false}; //45

    global_var++;

    if(green)
    {
        global_var++;
        int car_count{23};
        std::cout << "Light is green " << car_count << "on the move!" << std::endl;
    }
    else
    {
        //car_count++; //Compiler error
        global_var++; // 46
        std::cout << "Light is not green. Y'all should STOP!" << std::endl;
    }

    //car_count++; //Compiler error
    std::cout << "global_var : " << global_var << std::endl;
    
    return 0;
}