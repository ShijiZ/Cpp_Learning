//
//  C++_String_Using_String_Data_Type.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/12/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    // Declaring a string object
    string str;
    
    cout << "Enter a string: ";
    getline(cin, str);
    
    cout << "You entered: " << str << endl;
    return 0;
}
