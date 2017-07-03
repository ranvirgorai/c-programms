// #include <iostream>
// #include <ctime>
// using namespace std;

// void getSeconds(unsigned long *par);
// int main(){
// unsigned long sec;
// getSeconds(&sec);

// cout<<"Number of seconds = "<< sec <<endl;
// return 0;
// }

// void getSeconds(unsigned long *ptr){
// 	*ptr=time(NULL);
// 	return;

// }

#include <iostream>
using namespace std;

double getAvg(int *arr,int size);

int main(){
	int balance[5]={34,56,123,100,123};
	int avg;

	avg=getAvg(balance,5);

	cout<<"avrage= "<<avg<<endl;

	return 0;
}

double getAvg(int *arr,int size){
	int i,sum=0;
	double avg;
	for( i=0;i<size;i++){
		sum=sum+arr[i];
	}
	avg=double(sum)/size;

	return avg;
}