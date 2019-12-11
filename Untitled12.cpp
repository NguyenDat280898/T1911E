#include <stdio.h>
int main (){
	int a,b,c;
		printf (" nhap a=\n");
		scanf ("%d",&a);
		printf ("nhap b=\n");
		scanf ("%d",&b);
		printf ("nhap c=\n");
		scanf ("%d",&c);
	if ((a + b >= c) || (a + c >= b) || (b + c >= a)) {
		printf ("day la 3 canh cua tam giac");

	}else{
		printf("Day khong phai la  3  canh cua tam giac");
	}
		
}

