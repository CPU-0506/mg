/*

    Exercise-4 (Inheritance)

        1. Write a C++ programs incorporating various forms of Inheritance

            iv) Multiple Inheritance        

*/

#include<iostream>
using namespace std;

class A
{
    public:
        int x;
};

class B
{
    public:
        int y;
};

class C:public A, public B
{
    public:
        int z;

        void input()
        {
            cout<<"\nEnter x,y,z : ";
            cin>>x>>y>>z;
        }
};

int main(){
    C c;
    c.input();
    
    cout<<"\nx = "<<c.x<<"\ty = "<<c.y<<"\tz = "<<c.z;
}