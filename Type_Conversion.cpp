#include <iostream>
using namespace std;

int main()
{   
    //  Converse the data type of variable implicitly or explicitly
    //  Implicity
    int n = 1.4;
    double l = 2;
    /*  Converse integer or a double (it will be conversed into integer) into a char, 
        it will be conversed into the abbreviation referring to ASCII. */
    char p = 1;
    char e = 1.2;

    cout << n << endl;
    cout << l << endl;
    cout << p << endl;

    //  Explicity : (data type)
    double s = (int) 3.14;
    int c = 1.5;

    cout << s << endl;
    cout << (double) c << endl;

    //  Example
    int student = 1000;
    int learnEnglish = 500;
    int learnGerman = 150;
    int learnFrench = 350;

    //  int / int = int
    //  double / double = double; double / int = double; int / double = double
    double proportionOfEnglish =   learnEnglish / (double) student * 100;
    double proportionOfGerman  =   learnGerman  / (double) student * 100;
    double proportionOfFrench  =   learnFrench  / (double) student * 100;

    cout << proportionOfEnglish << "%" << endl;
    cout << proportionOfGerman  << "%" << endl;
    cout << proportionOfFrench  << "%" << endl;

    return 0;
}
