#include <string>
#include <vector>
#include <iostream>
#include <fstream>

std::vector<std::string> tokenise(std::string csvLine, char separator)
{
    std::vector<std::string> tokens;
    
    signed int start, end;
    std::string token;
    
    start = csvLine.find_first_not_of(separator, 0);
    
    do{
        end = csvLine.find_first_of(separator, start);
        
        if(start == csvLine.length() || start == end) break;
        
        if(end >= 0) token = csvLine.substr(start, end - start);
        
        else token = csvLine.substr(start, csvLine.length() - start);
        
        tokens.push_back(token);
        
        start = end + 1;
        
    }while(end > 0);
        
    
    
    return tokens;
}

int main()
{
//    std::vector<std::string> tokens;
//    std::string s = "thing1,thing2,thing3";
//    tokens = tokenise(s,',');
//    
//    for(std::string& t : tokens)
//    {
//        std::cout << t << std::endl;
//    }
    
    std::ifstream csvFile{"20200317.csv"};
    std::string line;
    std::vector<std::string> tokens;
    
    if(csvFile.is_open())
    {
        std::cout << "File open" << std::endl;
        
        while(std::getline(csvFile, line))
        {
            std::cout << line <<std::endl;
            tokens = tokenise(line, ',');
            if(tokens.size() != 5)
            {
                std::cout << "Bad input" << std::endl;
                continue;
            }
            //we have 5 tokens
            try
            {
                double price = std::stod(tokens[3]);
                double amount = std::stod(tokens[4]);
                std::cout << price << ":" << amount << std::endl;
            }
            catch(std::exception& e)
            {
                std::cout << "Bad float!" << tokens[3] << std::endl;
                std::cout << "Bad float!" << tokens[4] << std::endl;
                continue;
            }

            
//            for(std::string& t : tokens)
//            {
//                std::cout << t << std::endl;
//            }
        }
    }
    else
    {
        std::cout << "Could not open file" << std::endl;
        csvFile.close();

    }

    return 0;
}
