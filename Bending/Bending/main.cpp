//
//  main.cpp
//  Bending
//
//  Created by Anas Saeed on 27/05/2014.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <vector>
std::string one(std::string original, std::string rotation);
std::string one(std::string original, std::string rotation){
    if (original =="+x" && rotation == "+z") {
        return "+z";
    }
    if (original =="+x" && rotation == "-z") {
        return "-z";
    }
    if (original =="+x" && rotation == "+y") {
        return "+y";
    }
    if (original =="+x" && rotation == "-y") {
        return "-y";
    }
    //
    if (original =="-x" && rotation == "+y") {
        return "+y";
    }
    if (original =="-x" && rotation == "-y") {
        return "-y";
    }if (original =="-x" && rotation == "+z") {
        return "+z";
    }
    if (original =="-x" && rotation == "-z") {
        return "-z";
    }
    //
    if (original =="+x" && rotation == "+y") {
        return "+y";
    }
    if (original =="+x" && rotation == "-y") {
        return "-y";
    }if (original =="+x" && rotation == "+y") {
        return "+y";
    }
    if (original =="+x" && rotation == "-y") {
        return "-y";
    }
    //
    if (original =="+x" && rotation == "+y") {
        return "+y";
    }
    if (original =="+x" && rotation == "-y") {
        return "-y";
    }if (original =="+x" && rotation == "+y") {
        return "+y";
    }
    if (original =="+x" && rotation == "-y") {
        return "-y";
    }
    // //
    
    return "";
}
int main(int argc, const char * argv[])
{
    std::string direction = "+x";
    int lenght;
    std::cin >> lenght;
    std::vector<std::string> bends;
    for (int i = 1; i < lenght; i++) {
        std::string temp;
        std::cin >> temp;
        bends.push_back(temp);
    }
    
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

