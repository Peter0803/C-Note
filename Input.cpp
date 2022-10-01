# include<iostream>

int main()
{
    std::string food;
    std::string country;
    std::string name;
    int number;

    //std::cin  get the user input
    std::cout << "What is your name? ";
    std::cin >> name;
    
    //std::getline(std::cin, variable)  the input can contain spaces
    std::cout << "Which country do you want to go to? ";
    std::getline(std::cin, country);

    std::cout << "How many students in the classroom? ";
    std::cin >> number;
    
    //std::getline(std::cin >> std::ws, variable) the input will not be "\n" when the previous input is integer or double
    std::cout << "What is favorite food? ";
    std::getline(std::cin >> std::ws, food);

    std::cout << "My name is " << name << "." << std::endl;
    std::cout << "My favorite food is " << food << "." << std::endl;
    std::cout << "I want to go to " << country << "." << std::endl;
    std::cout << "There are " << number << " students in the classroom." << std::endl;

    return 0;
}
