/*
    Lab Exercise -1
        Create a Distance class with:
            -> feet and inches as data members
            -> member function to input distance
            -> member function to output distance
            -> member function to add two distance objects

    2. Write a C++ program to illustrate the use of Constructors and Destructors (use the above program)
*/

#include<iostream>
using namespace std;
class Distance
{
    public:
        int feet;
        int inches;
        Distance(){  
            cout<<"Enter feet : ";
        	cin>>feet;
        	cout<<"Enter inches : ";
        	cin>>inches;
        }
        
        void output(){
            cout<<"Distance is feet = "<<feet<<" inches = "<<inches<<"\n";
        }

        void add(Distance d1,Distance d2){
            feet= d1.feet+d2.feet;
            inches= d1.inches+d2.inches;
            feet=feet+(inches/12);
            inches=inches%12;
        }
        ~Distance(){
        	cout<<"The object is deleted.\n";
		}
};

int main()
{
    Distance d1,d2;
    d2.add(d1,d2);
    d2.output();
}
