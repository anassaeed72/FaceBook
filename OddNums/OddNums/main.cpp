//
//  main.cpp
//  OddNums
//
//  Created by Anas Saeed on 26/08/2014.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    std::cout << "The odd numbers\n";
    for (int i = 0; i < 101; i++) {
        if (i%2 ==1) {
            std::cout << i << " ";
        }
    }
    std::cout << "\nThe even numbers\n";
    for (int i = 0; i < 101; i++) {
        if (i%2 == 0 ) {
            std::cout << i << " ";
        }
    }
    return 0;
}

