//Week2


#include <iostream>

void printHelp(){
    std::cout << "Help -- Your aim is to make money, analyze the market, and make bids and offers. " << std::endl;
}
void printMarketStats(){
    std::cout << "Market looks good. " << std::endl;
}
void enterOffer(){
    std::cout << "Make an offer - enter the amount. " << std::endl;
}
void enterBid(){
    std::cout << "Make a bid - enter the amount. " << std::endl;
}
void printWallet(){
    std::cout << "Your wallet is empty." << std::endl;
}
void gotoNextTimeFrame(){
    std::cout << "Going to next time frame. " << std::endl;
}

void printMenu(){
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
}

int getUserOption(){
    
    int userOption;
    
    std::cout << "Type 1 - 6: " << std::endl;
    std::cin >> userOption;
    std::cout << "You chose: " << userOption << std::endl;
    
    if(userOption == 0){
        std::cout << "Invalid choice. Choose 1 - 6. " << std::endl;
    }
    if(userOption == 1){
        printHelp();
    }
    if(userOption == 2){
        printMarketStats();
    }
    if(userOption == 3){
        enterOffer();
    }
    if(userOption == 4){
        enterBid();
    }
    if(userOption == 5){
        printWallet();
    }
    if(userOption == 6){
        gotoNextTimeFrame();
    }
    
    return userOption;
}

int main() {

    while(true){
        printMenu();
        getUserOption();

    }
    return 0;
}

