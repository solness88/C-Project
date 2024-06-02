#include "OrderBook.h"
#include "CSVReader.h"
#include <map>
#include <iostream>

OrderBook::OrderBook(std::string filename)
{
    orders = CSVReader::readCSV(filename);
}

std::vector<OrderBookEntry> OrderBook::getHighPrice()
{
    std::vector<OrderBookEntry> highPrice;
    highPrice.push_back(orders[0]);
    
    double max = orders[0].high;

    for(OrderBookEntry& e : orders)
    {
        if(e.high > max)
        {
            max = e.high;
            highPrice.clear();
            highPrice.push_back(e);
        }
    }
    
    return highPrice;
}

std::vector<OrderBookEntry> OrderBook::getLowPrice()
{
    std::vector<OrderBookEntry> lowPrice;
    lowPrice.push_back(orders[0]);

    double min = orders[0].low;

    for(OrderBookEntry& e : orders)
    {
        if(e.low < min)
        {
            min = e.low;
            lowPrice.clear();
            lowPrice.push_back(e);
        }
    }
    
    return lowPrice;
}

void OrderBook::dataPeriod()
{
    std::cout << "Data period is from " << orders[0].date << "to " << orders[orders.size() - 1].date << "." << std::endl;
}
