//
//  C++_Memory_Management2.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/12/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

class Test{
private:
    int num;
    float *ptr;
    
public:
    Test(){
        cout << "Enter total nunber of students: ";
        cin >> num;
        
        ptr = new float[num];
        
        cout << "Enter GPA of students." << endl;
        for (int i=0; i<num; i++){
            cout << "Student" << i + 1 << ": ";
            cin >> *(ptr + i);
        }
    }
    
    ~Test(){
        delete[] ptr;
    }
    
    void Display(){
        cout << "\nDisplaying GPA of students." << endl;
        for (int i=0; i<num; i++){
            cout << "Student" << i+1 << ": " << *(ptr + i) <<endl;
        }
    }
};

int main(){
    Test s;
    s.Display();
    return 0;
}
