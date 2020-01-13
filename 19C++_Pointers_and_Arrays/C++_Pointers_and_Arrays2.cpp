//
//  C++_Pointers_and_Arrays2.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/12/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    float arr[5];
    
    cout << "Displaying address using pointers notation: " << endl;
    for (int i=0; i<5; i++){
        cout << arr + i << endl;
    }
    
    return 0;
}
