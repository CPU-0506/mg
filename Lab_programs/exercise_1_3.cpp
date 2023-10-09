/*

    Write a program for illustrating function overloading in adding the distance between objects (use the program from exercise 1_1)

*/

/*
    Lab Exercise -1
        Create a Distance class with:
            -> feet and inches as data members
            -> member function to input distance
            -> member function to output distance
            -> member function to add two distance objects
        
    1. Write a main function to create objects of Distance class. Input two distances and output their sum.
*/

#include<iostream>
using namespace std;
class Distance
{
    private:
        int feet;
        int inches;
    public:
        void input(){
            cout<<"\nEnter the Distance : ";
            cin>>feet>>inches;
        }

        void output(){
            cout<<"Distance is feet = "<<feet<<" inches = "<<inches;
        }

        void add(Distance d1,Distance d2){
            feet= d1.feet+d2.feet;
            inches= d1.inches+d2.inches;
            feet=feet+(inches/12);
            inches=inches%12;
        }

        void add(Distance d1,Distance d2, Distance d3){
            feet=d1.feet+d2.feet+d3.feet;
            inches=d1.inches+d2.inches+d3.inches;
            feet=feet+(inches/12);
            inches=inches %12;
        }
};

int main()
{
    Distance d1,d2,d3;
    d1.input();
    d2.input();
    d3.add(d1,d2);
    d3.output();
    d3.input();
    d3.add(d1,d2,d3);
    d3.output();

    return 0;
}