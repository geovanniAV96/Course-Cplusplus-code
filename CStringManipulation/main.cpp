#include <iostream>
#include <cstring>

int main()
{
    //std::strlen : Find the lenght of a string
    //real arrays and those decayed into pointers
    const char message1[] {"The sky is blue."};

    //Array decays into pointer when we use const char*
    const char* message2 {"The sky is blue."};
    std::cout << "message1 : " << message1 << std::endl;

    //strlen ignores null character
    std::cout << "strlen(message1) : " << std::strlen(message1) << std::endl;

    //Include the null character
    std::cout << "sizeof(message1) : " << sizeof(message1) << std::endl;

    //strlen still works with decayed arrays
    std::cout << "strlen(message2) : " << std::strlen(message2) << std::endl;

    //Prints size of pointer
    std::cout << "sizeof(message2) : " << sizeof(message2) << std::endl;


    //std::strcmp - signature : int strcmp(const char *lhs, const char *rhs);
    //Returns negative value if lhs appears before rhs in lexicographical order,
    //zero if lhs and rhs compare equal.
    //and Positive value if lhs appears after rhs in lexicographical order.
    std::cout << std::endl;
    std::cout << "std::strcmp : " << std::endl;
    const char* string_data1{"Alabama"};
    const char* string_data2{"Blabama"};

    char string_data3[]{"Alabama"};
    char string_data4[]{"Blabama"};

    //Print out the comparison
    std::cout << "std::strcmp (" << string_data1 << "," << string_data2 << ") : " << std::strcmp(string_data1, string_data2) << std::endl;
    std::cout << "std::strcmp (" << string_data3 << "," << string_data4 << ") : " << std::strcmp(string_data3, string_data4) << std::endl;

    string_data1 = "Alabama";
    string_data2 = "Alabamb";

    //You can't make an array to point to another location
    //string_data3 = "Alabama";
    //string_data4 = "Alabamb";

    //Print out the comparison
    std::cout << "std::strcmp (" << string_data1 << "," << string_data2 << ") : " << std::strcmp(string_data1, string_data2) << std::endl;

    string_data1 = "Alacama";
    string_data2 = "Alabama";

    //Print out the comparison
    std::cout << "std::strcmp (" << string_data1 << "," << string_data2 << ") : " << std::strcmp(string_data1, string_data2) << std::endl;

    string_data1 = "India";
    string_data2 = "France";

    //Print out the comparison
    std::cout << "std::strcmp (" << string_data1 << "," << string_data2 << ") : " << std::strcmp(string_data1, string_data2) << std::endl;

    string_data1 = "Kigali";
    string_data2 = "Kigali";

    //Print out the comparison
    std::cout << "std::strcmp (" << string_data1 << "," << string_data2 << ") : " << std::strcmp(string_data1, string_data2) << std::endl;

    //std::strncmp : int strncmp(const char *lhs, const char *rhs, std::size_t count);
    //Compares n characters in the strings
    //Returns : Negative value if lhs appears before rhs in lexicographical order.
    //Zero if lhs and rhs compare equal, or if count is zero.
    //Positive value if lhs apperas after rhs in lexicographical order.
    string_data1 = "Alabama";
    string_data2 = "Blabama";
    size_t n{3};
    std::cout << std::endl;
    std::cout << "std::strncmp : " << std::endl;
    std::cout << "std::strncmp (" << string_data1 << "," << string_data2 << "," << n << ") : " << std::strncmp(string_data1, string_data2, n) << std::endl;

    string_data1 = "aaaia";
    string_data2 = "aaance";

    std::cout << "std::strncmp (" << string_data1 << "," << string_data2 << "," << n << ") : " << std::strncmp(string_data1, string_data2, n) << std::endl;

    n = 5;

    std::cout << "std::strncmp (" << string_data1 << "," << string_data2 << "," << n << ") : " << std::strncmp(string_data1, string_data2, n) << std::endl;

    string_data1 = "aaaoa";
    string_data2 = "aaance";

    std::cout << "std::strncmp (" << string_data1 << "," << string_data2 << "," << n << ") : " << std::strncmp(string_data1, string_data2, n) << std::endl;

    //Find the first occurrence of a character
    std::cout << std::endl;
    std::cout << "std::strchr : " << std::endl;
    const char* const str{"Try not. Do, or do not. There is no try."};
    //Can make this a const pointer to prevent users from making it point somewhere else
    char target = 'T';
    const char *result = str;
    size_t iterations{};

    while((result = std::strchr(result, target)) != nullptr)
    {
        std::cout << "Found '" << target << "' starting at '" << result << "'\n";
        //Increment result, otherwise we'll find target at the same location
        ++result;
        ++iterations;
    }
    std::cout << "iterations : " << iterations << std::endl;

    //A lesser version that will loop 25 times
    //Find the first ocurrence of a character
    std::cout << std::endl;
    std::cout << "std::strchr : " << std::endl;
    const char* str2{ "Try not. Do, or do not. There is no try." };
    char target2 = 'T';
    const char* result2{ nullptr };
    size_t iterations2{};
    //since we are no using result to move through the string we are not going to get the espected result
    while ((result2 = std::strchr(str2, target2)) != nullptr)
    {
        std::cout << "Found '" << target2 << "' starting at '" << result2 << "'\n";
        //Increment result, otherwise we'll find target at the same location
        ++str2; // Making the pointer point to the next character
        ++iterations2;
    }
    std::cout << "iteration : " << iterations2 << std::endl;

    //Find last occurence
    std::cout << std::endl;
    std::cout << "std::strrchr : " << std::endl;

    char input[] = "/home/user/hello.cpp";
    char* output = std::strrchr(input, '/');
    if(output)
        std::cout << output + 1 << std::endl; //+1 because we want to start printing past the character found by std::strrchr
    
    return 0;
    
}