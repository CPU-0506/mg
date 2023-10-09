/*

    Exercise-4 (Inheritance)

        1. Write a C++ programs incorporating various forms of Inheritance

            i) Single Inheritance
            

*/

#include<iostream>
using namespace std;

class Base{
    private: 
        int x;
    public:
        void inputx(){
            cout<<"\nEnter the value of x : ";
            cin>>x;
        }

        void showx(){
            cout<<"\nx = "<<x;
        }
};

class Derived:private Base {
    public:
        int y;

        void input(){
            inputx();
            cout<<"\nEnter the value of y : ";
            cin>>y;
        }

        void show(){
            showx();
            cout<<"\ny = "<<y;
        }
};

int main(){
    Derived d;
    d.input();
    d.show();
}