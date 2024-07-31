#include <iostream> 
#include<string> 
#include"Greeter.h" 

int main()
{
    setlocale(LC_ALL, "rus");
    system("chcp 1251");
    Greeter greeter;
    std::string name;
    std::cout << "Введите имя: ";
    std::cin >> name;
    greeter.greet(name);

}