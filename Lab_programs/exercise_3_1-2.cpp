/*

    Exercise-3(Operator Overloading)

        1. Write a program to overload Unary, and Binary Operators as Member Function, and Non Member Function

            2. Binary operator as non member function

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

        friend Operator operator + (Operator,Operator);
        friend Operator operator + (int,Operator);
        void show(){
            cout<<"\nx = "<<x<<" y = "<<y;
        }
};

Operator operator + (Operator A, Operator B){
    Operator temp;
    temp.x=A.x+B.x;
    temp.y=A.y+B.y;
    return temp;
}

Operator operator+ (int a, Operator B){
    Operator temp;
    temp.x=a+B.x;
    temp.y=a+B.y;
    return temp;
}

int main(){
    Operator A(1,2),B(2,3),C;
    A.show();
    B.show();
    C=A+B;
    C.show();
    C=10+C;
    C.show();
}