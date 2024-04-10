#include<stdio.h>
int main(){
    int n,key,i;
    printf("enter the number of elements:");
    scanf("%d",&n);
    int array[n];
    printf("enter the elements :");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("enter the research element:");
    scanf("%d",&key);

    for(i=0;i<n;i++){
        if(array[i]==key){
            printf("%d is found in index %d:",key,i);
            break;
        }
    }
    if(key==-1){
        printf("%d is not found:");
    }
    return 0;
}
    
