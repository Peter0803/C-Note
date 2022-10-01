# include<iostream>

int main()
{
    std::string name;
    int age;
    double weight;
    std::string occupation;

    std::cout << "What's your name? ";
    std::cin >> name;

    std::cout << "How old are you? ";
    std::cin >> age;

    std::cout << "What is your weight? ";
    std::cin >> weight;

    std::cout << "What do you want to do in the future? ";
    std::getline(std::cin >> std::ws, occupation);

    std::cout << "Hello, " << name << "! " << "Nice to meet you." << std::endl;
    std::cout << "You are " << age << " years old." << std::endl;
    std::cout << "Your weight is " << weight << " kg." << std::endl;
    std::cout << "You want to be a/an " << occupation << "." << std::endl;

    return 0;
}
