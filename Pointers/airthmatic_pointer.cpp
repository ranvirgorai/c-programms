#include <iostream>
using namespace std;
const int MAX=3;
int main(){
	int var[MAX]={10,20,30};
	int *ptr;
	ptr=var;
	int i=1;

	cout<<"Ptr =" <<ptr<<endl;
	cout<<"*Ptr=" <<*ptr<<endl;

	// for(int i=0;i<MAX;i++){
	// 	cout << "Address of var[" << i << "] = ";
 //      cout << ptr << endl;

 //      cout << "Value of var[" << i << "] = ";
 //      cout << *ptr << endl;
 //      ptr++;
	// }

while(ptr<=&var[MAX-1]){
	cout<<"address of ["<<i<<"] is ="<<ptr<<endl;
	cout<<"Value of ["<<i<<"] is ="<<*ptr<<endl;
	ptr++;
	i++;
}


return 0;
}
