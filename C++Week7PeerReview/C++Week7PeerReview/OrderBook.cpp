#include "OrderBook.h"
#include "CSVReader.h"
#include <map>
#include <iostream>

OrderBook::OrderBook(std::string filename)
{
    orders = CSVReader::readCSV(filename);
}

/** return vector of all known dates in the dataset */
std::vector<std::string> OrderBook::getKnownProducts()
{
    std::vector<std::string> products;
    
    std::map<std::string, bool> prodMap;
    
    for(OrderBookEntry& e : orders)
    {
        prodMap[e.date] = true;
    }
    
    //now flatten the map to a vector of strings
    for(auto const& e : prodMap)
    {
        products.push_back(e.first);
    }
    return products;
}

///** return vector of orders according to the sent filters */
std::vector<OrderBookEntry> OrderBook::getOrders(std::string date)
{
    std::vector<OrderBookEntry> orders_sub;
    
    for(OrderBookEntry& e : orders)
    {
//        if(e.date == date)
//        {
            orders_sub.push_back(e);
//        }
    }
    
    return orders_sub;
}

double OrderBook::getHighPrice(std::vector<OrderBookEntry>& orders)
{
    double max = orders[0].high;
    
    for(OrderBookEntry& e : orders)
    {
        if(e.high > max)max = e.high;
    }
    
    return max;
}

double OrderBook::getLowPrice(std::vector<OrderBookEntry>& orders)
{
    double min = orders[0].low;
    for(OrderBookEntry& e : orders)
    {
        if(e.low < min)min = e.low;
    }
    
    return min;
}

std::string OrderBook::getEarliestTime()
{
    return orders[0].date;
}

std::string OrderBook::getNextTime(std::string date)
{
    std::string next_timestamp = "";
    for(OrderBookEntry& e : orders)
    {
        if(e.date > date)
        {
            next_timestamp = e.date;
            break;
        }
    }
    if(next_timestamp == "")
    {
        next_timestamp = orders[0].date;
    }
    return next_timestamp;
}
