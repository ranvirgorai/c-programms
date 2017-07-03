#include <iostream>
using namespace std;

int main(){
	int var=20;
	int *ip;
	ip=NULL;

	if(ip){
		cout<<"not Null = "<<*ip;
	}
	else{
	cout<<"Null Pointer = "<<ip;
	}
	// cout<<"Value of var= ";
	// cout<<var<<endl;

	// cout<<"Address stored in ip variable= ";
	// cout<<ip<<endl;

	// cout<<"value stored in ip variable= ";
	// cout<<*ip<<endl;

return 0;
}