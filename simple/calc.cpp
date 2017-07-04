#include <iostream>
using namespace std;

int sum(int,int);


int main() 
{
int a,b,c;
cout<<"Enter two number";
cin>>a>>b;
c=sum(a,b);
cout<<"sum = "<<c;
}

int sum(int a,int b){
	return a+b;
}