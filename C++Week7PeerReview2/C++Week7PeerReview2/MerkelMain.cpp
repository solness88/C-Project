#include "MerkelMain.h"
#include <iostream>
#include <vector>
#include "OrderBookEntry.h"
#include "CSVReader.h"
#include "OrderBook.h"

MerkelMain::MerkelMain()
{

}

void MerkelMain::init()
{
    int input;
    orderBook.dataPeriod();
    while(true)
    {
        printMenu();
        input = getUserOption();
        processUserOption(input);
    }
}

void MerkelMain::printMenu()
{
    std::cout << "1: Print all high and low prices " << std::endl;
    std::cout << "2: Print highest and lowest" << std::endl;
    std::cout << "============== " << std::endl;
}

void MerkelMain::printHighAndLow()
{
    std::vector<OrderBookEntry> entries = CSVReader::readCSV("NIFTY.csv");
    std::cout << "There are " << entries.size() << " entries"  << std::endl;

        for(const auto& entry : entries) {
            std::cout << "Date: " << entry.date << ", High: " << entry.high << ", Low: " << entry.low << std::endl;
        }
    std::cout << "" << std::endl;
}

void MerkelMain::printMarketStats()
{
    OrderBook orderBook("NIFTY.csv");

    //get highest price
    std::vector<OrderBookEntry> highPrice = orderBook.getHighPrice();

    std::cout << "" << std::endl;
    std::cout << "The highest price is: " << std::endl;

    //console out the highest price during the period
    for(const auto& entry : highPrice) {
        std::cout << "Date: " << entry.date << ", High: " << entry.high << std::endl;
    }
    
    std::cout << "" << std::endl;

    //get lowest price
    std::vector<OrderBookEntry> lowPrice = orderBook.getLowPrice();
    std::cout << "The Lowest price is: " << std::endl;
    
    //console out the highest price during the period
    for(const auto& e : lowPrice) {
        std::cout << "Date: " << e.date << ", Low: " << e.low << std::endl;
    }
    std::cout << "" << std::endl;

}
 
int MerkelMain::getUserOption()
{
    int userOption;

    std::cout << "Type in 1-2" << std::endl;
    std::cin >> userOption;
    std::cout << "You chose: " << userOption << std::endl;
    return userOption;
}

void MerkelMain::processUserOption(int userOption)
{
    if (userOption == 0)
    {
        std::cout << "Invalid choice. Choose 1-6" << std::endl;
    }
    if (userOption == 1) 
    {
        printHighAndLow();
    }
    if (userOption == 2) 
    {
        printMarketStats();
    }
}
 
