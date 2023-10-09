/*

    Exercise-3(Operator Overloading)

        1. Write a program to overload Unary, and Binary Operators as Member Function, and Non Member Function

            1. Unary operator as member function

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

        void operator ++ (void)
        {
            ++a;
            ++b;
        }

        void operator -- (void)
        {
            --a;
            --b;
        }

        void operator - (void)
        {
            a=-a;
            b=-b;
        }

        void show(){
            cout<<"\nThe values are : \na = "<<a<<"\tb = "<<b;
        }

};

int main(){
    Operator A,B,C(10,-20);
    cout<<"\nBefore operations : ";
    A.show();
    B.show();
    C.show();
    cout<<"\n\nAfter operations : ";
    ++A;
    --B;
    -C;

    A.show();
    B.show();
    C.show();
}