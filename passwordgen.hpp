#include <iostream>
#include <chrono>

using namespace std;

#ifndef PASSWORDGEN_H
#define PASSWORDGEN_H

class Password
{

    private:

    string password = "";

    public:

    char char_arr[70] = {
    'q','w','e','r','t','y','u','i','o','p', // Losercase: 0 - 25
    'a','s','d','f','g','h','j','k','l','z', 
    'x','c','v','b','n','m','Q','W','E','R', // Uppercase: 26 - 51
    'T','Y','U','I','O','P','A','S','D','F',
    'G','H','J','K','L','Z','X','C','V','B', // Numbers: 52 - 61
    'N','M', '0','1','2','3','4','5','6','7','8',
    '9','!', '@','#', '$', '%','^','&', '*' // Symbols: 62 - 69
    };

    string Password_Generator(); // , int upper_bound, int lower_bound

    void Edit_Password();

    string get_password();

    void set_password(string s);
    
    
};

#endif