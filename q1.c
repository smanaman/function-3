#include<stdio.h>
void swap(int *a,int *b){
int hello=*a;
*a=*b;
*b=hello;
}
int main(){
    int a;
    int b;
    printf("Enter your first number");
    scanf("%d",&a);
        printf("Enter your second number");
    scanf("%d",&b);
    swap(&a,&b);
    printf("%d %d",a,b);
}