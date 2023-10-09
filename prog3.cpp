//To find area and perimeter of a rectangle
#include<iostream>
using namespace std;
class Rectangle {
    int length,breadth;
    public:
        void input(){
            cout<<"Enter length and breadth : ";
            cin>>length>>breadth;
        }

        void area(){
            cout<<"\nThe area is "<<length*breadth;
        }

        void perimeter(){
            cout<<"\nThe perimeter is "<<2*(length+breadth);
        }
};

int main()
{
    Rectangle rect1;
    rect1.input();
    rect1.area();
    rect1.perimeter();
    return 0;
}