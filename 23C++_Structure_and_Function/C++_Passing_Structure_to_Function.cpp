//
//  C++_Passing_Structure_to_Function.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/14/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

struct Person{
    char name[50];
    int age;
    float salary;
};

void displayData(Person);

int main(){
    Person p;
    
    cout << "Enter Full name: ";
    cin.get(p.name, 50);
    cout << "Enter age: ";
    cin >> p.age;
    cout << "Enter salary: ";
    cin >> p.salary;
    
    // Function call with structure variable as an argument
    displayData(p);
    
    return 0;
}

void displayData(Person p){
    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p.name << endl;
    cout <<"Age: " << p.age << endl;
    cout << "Salary: " << p.salary << endl;
}

