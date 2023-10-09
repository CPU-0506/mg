/*  
  Exercise-2(Access)
  Write a program for illustrating Access Specifiers public, private, protected
        1. Write a program implementing Friend Function 
*/

#include<iostream>
using namespace std;

class sample{
    public:
        int numpu;
    private:
        int numpr;
    protected:
        int numpo;
    public:
        void input(){
            cout<<"Enter values of public, private and protected data members : ";
            cin>>numpu>>numpr>>numpo;
        }
        friend void output(sample);
};

void output(sample a){
    cout<<"\nThe value of public variable is : "<<a.numpu;
    cout<<"\nThe value of private variable is : "<<a.numpr;
    cout<<"\nThe value of protected variable is : "<<a.numpo;
}

int main(){
    sample s1;
    s1.input();
    output(s1);
}