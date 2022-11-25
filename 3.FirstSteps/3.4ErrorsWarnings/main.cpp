#include <iostream>

int main(){
   
   //Compile time error (doesnt compile)
   std::cout << "Hello Word!" << std::endl

   //Run time error (Compiles but when doesnt run properly)
   int value = 7/0;
   std::cout << "value : " << value << std::endl;

    return 0;
}