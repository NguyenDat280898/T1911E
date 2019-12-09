#include <stdio.h>
int main (){
	int thu;
	printf(" nhap thu =\n");
	scanf ("%d",&thu);
	if (thu>=2 && thu<=8){
		if (thu>=2 && thu<=7){
		printf ("thu %d ",thu);
	}else{
		printf ("chu nhat %d",thu);
		
	}
		
	}else{
		printf ("khong phai la thu trong tuan %d ");
	}
}
