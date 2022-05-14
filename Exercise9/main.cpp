#include <iostream>

int main()
{
    unsigned int count{100};
   do{
       if((count % 19)== 0){
           std::cout << count << " ";
       }
       ++ count;

   }while(count < 1001);
    std::cout << "End here" << std::endl;

    int multiple {114};
    
    do
    {
        std::cout << multiple << " ";
        multiple += 19;
    }
    while(multiple <= 1000);
    std::cout << "End here" << std::endl;

   return 0;
}