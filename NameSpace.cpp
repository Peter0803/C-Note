#include <iostream>

// Different namespaces can store the variable that has the same name.
namespace one{
    int number = 1;
}

namespace two{
    int number = 2;
}

namespace breakfast{
    std::string meal = "bread with soy milk";
}

namespace lunch{
    std::string meal = "pasta";
}

namespace dinner{
    std::string meal = "noodles";
}

int main(){

    // use the element which is contained in the namepsace
    
    // using namespace one;
    // std::cout << number << '\n';

    // using namespace two;
    // std::cout << number << '\n';

    std::cout << one::number << '\n';
    std::cout << two::number << '\n';

    std::cout << breakfast::meal << '\n';
    std::cout << lunch::meal << '\n';
    std::cout << dinner::meal << '\n';

    // It uses local variable when not using namespace.
    // using namespace breakfast;
    // using namespace lunch;
    // using namespace dinner;
    
    std::string meal = "Pretzel";

    std::cout << meal << '\n';

    return 0;
}
