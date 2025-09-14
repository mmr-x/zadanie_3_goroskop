#include <iostream>

int main( )
{
    // я перевёл всё через переводчик могут быть ошибки в тексте

    std::string incorrect_zodiac = "Horoscope for you is under development. Come back a little later ;)";
    std::string gender = "";
    std::string zodiac_sign = "";

    int years = 0;

    std::cout << "enter gender: ";
    std::cin >> gender;

    std::cout << "enter zodiac sign: ";
    std::cin >> zodiac_sign;

    std::cout << "enter years: ";
    std::cin >> years;

    std::cout << std::endl;

    if ( gender == "man" )
    {
        if ( zodiac_sign == "water" )
        {
            if ( years < 40 )
                std::cout << "Today is a very fruitful day. You can achieve what previously seemed almost impossible." << std::endl;
            else
                std::cout << "You must be strictly under 40 years old" << std::endl;
        }
        else
            std::cout << incorrect_zodiac << std::endl;
    }
    else if ( gender == "girl" )
    {
        if ( zodiac_sign == "earthen" )
        {
            if ( years > ( 15 & 30 ) )
            {
                std::cout << "This evening is suitable for socializing with friends, holding home celebrations and impromptu parties." << std::endl
                    << "It will not only be fun, but also interesting : there will be something to do that will captivate everyone." << std::endl;
            }
            else
                std::cout << "You must be between the ages of 15 and 30 years or older" << std::endl;
        }
        else
            std::cout << incorrect_zodiac << std::endl;
    }
    else
        std::cout << "Please enter man or girl." << std::endl;

    return 0;
}