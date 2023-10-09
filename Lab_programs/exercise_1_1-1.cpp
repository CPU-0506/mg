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

class Distance {
    public:
        float feet, inches;
        
        void input();
        void output();
        void add();
};

void Distance :: input(){
    cout<<"Enter distance in feet : ";
    cin>>feet;
    cout<<"Enter distance in inches : ";
    cin>>inches;
}

void Distance :: output(){
    cout<<"The distance is "<<feet<<" feets "<<inches<<" inches \n";
}

void Distance :: add(){
    inches+=feet*12;
    float l=inches/12.0;
    cout<<"Distance is "<<inches<<' '<<l;
}

int main()
{
    Distance d;
    d.input();
    d.output();
    d.add();
}