//
//  main.cpp
//  address
//
//  Created by shandan on 15/12/1.
//  Copyright (c) 2015年 shandan. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    int *a;
    a=(int *)malloc(4);
    if(a==0)
        exit(0);
    *a=100;
    printf("a=%x *a=%x\n",a,*a);
    return 0;
}
