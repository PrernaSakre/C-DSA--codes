#include<stdio.h>
int main(){
    int n,i,l,h,mid,key;
    printf("entre the number of element:");
    scanf("%d",&n);
    int array[n];
    printf("enter the element in sorted sequence:");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("enter the research element:");
    scanf("%d",&key);
    l=0;
    h=n-1;
    while(l<=h){
        mid=(l+h)/2;
        if(array[mid]==key){
            printf("%d present at the index %d:",key,mid);
            break;
        }
        else if(array[mid]>key)
            h=mid-1;
        
        else 
            l=mid+1;
        
    }
    if(key==-1){
   printf("\narray is not found");
    }
   return 0;
}