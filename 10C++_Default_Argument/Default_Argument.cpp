//
//  Default_Argument.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/12/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

void display(char = '*', int = 1);

int main(){
    cout << "No argument passed:\n";
    display();
    
    cout << "\nFirst rgument passed:\n";
    display('#');
    
    cout << "\nBoth argument passed:\n";
    display('$', 5);
    
    return 0;
}

void display(char c, int n){
    for (int i = 1; i <= n; i++){
        cout << c;
    }
    cout << endl;
}
