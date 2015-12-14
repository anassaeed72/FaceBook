//
//  main.cpp
//  PrimeNumbers
//
//  Created by Anas Saeed on 12/08/2014.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    int lowerBound =0;
    int upperBound;
    std::cout <<"Please enter the upper bound\n";
    std::cin >> upperBound;
    std::cout << "\nThe prime numbers are ";
    for (int i = 2; i <= upperBound; i++) {
        bool check = true;
        for (int j = 2; j < i; j++) {
            if (i%j == 0) {
                check = false;
                break;
            }
        }
        if (check) {
            std::cout << i << " ";
        }
    }
    return 0;
}

