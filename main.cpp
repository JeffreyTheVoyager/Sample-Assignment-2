#include <iostream>
#include <array>
#include <string>

int main() {
    std::array<std::string, 5> drinks = {"Coke", "Water", "Sprite", "Pepsi", "Apple Juice"};
    for(int i = 1; i < drinks.size() + 1; i++ ){
        std::cout << i << ". " << drinks[i - 1] << std::endl;
    }

    int choice;
    std::cout << "Please pick a number: ";
    std::cin >> choice;
    if(choice > drinks.size() || choice < 1){
        std::cout << "Error, Invalid Choice" << std::endl;
    }else{
        std::cout << "Enjoy Your " << drinks[choice - 1] << std::endl;
    }
    return 0;
}
