//
//  main.cpp
//  Horror_Dash
//
//  Created by Anas Saeed on 27/05/2014.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <vector>
std::vector<std::string> string_split(std::string input, char breaker);
std::vector<std::string> string_split(std::string input, char breaker){
    std::vector<std::string> output;
    unsigned int vec_size = 0;
    std::string result;
    for(auto x :input){
        if (x == breaker) {
            std::string intial = "";
            output.push_back(result);
            result = "";
            continue;
        }
        result = result + x;
    }
    output.push_back(result);
    return output;
}

int main(int argc, const char * argv[])
{
    long total;
//    std::cin >> total;
    std::string temp;
    std::getline(std::cin,temp);
    total = atoi(temp.c_str());
    for (long i = 1; i <= total; i++) {
        std::getline(std::cin, temp);
//        std::cout << temp;
        std::vector<std::string> a = string_split(temp, ' ');
        std::vector<long> b = std::vector<long>(a.size());
        for ( auto x: a){
            b.push_back(atoi(x.c_str()));
        }
        long max = b[0];
        for (auto x:b){
            if (x > max) {
                max = x;
            }
        }
        std::cout << "Case " <<i <<": "<<max << std::endl;
    }
    return 0;
}

