#include <iostream>
#include <chrono>
#include <set>
#include "passwordgen.hpp"

using namespace std;




void Password::Password_Generator(Password gen)
{
   int random_index = 0;

   for(int i = 0; i <= 16; i++)
   {
        random_index = rand() % 71;

        cout << gen.char_arr[random_index];
   }
   return;  
}

void Password::set_test()
{
    Password gen;
    int random_index = 0;
    char arr[5] = {'0','1','2','3','4'};
    set<char> set;

    for(int i = 0; i < 17; i++)
    {
        random_index = rand() % 5;
        set.insert(arr[random_index]);

        if(set.find(arr[random_index]) != set.end()) // Meaning the item is in the set already
        {
            random_index = rand() % 5;
        }

        cout << arr[random_index];
    }

    cout << endl;


}

/*
Would be a good idea to start writing methods for making sure the string 
has no duplicate characters in it.
*/

