#include <iostream>

int main()
{
    int engineer = 15;
    
    //Those followings can make the variable plus 1.
    engineer = engineer + 1;
    engineer += 1;
    engineer ++;

    engineer = engineer + 2;
    engineer += 2;

    //Those followings can make the variable minus 1.
    engineer = engineer - 1;
    engineer -= 1;
    engineer --;
    
    engineer = engineer - 2;
    engineer -= 2;

    /*  If integer is plused, minused, multiplied, or divided by double, 
        the result will be rounded down to the nearest whole number.    */
    engineer = engineer + 1.7;
    engineer = engineer - 1.7;

    engineer = engineer * 2;
    engineer *= 2;
    
    engineer *= 2.7;

    engineer = engineer / 3;
    engineer /= 3;
    
    engineer /= 2.7;
    
    /*  If the variable is integer and the quotient is double,
        the latter will be rounded down to the nearest whole number.   */
    engineer = engineer / 4;

    //  % get the remainder
    engineer = engineer % 2;
    engineer %= 2;

    std::cout << engineer << std::endl;

    return 0;
}
