//
//  main.cpp
//  LCM
//
//  Created by Anas Saeed on 20/08/2014.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <vector>
std::vector<int> remover(std::vector<int> vec, int remover){
    bool done = false;
    std::vector<int> output;
    for ( auto x: vec){
        if (x == remover && done == false) {
            done = true;
            continue;
        }
        output.push_back(x);
    }
    return output;
}
bool present(std::vector<int> vec, int checker){
    for ( auto x: vec ){
        if (x == checker) {
            return true;
        }
    }
    return false;
}
std::vector<int> factors(int number){
    std::vector<int> output;
    while (number>1) {
        int temp = 2;
        while (true) {
            if (number%temp == 0) {
                number = number/temp;
                output.push_back(temp);
                break;
            }
            temp++;
        }
    }
    return output;
}
int main(int argc, const char * argv[])
{
    std::vector<int> myvec;
    for (int i = 0; i >-1; i++) {
        int temp = 0;
        std::cin >> temp;
        if (temp == -1) {
            break;
        }
        myvec.push_back(temp);
    }

    std::vector<std::vector<int>> factorVectors;
    for ( auto x: myvec){
        std::vector<int> tempVec = factors(x);
        factorVectors.push_back(tempVec);
    }
    // for finding the smallest number

    for ( auto x: factorVectors[0]){
//        int minimum  = std::min(factorVectors[0].begin(), factorVectors[0].end());
        
    }
        // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

