#include<iostream>
using namespace std;

class Book {
	public:
		int num;
		char ch;
		Book();
		Book(int a);
		Book(int a,char c);
		void print(){
			cout<<"\nnum= "<<num<<" character = "<<ch;
		}
};

Book::Book(int a){
	num=a;
    ch=' ';
}

Book::Book(int a,char c){
	num=a;
	ch=c;
}

Book::Book(){
	num=0;
	ch=' ';
}

int main(){
	Book b1,b2(12),b3(52,'Q');
	Book b4=Book(8,'A');
	b1.print();
	b2.print();
	b3.print();
	b4.print();
	
	return 0;
}
