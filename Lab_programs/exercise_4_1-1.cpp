/*

    Exercise-4 (Inheritance)

        1. Write a C++ programs incorporating various forms of Inheritance

            i) Single Inheritance
           

*/

#include<iostream>
using namespace std;

class Base{
    protected: 
        int x;
};

class Derived:public Base {
    public:
        int y;

        void input(){
            cout<<"\nEnter the values of x and y : ";
            cin>>x>>y;
        }

        void show(){
            cout<<"\nx= "<<x<<"\ty = "<<y;
        }
};

int main(){
    Derived d;
    d.input();
    d.show();
}