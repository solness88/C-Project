#include <iostream>
#include <string>
#include <vector>

enum class OrderBookType{bid, ask};

class OrderBookEntry{
    public:
    
    
    OrderBookEntry(
        double _price,
        double _amount,
        std::string _timestamp,
        std::string _product,
        OrderBookType _orderType
    )
    : price(_price),
      amount(_amount),
      timestamp(_timestamp),
      product(_product),
      orderType(_orderType)
    
    {
//        price = _price;
//        amount = _amount;
//        timestamp = _timestamp;
//        product = _product;
//        orderType = _orderType;
    }
    double price;
    double amount;
    std::string timestamp;
    std::string product;
    OrderBookType orderType;

};

void printMenu()
{
    // 1 print help
    std::cout << "1: Print help " << std::endl;
    // 2 print exchange stats
    std::cout << "2: Print exchange stats" << std::endl;
    // 3 make an offer
    std::cout << "3: Make an offer " << std::endl;
    // 4 make a bid
    std::cout << "4: Make a bid " << std::endl;
    // 5 print wallet
    std::cout << "5: Print wallet " << std::endl;
    // 6 continue
    std::cout << "6: Continue " << std::endl;

    std::cout << "============== " << std::endl;
}

void printHelp()
{
    std::cout << "Help - your aim is to make money. Analyse the market and make bids and offers. " << std::endl;
}

void  printMarketStats()
{
    std::cout << "Market looks good. " << std::endl;
}

void enterOffer()
{
    std::cout << "Mark and offer - enter the amount " << std::endl;
}

void enterBid()
{
    std::cout << "Make a bid - enter the amount" << std::endl;
}

void printWallet()
{
    std::cout << "Your wallet is empty. " << std::endl;
}
        
void gotoNextTimeframe()
{
    std::cout << "Going to next time frame. " << std::endl;
}
 
int getUserOption()
{
    int userOption;

    std::cout << "Type in 1-6" << std::endl;
    std::cin >> userOption;
    std::cout << "You chose: " << userOption << std::endl;
    return userOption;
}

void processUserOption(int userOption)
{
    if (userOption == 0) // bad input
    {
        std::cout << "Invalid choice. Choose 1-6" << std::endl;
    }
    if (userOption == 1) // bad input
    {
        printHelp();
    }
    if (userOption == 2) // bad input
    {
        printMarketStats();
    }
    if (userOption == 3) // bad input
    {
        enterOffer();
    }
    if (userOption == 4) // bad input
    {
        enterBid();
    }
    if (userOption == 5) // bad input
    {
        printWallet();
    }
    if (userOption == 6) // bad input
    {
        gotoNextTimeframe();
    }
}

int main()
{
    //    enum class orderBookType{bid, ask};
    
    //    double price = 5319.450228;
    //    double amount = 0.00020075;
    //    std::string timestamp{"2020/03/17 17:01:24.884492"};
    //    std::string product{"BTC/USDT"};
    //    orderBookType orderType = orderBookType::ask;
    
    //    std::vector<double> prices;
    //    std::vector<double> amounts;
    //    std::vector<std::string> timestamps;
    //    std::vector<std::string> products;
    //    std::vector<orderBookType> orderTypes;
    //
    //    prices.push_back(5000.01);
    //    amounts.push_back(0.001);
    //    timestamps.push_back("2020/03/17 17:01:24.884492");
    //    products.push_back("BTC/USDT");
    //    orderTypes.push_back(orderBookType::bid);
    //
    //    prices.push_back(20.01);
    //    amounts.push_back(0.007);
    //    timestamps.push_back("2021/12/17 10:01:24.39482");
    //    products.push_back("BTC/USDT");
    //    orderTypes.push_back(orderBookType::ask);
    //
    //    std::cout << "prices: " << prices[0] << std::endl;
    //    std::cout << "prices: " << prices[1] << std::endl;
    
    //    while (true)
    //    {
    //        printMenu();
    //        int userOption = getUserOption();
    //        processUserOption(userOption);
    //    }
    //    return 0;
    
    std::vector<OrderBookEntry> orders;

    

    
    orders.push_back(
                     OrderBookEntry {1000,
                                     0.02,
                                    "2020/03/17 17:01:24.884492",
                                    "BTC/USDT",
                                    OrderBookType::bid
                     });
                     
    orders.push_back(
                     OrderBookEntry{800,
                         0.982,
                         "1981/09/17 7:01:24.884492",
                         "BTC/USDT",
                         OrderBookType::ask
                     });

    for(OrderBookEntry order : orders){
        std::cout << "The price is: " << order.price << std::endl;
    }

    for (unsigned int i = 0; i < orders.size(); ++i){
        std::cout << "The price is: " << orders[i].price << std::endl;
    }

    for (unsigned int i = 0; i < orders.size(); ++i){
        std::cout << "The price is: " << orders.at(i).price << std::endl;
    }
}

