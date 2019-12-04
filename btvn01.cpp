#include <stdio.h>
int main (){
	int a,b,c;
	printf ("nhap a=\n");
	scanf ("%d",&a);
	printf ("nhap b=\n");
	scanf ("%d",&b);
	printf ("nhap c=\n");
	scanf ("%d",&c);
	int min=a;
	if (min>b){
		min=b;
		if(min>c){
			min=c;
		}
		printf("%d la so nho nhat\n",min);
	}
	
	
	
}
