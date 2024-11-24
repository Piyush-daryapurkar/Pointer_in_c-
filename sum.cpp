#include<iostream>
using namespace std;
void add(int*,int*);
int main ()
{
	int x=15;
	int y=20;
	add(&x, &y);
	return 0;	

}
void add(int *p,int *q)
{
	cout<<"add is "<<*p+*q;
}