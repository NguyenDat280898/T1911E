#include <stdio.h>
int main (){
	int x,y;
	printf ("nhap x=\n");
	scanf ("%d\n",&x);
	printf ("nhap y=\n");
	scanf ("%d\n",&y);
	
	int ab=x;
	x=y;
	y=ab;
	printf (" gia tri sau khi hoan doi x=%d\n y=%d\n",x,y);
}
