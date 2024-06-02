#include "CSVReader.h"
#include <iostream>
#include <fstream>
#include <string>

CSVReader::CSVReader()
{

}

std::vector<OrderBookEntry> CSVReader::readCSV(std::string csvFilename)
{
    std::vector<OrderBookEntry> entries;

    std::ifstream csvFile{csvFilename};
    std::string line;
    if (csvFile.is_open())
    {
        while(std::getline(csvFile, line))
        {
            try {
                OrderBookEntry obe = stringsToOBE(tokenise(line, ','));
                entries.push_back(obe);
            }catch(const std::exception& e)
            {
                std::cout << "CSVReader::readCSV bad data"  << std::endl;
            }
        }// end of while
    }    

    std::cout << "CSVReader::readCSV read " << entries.size() << " entries"  << std::endl;

    for(const auto& entry : entries) {
        std::cout << "Date: " << entry.date << ", High: " << entry.high << ", Low: " << entry.low << std::endl;
    }

    return entries;
}

std::vector<std::string> CSVReader::tokenise(std::string csvLine, char separator)
{
   std::vector<std::string> tokens;
   signed int start, end;
   std::string token;
    start = csvLine.find_first_not_of(separator, 0);
    do{
        end = csvLine.find_first_of(separator, start);
        if (start == csvLine.length() || start == end) break;
        if (end >= 0) token = csvLine.substr(start, end - start);
        else token = csvLine.substr(start, csvLine.length() - start);
        tokens.push_back(token);
        start = end + 1;
    }while(end > 0);

   return tokens;
}

OrderBookEntry CSVReader::stringsToOBE(std::vector<std::string> tokens)
{
    std::string date;
    double open, high, low, close, sharesTraded, turnover;

    if (tokens.size() != 7) // bad
    {
        //std::cout << "Bad line " << std::endl;
        throw std::exception{};
    }
    // we have 7 tokens
    try {
//         date = tokens[0];
//         open = std::stod(tokens[1]);
//         high = std::stod(tokens[2]);
//         low = std::stod(tokens[3]);
//         close = std::stod(tokens[4]);
//         sharesTraded = std::stod(tokens[5]);
//         turnover = std::stod(tokens[6]);
           date = tokens[0];
           high = std::stod(tokens[2]);
           low = std::stod(tokens[3]);
        
        
        
    }catch(const std::exception& e){
        std::cout << "Bad float! " << tokens[3]<< std::endl;
        std::cout << "Bad float! " << tokens[4]<< std::endl; 
        throw;        
    }

//    OrderBookEntry obe{date, open, high, low, close, sharesTraded, turnover};
    OrderBookEntry obe{date, high, low};

    return obe; 
}
      
