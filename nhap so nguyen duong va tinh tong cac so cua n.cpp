#include<stdio.h>
int main(){
    int n,i;
    int s = 0;
    printf("Nhap n: ");
    scanf("%d",&n);
    for(;n!=0;){
        i = n % 10;
        s += i;
        n /= 10;
    }    
    printf("%d",s);
}
 
