#include <iostream>
#include <string>
#include <vector>
#include "OrderBookEntry.h"
#include "MerkelMain.h"
#include "CSVReader.h"

int main()
{
    MerkelMain app{};
    app.init();
//    CSVReader::readCSV("20200317.csv");
}
//std::vector<std::string> tokenise(std::string csvLine, char separator)
//{
//    std::vector<std::string> tokens;
//    
//    signed int start, end;
//    std::string token;
//    
//    start = csvLine.find_first_not_of(separator, 0);
//    
//    do{
//        end = csvLine.find_first_of(separator, start);
//        
//        if(start == csvLine.length() || start == end) break;
//        
//        if(end >= 0) token = csvLine.substr(start, end - start);
//        
//        else token = csvLine.substr(start, csvLine.length() - start);
//        
//        tokens.push_back(token);
//        
//        start = end + 1;
//        
//        }while(end > 0);
//
//    return tokens;
//}
//
//int main()
//{
//    std::vector<std::string> tokens;
//    std::string s = "2020/03/17 17:01:24.884492,ETH/BTC,bid,0.02187308,7.44564869";
//    tokens = tokenise(s, ',');
//    for(std::string& t : tokens)
//    {
//        std::cout << t << std::endl;
//    }
//    return 0;
//}






//     std::vector<OrderBookEntry> orders;

//     orders.push_back(  OrderBookEntry{1000, 
//                           0.02, 
//                         "2020/03/17 17:01:24.884492", 
//                         "BTC/USDT", 
//                         OrderBookType::bid}    );

//     orders.push_back(  OrderBookEntry{2000, 
//                           0.02, 
//                         "2020/03/17 17:01:24.884492", 
//                         "BTC/USDT", 
//                         OrderBookType::bid}    );
        

//    // std::cout << "The price is " << orders[1].price << std::endl;

//     for (OrderBookEntry& order : orders)
//     {
//         std::cout << "The price is " << order.price << std::endl;
//     }

//     for (unsigned int i = 0; i < orders.size() ; ++i)
//     {
//         std::cout << "The price is " << orders[i].price << std::endl;
//     }

//     for (unsigned int i = 0; i < orders.size() ; ++i)
//     {
//         std::cout << "The price is " << orders.at(i).price << std::endl;
//     }




