#include <iostream>

int main()
{
    const char * students[]
    {
        "Daniel Gray",
        "Tuna Philbe",
        "The Rock",
        "Kumar Singh",
        "Sam Ali",
        "Dave Mahoro"
    };

    // Print out the students
    std::cout << std::endl;
    std::cout << "Printing out the students : " << std::endl;
    for(const char * student : students)
    {
        std::cout << student << std::endl;
    }

    //*students[0] = 'K'; // compile error

    // Can swap for new student though.
    const char * new_student {"Bob the Great"};
    students[0] = new_student; 

    // Print out the students
    std::cout << std::endl;
    std::cout << "Printing out the students : " << std::endl;
    for(const char * student : students)
    {
        std::cout << student << std::endl;
    }

    // To prevent swaping we can make the pointer const too
    const char * const students2[]
    {
        "Daniel Gray",
        "Tuna Philbe",
        "The Rock",
        "Kumar Singh",
        "Sam Ali",
        "Dave Mahoro"
    };

    const char * new_student2 {"Bob the Great"};
    //students2[0] = new_student; // compile error

    return 0;
}