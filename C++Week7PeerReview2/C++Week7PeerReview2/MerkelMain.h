#pragma once

#include <vector>
#include "OrderBookEntry.h"
#include "OrderBook.h"

class MerkelMain
{
    public:
        MerkelMain();
        /** Call this to start the sim */
        void init();
    private: 
        void printMenu();
        void printHighAndLow();
        void printMarketStats();
        int getUserOption();
        void processUserOption(int userOption);
    
        OrderBook orderBook{"NIFTY.csv"};
}; 
