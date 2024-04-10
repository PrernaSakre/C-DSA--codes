#include<stdio.h>
int binary(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=(start+end)/2;
        if (arr[mid]==key){
            return mid;
        }
        else if (arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[]={15,23,25,40,42,56,70,71,72,73,74,75,76,77};
    int size=13;
    int start=0;
    int end=size-1;
    int key=75;

    int index=binary(arr,size,key);

    if(index==-1){
        printf("not found");
    }
    else{
        printf("found in index %d",index);
    }
    return 0;

}