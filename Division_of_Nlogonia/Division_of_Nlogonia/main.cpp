//
//  main.cpp
//  Division_of_Nlogonia
//
//  Created by Anas Saeed on 27/05/2014.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    while (true) {
        int total;
        std::cin >> total;
        if (total == 0) {
            break;
        }
        long x,y;
        std::cin >> x >>y;
        for (long i = 0; i < total; i++) {
            long one,two;
            std::cin >> one >>two;
            if (one==x ||two ==y) {
                std::cout <<"divisa" <<std::endl;
            }
            else if (one >x && two >y) {
                std::cout <<"NE"<<std::endl;
            }
            else if (one >x && two<y){
                std::cout <<"SE"<<std::endl;
            }else if (one <x && two <y){
                std::cout <<"SO"<<std::endl;
            }else if (one <x && two >y){
                std::cout <<"NO"<<std::endl;
            }
        }
    }
    return 0;
}

