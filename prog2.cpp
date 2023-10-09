//To find Simple Interest
#include<iostream>
using namespace std;
class Interest{
    int principle, time, rate, SI;
    public:
        void input(){
            cout<<"Enter principle, time, rate : ";
            cin>>principle>>time>>rate;
        }

        void calcInterest(){
            SI=(principle*time*rate)/100.0;
            cout<<"The interest is "<<SI;
        }
};

int main()
{
    Interest simple;
    simple.input();
    simple.calcInterest();
    return 0;
}