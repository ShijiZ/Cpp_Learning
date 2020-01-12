//
//  Return_by_Reference.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/12/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

int num;

int& test();

int main(){
    test() = 5;
    
    cout << num << endl;
    
    return 0;
}

int& test(){
    return num;
}
