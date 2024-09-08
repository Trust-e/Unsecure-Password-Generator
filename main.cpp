#include <iostream>
#include <chrono>
#include "passwordgen.hpp"


using namespace std;

int main()
{
    srand(time(NULL));
    Password gen;

    gen.set_password(gen.Password_Generator()); 

    cout << gen.get_password() << endl;
   

    return 0;
}