//
//  C++_String_to_Read_a_Line_of_Text.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/12/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    char str[100];
    cout << "Enter a string: ";
    cin.get(str, 100);
    
    cout << "You entered: " << str << endl;
    return 0;
}
