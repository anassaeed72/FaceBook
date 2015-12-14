//
//  main.cpp
//  Increment
//
//  Created by Anas Saeed on 20/08/2014.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    int adder = 10;
    for (int i = 10; i < 40; i=i+10) {
        int iterations = 0;
        int temp = 1;;
        for (int k = i; iterations < 4; k = k + adder) {
//            for (int j = 1; j < 5; j++) {
                std::cout << k+temp<< " ";
            temp++;
            iterations++;
//            }
        }
        std::cout << std::endl;
        adder = adder + 10;
    }
    // insert code here...
//    std::cout << "Hello, World!\n";
    return 0;
}

