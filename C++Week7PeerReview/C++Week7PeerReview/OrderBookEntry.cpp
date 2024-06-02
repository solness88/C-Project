#include "OrderBookEntry.h"

//OrderBookEntry::OrderBookEntry( std::string _date,
//                               double _open,
//                               double _high,
//                               double _low,
//                               double _close,
//                               double _sharesTraded,
//                               double _turnover)
OrderBookEntry::OrderBookEntry( std::string _date,
                               double _high,
                               double _low)


//: date(_date),
//  open(_open),
//  high(_high),
//  low(_low),
//  close(_close),
//  sharesTraded(_sharesTraded),
//  turnover(_turnover)
: date(_date),
  high(_high),
  low(_low)
{
    
}
