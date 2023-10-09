//To demonstrate the use of public, private, and protected access specifiers.
#include<iostream>
using namespace std;

class sample{
    private:
        int num1;
        void input1(){
            cout<<"\n\nIn private method : ";
            cout<<"\nEnter a number : ";
            cin>>num1;
            cout<<"The number is "<<num1;
        }
    
    public:
        int num;
        void input(){
            input1();

            cout<<"\n\nIn public method : ";
            cout<<"\nEnter a number : ";
            cin>>num;
            cout<<"The number is "<<num;

            input2();
        }
    
    protected:
        int num2;
        void input2(){
            cout<<"\n\nIn protected method : ";
            cout<<"\nEnter a number : ";
            cin>>num2;
            cout<<"The number is "<<num2;
        }
};

int main(){
    sample num1;
    num1.input();
}