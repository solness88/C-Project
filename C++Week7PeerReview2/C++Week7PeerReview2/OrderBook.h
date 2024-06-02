#pragma once
#include "OrderBookEntry.h"
#include "CSVReader.h"
#include <string>
#include <vector>
#include <map>

class OrderBook
{
    public:
    /** construct, reading a csv file */
        OrderBook(std::string filename);
    
    /** returns the earliest time in the order book */
    void dataPeriod();
        
    std::vector<OrderBookEntry> getHighPrice();

    std::vector<OrderBookEntry> getLowPrice();

    private:
        std::vector<OrderBookEntry> orders;
};
