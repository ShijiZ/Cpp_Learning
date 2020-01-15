//
//  Changing_Default_Value_of_Enums.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/14/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

enum seasons {
    spring = 34,
    summer = 4,
    autumn = 9,
    winter = 32
};

int main(){
    seasons s;
    
    s = summer;
    cout << "Summer = " << s << endl;
    
    return 0;
}
