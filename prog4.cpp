//To print ASCII value
#include<iostream>
using namespace std;
class getAscii{
    char a;
    public:
        void input(){
            cout<<"Enter a character : ";
            cin>>a;
        }

        void printAscii(){
            cout<<"The ASCII value is : "<<int(a);
        }
};

int main()
{
    getAscii char1;
    char1.input();
    char1.printAscii();
    return 0;
}