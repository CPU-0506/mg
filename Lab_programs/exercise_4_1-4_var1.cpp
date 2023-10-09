/*

    Exercise-4 (Inheritance)

        1. Write a C++ programs incorporating various forms of Inheritance

            iv) Multi-level Inheritance
          

*/

#include<iostream>
using namespace std;

class D_1
{
    private:
        int length;
    public:
        void input1(){
            cout<<"Enter length : ";
            cin>>length;
        }

        void output1(){
            cout<<"\nLength = "<<length;
        }
};

class D_2:private D_1
{
    private:
        int breadth;
    public:
        void input2(){
            input1();
            cout<<"Enter breadth : ";
            cin>>breadth;
        }

        void output2(){
            output1();
            cout<<"\nBreadth = "<<breadth;
        }
};

class D_3:private D_2
{
    private:
        int height;
    public:
        void input(){
            input2();
            cout<<"Enter height : ";
            cin>>height;
        }

        void output(){
            output2();
            cout<<"\nHeight = "<<height;
        }
};

int main(){
    D_3 d;
    d.input();
    d.output();
}