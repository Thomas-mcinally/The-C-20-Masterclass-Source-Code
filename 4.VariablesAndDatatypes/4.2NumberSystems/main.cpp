#include <iostream>


int main(){
   
   int number1 = 15; // Decimal
   int number2 = 017; // Octal
   int number3 = 0x0F; // Hexadecimal
   int number4 = 0b00001111; // Binary

   std::cout << "number1 : " << number1 << std::endl;
   std::cout << "number2 : " << number2 << std::endl;
   std::cout << "number3 : " << number3 << std::endl;
   std::cout << "number4 : " << number4 << std::endl;
   
    return 0;
}

/*
i.e. can use any number system when declaring number variables in c++

ALL ARE STORED IN THE SAME WAY IN MEMORY (as binary)

So the reason for declaring variables as binary or hex is purely out of convenience (might be convenient if you are dealing with a binary/hex data source)
*/
