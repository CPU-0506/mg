/*

    Exercise-3(Operator Overloading)

        2. Write a C++ program to implement the overloading assignment = operator

*/
#include<iostream>
using namespace std;

class New
{
    public:
        int x;

        New(){
            x=0;
        }

        New(int a){
            x=a;
        }

        void operator=(New B){
            x=B.x;
        }

        void show(){
            cout<<"\nx = "<<x;
        }
};

int main(){
    New n1,n2(10);
    cout<<"\nBefore assignment : ";
    n1.show();
    n2.show();
    n1=n2;
    cout<<"\n\nAfter assignment : ";
    n1.show();
    n2.show();
}