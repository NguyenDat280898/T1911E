#include <stdio.h>
int main (){
	int a,b,c;
	printf ("nhap a=\n");
	scanf ("%d",&a);
	printf ("nhap b=\n");
	scanf ("%d",&b);
	printf ("nhap c=\n");
	scanf ("%d",&c);
	int max=a;
	if (max<b){
		max=b;
		if (max<c){
			max=c;
		}
	printf("%d la so lon nhat\n",max);

   }
		
}
