//
//  main.cpp
//  Decrement
//
//  Created by Anas Saeed on 19/08/2014.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    for (int i = 6; i > 0; i--) {
        for (int j = i; j >0; j--) {
            std::cout << j;
        }
        std::cout << std::endl;
    }
    
    // insert code here...
    return 0;
}

