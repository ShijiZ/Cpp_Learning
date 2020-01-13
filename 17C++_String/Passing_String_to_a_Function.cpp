//
//  Passing_String_to_a_Function.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/12/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

void display(char[100]);
void display(string);

int main(){
    string str1;
    char str[100];
    
    cout << "Enter a string: ";
    getline(cin, str1);
    
    cout << "Enter another string: ";
    cin.get(str, 100, '\n');
    
    display(str1);
    display(str);
    return 0;
}

void display(char s[]){
    cout << "Entered char array is: " << s << endl;
}

void display(string s){
    cout << "Entered string is: " << s << endl;
}
