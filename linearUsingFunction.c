#include<stdio.h>
int linear_search(int array[],int n,int key){
    for(int i=0;i<n;i++){
        if(array[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int array[]={12,15,24,56,36,34,32,38};
    int n=sizeof(array)/sizeof(array[0]);
    int key=36;
    int result=linear_search(array,n,key);
    if(result!=0){
        printf("%d is found in %d:",key,result);
    }
    else{
        printf("%d is not found :",key);
    }
    return 0;

}