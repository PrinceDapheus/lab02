//
//  main.cpp
//  lab02
//
//  Created by David Phume on 2024/09/23.
//
// Demostrate Polymophism

#include <iostream>
using namespace std;

class animal{
    
public:
    virtual void spawn ( string name , int strength , int viciousness){
        cout << "Spawned !"<<endl;
        cout << "Name : " << name << endl;
        cout << "Strength : " << strength << endl;
        cout << "Viciousness : " << viciousness << endl;
        cout << "---------------" <<endl;
    }
    

};

class lion : public animal{
   
public:
    void spawn ( string name , int strength , int viciousness){
        cout << "Spawned !"<<endl;
        cout << "Name : " << name << endl;
        cout << "Strength : " << strength << endl;
        cout << "Viciousness : " << viciousness << endl;
        cout << "---------------" <<endl;
    }
    
    
};


class bear : public animal{
    
public:
    void spawn ( string name , int strength , int viciousness){
        cout << "Spawned !"<<endl;
        cout << "Name : " << name << endl;
        cout << "Strength : " << strength << endl;
        cout << "Viciousness : " << viciousness << endl;
        cout << "---------------" <<endl;
    }
};

int main (){
    
    
    animal *animal1;
    animal *animal2;
    
    lion myLion;
    bear myBear;
    
    animal1 = &myLion;
    animal2 = &myBear;
    
    animal1->spawn("Lion", 7, 8);
    animal2->spawn("Bear", 8, 7);
    
    return 0;
}
