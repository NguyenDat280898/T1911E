#include<stdio.h>
int main(){
	int a=1,b=0;
	while(!(a<b))
	{
	printf("nhap a, b\n");
	scanf("%d",&a);
	scanf("%d",&b);
	}
	int s=0;
	for(int i=a;i<=b;i++)
	{
		s+=i;
	}
	printf("tong= %d",s);
	return 0;
}
