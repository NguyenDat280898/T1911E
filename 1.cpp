#include <stdio.h>
#include <math.h>
int main (){
	int a,b;
	printf ("nhap 2 so a,b=\n");
	scanf ("%d",&a);
	scanf ("%d",&b);
	if (a>=b){	
	printf ("ket qua :%f\n",(float)a/b);
	}else{
		printf ("ket qua :%d\n",a*b);
	}
	
	
	return 0;
}
