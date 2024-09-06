#include <iostream>
#include <chrono>
#include <set>
#include "passwordgen.hpp"

using namespace std;


string Password::Password_Generator()
{
   Password gen;
   int random_index = 0;
   string password = "";

   for(int i = 0; i <= 16; i++)
   {
        random_index = rand() % 71;
        password += gen.char_arr[random_index];
   }
   return password;  
}


string Password::get_password()
{
    return password;
}

void Password::set_password(string s)
{
    password = s;
}


