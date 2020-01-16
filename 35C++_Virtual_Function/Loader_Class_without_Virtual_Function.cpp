//
//  Loader_Class_without_Virtual_Function.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/16/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

class Weapon{
public:
    void features(){
        cout << "Loading weapon features.\n";
    }
};

class Bomb : public Weapon{
public:
    void features(){
        this -> Weapon::features();
        cout << "Loading bomb features.\n";
    }
};

class Gun : public Weapon{
public:
    void features(){
        this -> Weapon::features();
        cout << "Loading gun features.\n";
    }
};

class Loader{
public:
    void loadFeatures(Weapon *weapon){
        weapon -> features();
    }
};

int main(){
    Loader *l = new Loader;
    Weapon *w;
    Bomb b;
    Gun g;
    
    w = &b;
    l -> loadFeatures(w);
    
    w = &g;
    l -> loadFeatures(w);
    
    return 0;
}

