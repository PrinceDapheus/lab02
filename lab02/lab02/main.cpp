//
//  main.cpp
//  lab02
//
//  Created by David Phume on 2024/09/23.
//
// Demostrate Polymophism


////code A
//#include <iostream>
//using namespace std;
//
//
//class animal {
//   
//    public :
//    
//    virtual void action (){
//
//        cout << " animal sound " <<endl;
//        
//        
//    }
//    
//    
//};
//
//class monkey : public animal {
//    
//    public :
//    
//    void action (){
//        
//        cout << " monkey sound ! " <<endl;
//    }
//    
//};
//
//
//class bird  : public animal {
//    
//    public :
//    
//    void action (){
//        
//        cout << " bird sound ! " <<endl;
//    }
//    
//};
//
//
//
//int main (){
//    
//    animal *animal1;
//    animal *animal2;
//    
//    
//    monkey myMonkey;
//    bird myBird;
//    
//    animal1 = &myMonkey;
//    animal2 = &myBird;
//    
//    
////    animal1.action();
////    myMonkey.action();
////    myBird.action();
//    
//    animal1->action();
//    animal2->action();
//    
//    
//    
//    
//    
//    
//    return 0;
//}


//// code B
//#include <iostream>
//using namespace std;
//
//class animal{
//    
//public:
//    string name;
//    int strength;
//    int viciousness;
//  virtual void spawn ( string n , int s , int v){
//       
//       name = n;
//       strength = s;
//       viciousness = v;
//       
//        cout << "Animal Spawned !"<<endl;
//        cout << "Name : " << name << endl;
//        cout << "Strength : " << strength << endl;
//        cout << "Viciousness : " << viciousness << endl;
//        cout << "---------------" <<endl;
//    }
//    
//
//};
//
//class lion : public animal{
//   
//public:
//    
//    void spawn ( string n , int s , int v){
//        cout << "Lion Spawned !"<<endl;
//        cout << "Name : " << name << endl;
//        cout << "Strength : " << strength << endl;
//        cout << "Viciousness : " << viciousness << endl;
//        cout << "---------------" <<endl;
//    }
//    
//    
//};
//
//
//class turtle : public animal{
//    
//public:
//    void spawn ( string n , int s , int v){
//        cout << "Turtle Spawned !"<<endl;
//        cout << "Name : " << name << endl;
//        cout << "Strength : " << strength << endl;
//        cout << "Viciousness : " << viciousness << endl;
//        cout << "---------------" <<endl;
//    }
//};
//
//int main (){
//    
//    
//    animal *animal1;
//    animal *animal2;
//    
//    lion myLion;
//    turtle myTurtle;
//    
//    animal1 = &myLion;
//    animal2 = &myTurtle;
//    
//    animal1->spawn("Lion", 7, 8);
//    animal2->spawn("Turtle", 1, 1);
//    
//    return 0;
//}


#include <iostream>
using namespace std;

class animal{
    
public:
    
   void spawn ( string name , int strength , int viciousness){
       
      
       
        cout << "Animal Spawned !"<<endl;
        cout << "Name : " << name << endl;
        cout << "Strength : " << strength << endl;
        cout << "Viciousness : " << viciousness << endl;
        cout << "---------------" <<endl;
    }
    

};

class lion : public animal{
   
public:
    
    void spawn ( string name , int strength , int viciousness){
        cout << "Lion Spawned !"<<endl;
        cout << "Name : " << name << endl;
        cout << "Strength : " << strength << endl;
        cout << "Viciousness : " << viciousness << endl;
        cout << "---------------" <<endl;
    }
    
    
};


class turtle : public animal{
    
public:
    void spawn (string name , int strength , int viciousness){
        cout << "Turtle Spawned !"<<endl;
        cout << "Name T: " << name << endl;
        cout << "Strength : " << strength << endl;
        cout << "Viciousness : " << viciousness << endl;
        cout << "---------------" <<endl;
    }
};

int main (){
    
    
    animal *animal1;
    animal *animal2;
    
    lion myLion;
    turtle myTurtle;
    
    animal1 = &myLion;
    animal2 = &myTurtle;
    
    animal1->spawn("Lion", 7, 8);
    animal2->spawn("Turtle", 1, 1);
    
    return 0;
}
