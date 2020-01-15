//
//  Enumeration_Type.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/14/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

enum week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

int main(){
    week today;
    today = Wednesday;
    cout << "Day " << today + 1 << endl;
    return 0;
}
