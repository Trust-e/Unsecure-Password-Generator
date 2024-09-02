#include <iostream>
#include <chrono>
#include "passwordgen.hpp"

using namespace std;




void Password_Generator(Characters gen)
{
    /*
    
        Using chrono, randomly select elements from the char_arr array and make a 16 character password out of this
    
    */

   int random_index = 0;

   for(int i = 0; i <= 16; i++)
   {
        random_index = rand() % 81;

        cout << gen.char_arr[random_index];
   }
   return;  
}

void test()
{
    cout << "HELLO??";
}