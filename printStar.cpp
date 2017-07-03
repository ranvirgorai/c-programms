/*
* @Author: Ranvir
* @Date:   2017-06-19 23:42:50
* @Last Modified by:   Ranvir
* @Last Modified time: 2017-06-19 23:59:31
*/

#include <iostream>

using namespace std;

int main(){
int i,j,w,h;
cout<<"Enter Width= ";
cin>>w;
cout<<"Enter Height= ";
cin>>h;
for (i=0;i<h;i++){
	if(i<h/2 || i>h/2+h/10){
	for(j=0;j<w;j++){
		if(j<=2 || j>=8)
		cout<<"*";
		else
			cout<<" ";
	}
}
if (i>=5 && i<=8){
	for(j=0;j<w;j++){
		
		cout<<"*";
		
		
	}
}

	cout <<"\n";
    }

    return 0;
}