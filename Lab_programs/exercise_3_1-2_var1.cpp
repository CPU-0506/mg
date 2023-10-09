/*

    Exercise-3(Operator Overloading)

        1. Write a program to overload Unary, and Binary Operators as Member Function, and Non Member Function

            2. Binary operator as member function

*/

#include<iostream>
using namespace std;

class Operator {
    public:
        int x,y;

        Operator(){}
        Operator(int a,int b){
            x=a;
            y=b;
        }

        Operator operator + (Operator B){
            Operator temp;
            temp.x=x+B.x;
            temp.y=y+B.y;
            return temp;
        }

        void show(){
            cout<<"\nx = "<<x<<" y = "<<y;
        }
};

int main(){
    Operator A(1,2),B(2,3),C;
    A.show();
    B.show();
    C=A+B;
    C.show();
}