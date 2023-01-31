//to find the compound interest using function//
#include<stdio.h>
#include<math.h>
int compoundInterest(float n1, float n2, float n3, float n4);
int main(){
	float p, r, t, nT;
	printf("Enter principal : ");
	scanf("%f", &p);
	printf("Enter rate : ");
    	scanf("%f", &r);
	printf("Enter time (in years) : ");
    	scanf("%f", &t);
	printf("Enter no. of times interest applied : ");
	scanf("%f", &nT);
	compoundInterest(p, r, t, nT);
	return 0;
}
int compoundInterest(float p,float r,float t,float nT){
	float compound_interest =p*pow((1+r*0.01/nT), nT*t);
	printf("Final amount after Compound Interest = %.2f \n", compound_interest);
}
