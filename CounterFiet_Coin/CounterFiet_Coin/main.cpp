//
//  main.cpp
//  CounterFiet_Coin
//
//  Created by Anas Saeed on 05/06/2014.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//
#include <iostream>
#include <vector>
std::vector<std::string> string_split(std::string input, char breaker);
std::vector<std::string> string_split(std::string input, char breaker){
    std::vector<std::string> output;
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
bool present(std::vector<char> database, char checker);
bool present(std::vector<char> databse, char checker){
    for ( auto x: databse){
        if (x == checker) {
            return true;
        }
    }
    return false;
}
std::vector<char> adding(std::vector<char> in, char adder);
std::vector<char> adding(std::vector<char> in, char adder){
    for (auto x: in){
        if (x == adder) {
            return in;
        }
    }
    in.push_back(adder);
    return in;
}
int main()
{
    int rounds = 0;
    std::cin >> rounds;
    for (int i = 0; i < rounds; i++) {
        std::vector<char> ok;
        std::string one,two,three;
        std::vector<std::string> input;
        for (int  i = 0;  i <3; i++) {
            std::cin >>one >>two >> three;
            one = one +' ' + two+' ' + three;
            input.push_back(one);
        }
        std::string uneven;
        std::string direction;
        for (int j = 0; j < 3; j++) {
            std::vector<std::string> v = string_split(input[j], ' ');
            if (v[2] == "even") {
                for ( auto x: v[0]){
                    ok = adding(ok, x);
                }
                for ( auto x: v[1]){
                    ok = adding(ok, x);
                }
            }
            else if (v[2] == "down") {
                uneven = input[j];
                direction = "down";
            }
            else if (v[2] == "up") {
                uneven = input[j];
                direction = "up";
            }
        }
        char answer = 'A';
        bool heavy_light = false;
        std::vector<std::string> v = string_split(uneven, ' ');
        bool check = false;
        for ( auto x: v[0]){
            if (present(ok, x) == false) {
                heavy_light = false;
                answer = x;
                check = true;
                break;
            }
        }
        if (check == false) {
            for ( auto x: v[1]){
                if (present(ok, x) == false) {
                    heavy_light = true;
                    answer = x;
                    break;
                }
            }
        }
        // for the printing
        std::cout <<answer <<" is the counterfeit coin and it is ";
        if (direction =="up" && heavy_light == true) {
            std::cout << "light.";
        }
        if (direction =="up" && heavy_light == false) {
            std::cout << "heavy.";
        }
        if (direction =="down" && heavy_light == true) {
            std::cout << "heavy.";
        }
        if (direction =="down" && heavy_light == false) {
            std::cout << "light.";
        }
    }

    return 0;
}