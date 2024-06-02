#pragma once

#include <string>

class OrderBookEntry
{
    public:

    OrderBookEntry( std::string _date,
                    double _high,
                    double _low);
    
    std::string date;
    double high;
    double low;
};
 
