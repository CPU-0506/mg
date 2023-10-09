/*

    Exercise-4 (Inheritance)

        1. Write a C++ programs incorporating various forms of Inheritance

            iv) Multiple Inheritance        

*/

#include<iostream>
using namespace std;

class A
{
    protected:
        int x;
    public:
        void input1(){
            cout<<"Enter x : ";
            cin>>x;
        }

        void output1(){
            cout<<"\nx = "<<x;
        }
};

class B
{
    private:
        int y;
    public:
        void input2(){
            cout<<"Enter y : ";
            cin>>y;
        }

        void output2(){
            cout<<"\ny = "<<y;
        }
};

class C:private A,B
{
    public:
        int z;

        void input()
        {
            input1();
            input2();
            cout<<"Enter z : ";
            cin>>z;
        }

        void output(){
            output1();
            output2();
            cout<<"\nz = "<<z;
        }
};

int main(){
    C c;
    c.input();
    c.output();
}