#pragma once

#include <string>

//enum class OrderBookType{bid, ask, unknown};

class OrderBookEntry
{
    public:

//        OrderBookEntry( std::string _date,
//                        double _open,
//                        double _high,
//                        double _low,
//                        double _close,
//                        double _sharesTraded,
//                        double _turnover);
    OrderBookEntry( std::string _date,
                    double _high,
                    double _low);
    
    
    
//      static OrderBookType stringToOrderBookType(std::string s);
//        std::string date;
//        double open;
//        double high;
//        double low;
//        double close;
//        double sharesTraded;
//        double turnover;
    std::string date;
    double high;
    double low;
};
 
