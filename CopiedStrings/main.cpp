#include <iostream>
#include <string>

int main()
{
    //Wasting memory
    std::string message {"Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!vvHello world!Hello world!Hello world!Hello world!Hello world!"};
    std::string message_copy{message};

    char * p1 = message.data();
    char * p2 = message_copy.data();

    std::cout << "&message[0] : " << (void*)p1 << std::endl;
    std::cout << "&message_copy[0] : " << (void*) p2 << std::endl;

    //Using a reference
    std::string message1 {"Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!vvHello world!Hello world!Hello world!Hello world!Hello world!"};
    std::string& message_copy1{message1};

    char * p3 = message1.data();
    char * p4 = message_copy1.data();

    std::cout << "&message1[0] : " << (void*)p3 << std::endl;
    std::cout << "&message_copy1[0] : " << (void*) p4 << std::endl;

    return 0;
}