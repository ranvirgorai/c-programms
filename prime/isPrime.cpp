#include <iostream>
using namespace std;
int main(){
int n,i,f,prime;
cout<<"\n Enter a number = ";
cin>>n;
for(i=2;i<n;i++){
if(n%i==0){
f=1;
}
}
if(f==1){
cout<<"\n Given Number is Not prime \n";
}else{
cout<<"\n Given Number is  Prime \n";
}
return 0;
}