#include <iostream>
using namespace std;

int main(){

int var;
int *ptr;
int **pptr;
var=300;

ptr=&var;

pptr=&ptr;

cout<<"Value var= "<<var<<endl;
cout<<"Value *ptr= "<<*ptr<<endl;
cout<<"Value **pptr= "<<**pptr<<endl;

return 0;
}
