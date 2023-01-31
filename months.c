//to print the no. of days of a month if month and and year is given//
#include<stdio.h>
int days(int n1, int n2);

int main(){
	int y, m;
	printf("Enter year and month : ");
    	scanf("%d %d", &y, &m);
	days(y, m);
	return 0;
}
int days(int y, int m){
	int days;
	if(m!=2){
		if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
			days=31;
		}
		else{
			days=30;
		}
	}
	else{
		if(y%400==0){
			days=29;
		}
		else if(y%100==0){
			days=28;
		}
		else if(y%4==0){
			days=29;
		}
		else{
			days=28;
		}
	}
	printf("Days : %d \n", days);
}
