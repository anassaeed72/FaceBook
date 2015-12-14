//
//  main.cpp
//  IncreDecrement
//
//  Created by Anas Saeed on 25/08/2014.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    for (int i = 1; i < 6; i++) {
        for (int j = i; j < i*2; j++) {
            std::cout << i;
        }
        std::cout << std::endl;
    }
    for (int i = 5; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            std::cout << i;
        }
        std::cout << std::endl;
    }
    return 0;
}

