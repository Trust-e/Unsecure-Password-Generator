#include <iostream>
#include <chrono>
#include "passwordgen.hpp"


using namespace std;

int main()
{

    srand(time(NULL));

    Password gen;

    //gen.set_test();
    gen.Password_Generator(gen);

    cout << endl;

    return 0;
}