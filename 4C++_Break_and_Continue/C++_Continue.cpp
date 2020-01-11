//
//  C++_Continue.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/10/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    for (int i = 0; i <= 10; i++){
        if (i == 6 || i == 9)
            continue;
        cout << i << endl;
    }
    return 0;
}
