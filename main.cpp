//
//  main.cpp
//  string
//
//  Created by WeiKevin on 2015/11/10.
//  Copyright © 2015年 WeiKevin. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdio>
using namespace::std;

int main(int argc, const char * argv[]) {
    // insert code here...

    const int buffer=100;
    char stringline[buffer];
    
    while (fgets(stringline, buffer, stdin)&&stringline[0]!='\0') {
        int i=0;
        while (stringline[i]!='\0') {
            i=i+1;
        }
        for (int back=i-2; back>=0; back--) {
            cout<<stringline[back];
        }
        cout<<endl;
    }
    
    return 0;
}