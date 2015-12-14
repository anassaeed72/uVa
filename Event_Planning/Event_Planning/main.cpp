//
//  main.cpp
//  Event_Planning
//
//  Created by Anas Saeed on 27/05/2014.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
int max_elements(std::vector<long> in);
int max_elements(std::vector<long> input){
    int max = input[0];
    for (int i = 0; i < input.size(); i++) {
        if (input[i] > max) {
            max = input[i];
        }
    }
    return max;
}
int main()
{
    std::string temp;
    while (!std::cin.eof()) {
        long number_of_participants,budget,number_of_hotels,number_of_weeks;
        std::cin >> number_of_participants >> budget >> number_of_hotels >> number_of_weeks;
        std::cout <<number_of_participants;
        long minimum_cost;
        bool possible = false;
        for (long i = 0; i < number_of_hotels; i++) {
            long price;
            std::cin >> price;
            std::vector<long> number_of_beds;
            for (long j = 0; j < number_of_weeks; j++) {
                long temp;
                std::cin >> temp;
                number_of_beds.push_back(temp);
            }
            long max_local = max_elements(number_of_beds);
            if (max_local >= number_of_participants && number_of_participants*price <= budget) {
                if (possible == false) {
                    minimum_cost = number_of_participants*price;
                    possible = true;
                }
                if (number_of_participants*price < minimum_cost) {
                    minimum_cost = number_of_participants*price;
                }
            }
        }
        if (possible == false) {
            std::cout << "stay home" << std::endl;
        }else{
            if (minimum_cost == 0) {
                return 0;
            }
            std::cout <<minimum_cost<< std::endl;
        }
    }
    return 0;
}

