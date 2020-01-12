//
//  Static_Local_Variable.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/12/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

void test(){
    // var is a static variable
    static int var = 0;
    var++;
    
    cout << var << endl;
}

int main(){
    test();
    test();
    
    return 0;
}
