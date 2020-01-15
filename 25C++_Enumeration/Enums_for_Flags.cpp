//
//  Enums_for_Flags.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/14/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

enum designFlags{
    BOLD = 1,
    ITALICS = 2,
    UNDERLINE = 4
};

int main(){
    int myDesign = BOLD | UNDERLINE;
    
    //   00000001
    //  |00000100
    //   00000101
    
    printf("%d\n", myDesign);
    return 0;
}
