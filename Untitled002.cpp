#include <stdio.h>
#include <math.h>
int main (){
	float a,b,c,x1,x2,delta;
	printf("nhap a=\n");
	scanf ("%f",&a);
	printf("nhap b=\n");
	scanf ("%f",&b);
	printf ("nhap c=\n");
	scanf ("%f",&c);
	delta =  b*b-4*a*c;
	if(a==0){
		printf("nhap a > 0\n");
	}
		if(delta<0){
			printf("phuong trinh vo nghiem\n");
	}else{
			if(delta==0){
				float x1=x2=-b/(2*a);
					printf("x=%f\n",x1,x2);
	}else{
	
				if(delta>0){
					float x1 = (-b+sqrt (delta) )/(2*a);
					float x2 = (-b-sqrt(delta) )/(2*a);
					printf("x1=%f\n",x1);
					printf("x2=%f\n",x2);		
				}
			}
		
		}}
		
		
		
		
		
	
	
	
	
