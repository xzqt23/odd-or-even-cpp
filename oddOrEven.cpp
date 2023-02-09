#include <iostream>

int main ()
{

    int number;
    std::cout <<"Please enter a number:";
    std::cin>>number;

    if(number % 2 == 0){
        std::cout <<"The number you entered is an even number"; 
    }

    else{
        std::cout <<"The number you entered is an odd number";  
    }
    return 0;
}