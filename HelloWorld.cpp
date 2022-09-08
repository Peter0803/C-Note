#include <iostream>

int main(){
    
    //std : stander, cout : character out, std::endl or \n : next line

    // std::cout << "I love pasta." << std::endl;
    // std::cout << "Hello World!" << std::endl;
    // std::cout << "I love pasta.\n" + "Hello World!";
    // std::cout << "I love pasta." + "\nHello World!";
    // std::cout << "I love pasta." << '\n' << "Hello World!"  << '\n';
    // std::cout << "I love pasta." << std::endl << "Hello World!"  << std::endl;

    //int number : declare that number stores integer;
    //number = 150 : assign that it is 150.
    
    //Integer
    int number = 150;
    int apple = 6;
    int year = 2025;

    //Double
    double height = 167.7;
    double weight = 47.1;
    double gpa = 4.0;
    
    //Boolean
    bool student = true;
    bool worker = true;
    bool smart = false;
    bool diligent = true;

    //Character
    char grade = 'A';
    char language = 'E';
    char both = '&';

    //String
    std::string desert = "ice cream";
    std::string pharse = "My name is Peter.";

    // std::cout << "I will graduate in " << year << " from NYUST." << '\n';
    // std::cout << "I like " + desert << " because it is delicious." << std::endl;

    //constant variable which is read-only
    const int YES = 0;
    const double PI = 3.14159;
    const bool NOTFAIR = true;
    const char HIGEST_LEVEL = 'A';
    const std::string SCHOOL_NAME = "National Yunlin University of Science and Technology";
    std::cout << HIGEST_LEVEL << std::endl;

    return 0;
}