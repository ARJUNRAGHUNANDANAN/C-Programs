//C program to find sum and average of three numbers - by arjun raghunandanan
//https://github.com/ARJUNRAGHUNANDANAN/C-Programs

#include<stdio.h>
main()
{
int first,second,third,sum;
float avg;
printf("Enter three numbers one by one");
scanf("%d%d%d",&first,&second,&third);
sum=first+second+third;
avg=sum/3.0;
printf("SUM OF THREE NUMBERS IS  %d \n AVERAGE OF THREE NUMBERS IS %f",sum,avg);
}

