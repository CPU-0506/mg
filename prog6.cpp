//  Write a program to exchance values between two classes using friend function

#include<iostream>
using namespace std;

class second;
class first
{
    public:
        int num;
        friend void share(first &,second &);
        friend void input(first &);
        void display(){
            cout<<"\nValue in 'first' class is "<<num;
        }
};

class second
{
    public:
        int num;
        friend void share(first &,second &);
        friend void input(second &);
        void display(){
            cout<<"\nValue in 'second' class is "<<num;
        }
};

void input(first &a){
    cout<<"Enter value of first object: ";
    cin>>a.num;
}

void input(second &b){
    cout<<"Enter value of second object : ";
    cin>>b.num;
}

void share(first &a, second &b)
{
    int temp;
    temp=a.num;
    a.num=b.num;
    b.num=temp;
    cout<<"\nExchange completed!!!!";
}

int main()
{
    first A;
    second B;
    input(A);
    input(B);
    A.display();
    B.display();
    share(A,B);
    A.display();
    B.display();
    return 0;
}