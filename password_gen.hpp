#include <iostream>
#include <chrono>

using namespace std;

class Characters
{
    private:
    char char_arr[70] = {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m','Q','W','E','R','T','Y','U','I','O','P',
    'A','S','D','F','G','H','J','K','L','Z','X','C','V','B','N','M','1','2','3','4','5','6','7','8','9','!', '@', '#', '$', '%','^','&', '*'};


    public: 
    string Password_Generator();
    
};