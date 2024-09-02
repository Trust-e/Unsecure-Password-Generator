#include <iostream>
#include <chrono>
#include "passwordgen.hpp"


using namespace std;

int main()
{

    char char_arr[70] = {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m','Q','W','E','R','T','Y','U','I','O','P',
    'A','S','D','F','G','H','J','K','L','Z','X','C','V','B','N','M','1','2','3','4','5','6','7','8','9','!', '@', '#', '$', '%','^','&', '*'};

    Characters gen;
    gen.Password_Generator(gen);

    int random_index = 0;

    for(int i = 0; i <= 16; i++)
    {
        random_index = rand() % 71;

        cout << char_arr[random_index];
    }

    // Characters gen;

    // gen.test();

    // cout << endl;

    return 0;
}