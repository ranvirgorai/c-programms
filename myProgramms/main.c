#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{

    //char firstName[20];
    //char crush[20];
    //int numberOfBabies;
    //printf(" Enter your name");
    //scanf("%s",firstName);
    //printf("How many kids will you have? \n");
    //scanf("%d",&numberOfBabies);
    //printf("Your name is %s And You have %f Babies",firstName,(float)numberOfBabies
    //);

    //int a=0;
    //do{
    //printf("Hello");
    //a++;
    //}while(a<=5);

   // int num =1;
   // do{
   // if(num==6 || num==8){
   //     num++;
   //     continue;
   // }
   // printf("%d is avilable \n",num);
   // num++;
   // }while(num<=10);

   //int tuna='a';
   //if(isalpha(tuna)){
   //printf("%c is a letter",tuna);
   //}else{
   //if(isdigit(tuna)){
   //printf("%d is digit",tuna);
   //}else{

   //printf("Somthing Else");

   //}

   //}

    //char catsName[50];
    //char catsFood[25];
    //char sentence[75]="";
    //puts("What the cats dumb name?");
    //gets(catsName);

    //puts("What does he eat");
    //gets(catsFood);
    //strcat(sentence,catsName);
    //strcat(sentence," loves to eat ");
    //strcat(sentence,catsFood);

    //puts(sentence);

//    float bacon1=9.635446;
//    float bacon2=3.3;
//    printf("Bacon1 is %.2f \n",floor(bacon1));
//    printf("bacon2 is %.2f \n",floor(bacon2));
//
//    printf("Bacon1 is %.2f \n",ceil(bacon1));
//    printf("bacon2 is %.2f \n",ceil(bacon2));

//int year1;
//int year2;
//int age;
//printf("Enter a year \n");
//scanf("%d",&year1);
//
//printf("Enter another year \n");
//scanf("%d",&year2);
//
//age=year1-year2;
//age=abs(age);
//
//printf("%d \n",age);

//int i;
//int discRoll;
//for(i=0;i<20;i++){
//discRoll=(rand()%6)+1;
//printf("%d \n",discRoll);
//}

//int i;
//int meatBalls[5];//={7,9,43,21};
//int totalBalls=0;
//for(i=0;i<5;i++){
//printf("Enter Number of meat ball");
//scanf("%d",&meatBalls[i]);
//}
//for(i=0;i<5;i++){
//totalBalls+=meatBalls[i];
//}
//
//int avg=totalBalls/5;
//printf("You ate %d meatBall and average is= %d",totalBalls,avg);

int i,temp,swapped;
int howMany=10;
int goals[howMany];

for(i=0;i<howMany;i++){
goals[i]=(rand()%25)+1;
}

printf("Original List \n");

for(i=0;i<howMany;i++){
printf("%d \n",goals[i]);
}

while(1){
swapped=0;
for(i=0;i<howMany-1;i++){
if(goals[i]>goals[i+1]){
int temp=goals[i];
goals[i]=goals[i+1];
goals[i+1]=temp;
swapped=1;
}
}
if(swapped==0){
break;}
}
printf("\n After Sorted");

for(i=0;i<howMany;i++){

printf("%d \n",goals[i]);

}
return 0;
}
