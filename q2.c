#include<stdio.h>
void add(int *arr,int size){
  for(int x=0; x<size; x++){
    arr[x] = arr[x] * arr[x];
  }
}
int main(){
    int size;
    printf("enter a number");
    scanf("%d",&size);

    int arr[size];
    
    for(int i=0;i<size;i++) {
        printf("enter arr[%d] value",i);
        scanf("%d",&arr[i]);
    }
    add(arr,size);
    for(int i=0;i<size;i++) {
        printf("%d\t",arr[i]);
        
    }
    return 0;
}