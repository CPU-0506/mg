//To add two numbers
#include<iostream>
using namespace std;
class Mathematics {
    int x,y;
    public: 
        void input(){
            cout<<"Enter two numbers : ";
            cin>>x>>y;
        }
        
        void add(){
            cout<<"The sum is ";
            cout<<x+y;
        }
};

int main()
{
    Mathematics M1;
    M1.input();
    M1.add();
    return 0;
}