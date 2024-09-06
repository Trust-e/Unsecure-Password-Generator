#include <iostream>
#include <chrono>
#include "passwordgen.hpp"


using namespace std;

int main()
{
    srand(time(NULL));
    const int letters_upper_bound = 51;
    const int letters_and_numbers_upper_bound = 61;
    const int symbols_upper_bound = 69;
    int input;

    Password gen;

    gen.set_password(gen.Password_Generator()); 

    cout << gen.get_password() << endl;

    // Menu interface

    /*
    
    1. Generate password (no restrictions)
    2. Generate with only letters
    3. generate with only letters and numbers
    4. generate with only numbers and symbols
    5. Edit existing password (Your password is this: what index 
                            do you want to edit? Your password is now this)
    6. Exit
    */

//    do
//    {
   





//    } while (input != 6);
   

    return 0;
}