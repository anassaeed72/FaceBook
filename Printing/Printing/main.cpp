//
//  main.cpp
//  Printing
//
//  Created by Anas Saeed on 21/08/2014.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//

#include <iostream>
void two(){
    std::cout << "* *\n";
}
void four(){
    std::cout << "* * * *\n";
}
int main(int argc, const char * argv[])
{
    four();
    two();
    two();
    four();
//    std::cout << "Hello, World!\n";
    return 0;
}

