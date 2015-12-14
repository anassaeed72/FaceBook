//
//  main.cpp
//  Repeater
//
//  Created by Anas Saeed on 29/08/2014.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{

    // insert code here...
    int max = 4;
    int bottem = 1;
    for (int i = max; max >= bottem; i--) {
        for (int j = max; j >= bottem; j--) {
            std::cout << j << " ";
        }
        for (int j = bottem; j <=max ;j++) {
            std::cout << j << " ";
        }
        std::cout <<std::endl;
        bottem++;
    }
    return 0;
}

