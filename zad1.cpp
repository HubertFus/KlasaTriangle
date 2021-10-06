#include <iostream>
using namespace std;
class Triangle{
	public:
		int bok_a,bok_b,bok_c,h;
		void obliczPole(int a,int b,int h);
		void obliczObwod(int a,int b,int c);
};
void Triangle::obliczPole(int a,int b,int h){
		cout<<"pole jest rowne: "<<(a*b)*h/2<<endl;
		}
void Triangle::obliczObwod(int a,int b,int c){
		cout<<"obwod jest rowny: "<<a+b+c<<endl;
		}

int main(){
	Triangle jeden;
	jeden.bok_a=2;
	jeden.bok_b=2;
	jeden.bok_c=3;
	jeden.h=3;
	jeden.obliczObwod(jeden.bok_a,jeden.bok_b,jeden.bok_c);
	jeden.obliczPole(jeden.bok_a,jeden.bok_b,jeden.h);
}
