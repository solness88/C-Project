#include <iostream>

int main() {

    //1.print help
    std::cout << "1. Print help: " << std::endl;
    
    //2.print exchange stats
    std::cout << "2. Print help: " << std::endl;

    //3.make an offer
    std::cout << "3. Make an offer: " << std::endl;

    //4.make a bid
    std::cout << "4. Make a bid: " << std::endl;

    //5.print wallet
    std::cout << "5. Print wallet: " << std::endl;

    //6.continue
    std::cout << "6. Continue: " << std::endl;
    
    std::cout << "=================" << std::endl;
    std::cout << "Select 1 - 6: " << std::endl;
    
    int userOption;
    std::cin >> userOption;
    std::cout << "You chose: " << userOption << std::endl;

    
    return 0;
}
