#include <iostream>
#include <iomanip>

int main()
{
    unsigned int year{0};
    unsigned int day{0};
    unsigned int days_month{0};
    const size_t ROWS {6}; 
    const size_t COLS {7};

    std::cout << "Enter a year : " << std::endl;
    std::cin >> year;

    std::cout << "Enter the first day of the year [1 : Monday,..., 7 : Sunday] : " << std::endl;
    std::cin >> day;

    std::cout << "Calendar for " << year << std::endl;
    
    for(unsigned int i {0}; i < 12; i++)
    {
        unsigned short int num_day{1};
        switch (i)
        {
        case 0:
            std::cout << "--January " << year << " --" << std::endl;
            days_month = 31;
            break;

        case 1:
            std::cout << "--February " << year << " --" << std::endl;
            if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
            {
                days_month = 29;
            }
            else
            {
                days_month = 28;
            }
            break;

        case 2:
            std::cout << "--March " << year << " --" << std::endl;
            days_month = 31;
            break;

        case 3:
            std::cout << "--April " << year << " --" << std::endl;
            days_month = 30;
            break;

        case 4:
            std::cout << "--May " << year << " --" << std::endl;
            days_month = 31;
            break;

        case 5:
            std::cout << "--June " << year << " --" << std::endl;
            days_month = 30;
            break;

        case 6:
            std::cout << "--July " << year << " --" << std::endl;
            days_month = 31;
            break;

        case 7:
            std::cout << "--August " << year << " --" << std::endl;
            days_month = 31;
            break;

        case 8:
            std::cout << "--September " << year << " --" << std::endl;
            days_month = 30;
            break;

        case 9:
            std::cout << "--October " << year << " --" << std::endl;
            days_month = 31;
            break;

        case 10:
            std::cout << "--November " << year << " --" << std::endl;
            days_month = 30;
            break;
        
        default:
            std::cout << "--December " << year << " --" << std::endl;
            days_month = 31;
            break;
        }

        std::cout << std::setw(5) << "Mon";
        std::cout << std::setw(5) << "Tue";
        std::cout << std::setw(5) << "Wed";
        std::cout << std::setw(5) << "Thu";
        std::cout << std::setw(5) << "Fri";
        std::cout << std::setw(5) << "Sat";
        std::cout << std::setw(5) << "Sun";
        std::cout << std::endl;

        for(unsigned int j {0}; j < ROWS; j++)
        {
            unsigned int k {1};
            while(k <= COLS && num_day <= days_month )
            {
                if((j == 0 && k < day))
                {
                    std::cout << std::setw(5) << "";
                    ++k;
                    continue;
                }
                std::cout << std::setw(5) << num_day;
                num_day++;
                ++k;
                day = k;
                if(day == 8)
                    day = 0;
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
    
    return 0;
}