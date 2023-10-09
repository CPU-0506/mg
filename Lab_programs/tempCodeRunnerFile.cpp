/*

    Exercise-3(Operator Overloading)

        1. Write a program to overload Unary, and Binary Operators as Member Function, and Non Member Function

            1. Unary operator as non member function

*/

#include<iostream>
using namespace std;

class Operator {

    private:
        int a,b;

    public:
        Operator(){ a=0; b=0; }
        Operator(int x, int y)
        {
            a=x;
            b=y;
        }

        friend Operator operator++ (Operator);

        void show(){
            cout<<"\nThe values are : \na = "<<a<<"\tb = "<<b;
        }

};

Operator operator++ (Operator A)
{
    Operator temp;
    temp.a=++A.a;
    temp.b=++A.b;
    return temp;
}

int main(){
    Operator A(11,12);
    cout<<"\nBefore operations : ";
    A.show();
    cout<<"\n\nAfter operations : ";
    A=++A;
    A.show();
}