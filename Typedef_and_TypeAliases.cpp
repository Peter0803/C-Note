#include <iostream>
#include <vector>

// The function of typedef is to define a name as a data_type.

typedef std::string str; 
typedef int number;
typedef double dou;
typedef bool bo;

// "typedef data_type name" equals "using name = data_type"
using str = std::string;
using number = int;
using dou = double;
using bo = bool;

int main()
{
    str pharse = "It\'s a good idea.";
    number a = 1;
    dou b = 1.0;
    bo c = true;
    
    std::cout << pharse << '\n';    
    std::cout << a << '\n';
    std::cout << b << '\n';
    std::cout << c << '\n';

    return 0;
}


