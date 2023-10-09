/*

    Exercise-4 (Inheritance)

        1. Write a C++ programs incorporating various forms of Inheritance

            iv) Multi-level Inheritance
      

*/

#include<iostream>
using namespace std;

class D_1
{
    public:
        int length;
};

class D_2:public D_1
{
    protected:
        int breadth;
};

class D_3:protected D_2
{
    private:
        int height;
    public:
        void input(){
            cout<<"Enter length,breadth,and height : ";
            cin>>length>>breadth>>height;
        }

        void output(){
            cout<<"\nLength = "<<length<<"\tBreadth = "<<breadth<<"\tHeight = "<<height;
        }
};

int main(){
    D_3 d;
    d.input();
    d.output();
}