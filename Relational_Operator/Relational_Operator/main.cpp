//
//  main.cpp
//  Relational_Operator
//
//  Created by Anas Saeed on 27/05/2014.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    long total;
    std::cin >> total;
    for (long i = 0; i < total; i++) {
        long one,two;
        std::cin >> one >> two;
        if (one > two) {
            std::cout << ">" << std::endl;
        }
        if (one < two) {
            std::cout <<"<"<< std::endl;
        }
        if (one == two) {
            std::cout <<"=" << std::endl;
        }
    }
    // insert code here...
//    std::cout << "Hello, World!\n";
    return 0;
}

