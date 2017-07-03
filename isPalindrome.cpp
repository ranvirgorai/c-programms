#include <iostream>
#include <math.h>
using namespace std;
int main (){
int i,l,n,p,rev,f,r,m;
rev=0;
cout << "\n Enter A Number = ";
cin>>n;
l=0i;
int n2=n;
int n3=n;
for(i=0;i<n;(i*10))
{
n=n/10;
l++;
}
cout<<"\n Length of given number= "<<l<<" \n ";
while(n2!=0){
r=n2%10;
l--;
//cout<<"\n Remainder = "<<r;
//cout<<"\n Multiplyer = "<<l;
rev=rev+(r*pow(10,l));
n2=n2/10;
}
cout<<"\n Reverse Number is = "<<rev;
if(rev==n3){
cout<<"\n Given number is Palindrome";
}
else{
cout<<"\n Given Number is Not Palindrome";
}
return 0;
}

