//
//  main.cpp
//  Calculator
//
//  Created by Anas Saeed on 08/08/2014.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <math.h>
double add(double a,double b){
    return a+b;
}
double minusCal(double a, double b){
    return a-b;
}
double multiplicate(double a, double b){
    return a*b;
}
double divide(double a, double b){
    return a/b;
}
double remainder(int a, int b){
    double ans = a%b;
    return ans;
}
double squareRoot(double a) {
    double ans = sqrt(a);
    return ans;
}
int main(int argc, const char * argv[])
{
    while (true) {
        int selector = 0;
        std::cout << "Welcome to the calculator program" << std::endl <<"Please enter 1 for addition" << std::endl <<"Please enter 2 for subtraction" << std::endl <<"Please enter 3 for multiplication" << std::endl <<"Please enter 4 for division" << std::endl <<"Please enter 5 for remainder" << std::endl <<"Please enter 6 for square root"<<std::endl <<"Please enter 0 for exiting" << std::endl;
        std::cin >> selector;
        
        if (selector == 1) {
            std::cout << "Please enter the numbers for additions" << std::endl;
            double a,b;
            std::cin>> a >> b;
            std::cout <<"The answer is " << add(a, b) << std::endl;
        } else if ( selector == 2){
            std::cout << "Please enter the numbers for subraction" << std::endl;
            double a,b;
            std::cin>> a >> b;
            std::cout <<"The answer is " << minusCal(a, b) << std::endl;
        }
        else if ( selector == 3){
            std::cout << "Please enter the numbers for multiplication" << std::endl;
            double a,b;
            std::cin>> a >> b;
            std::cout <<"The answer is " << multiplicate(a, b) << std::endl;
        }
        else if ( selector == 4){
            std::cout << "Please enter the numbers for division" << std::endl;
            double a,b;
            std::cin>> a >> b;
          std::cout <<"The answer is " << divide(a, b) << std::endl;
        }else if ( selector == 5){
            std::cout << "Please enter the numbers for remainder" << std::endl;
            int a,b;
            std::cin>> a >> b;
            std::cout <<"The answer is " << remainder(a, b) << std::endl;
        }else if ( selector ==6){
            std::cout << "Please enter the number for square root" << std::endl;
            int a;
            std::cin>> a;
            std::cout <<"The answer is " << squareRoot(a) << std::endl;
        } else if (selector == 0 ){
            return  0;
        }
    }
    // insert code here...
    return 0;
}

