#include<stdio.h>
struct Array
{
    int A[10];
    int length;
    int size;
};

void shift(struct Array *arr){
    int i;
    for ( i = 0; i < arr->length-1; i++)
    {
        arr->A[i]=arr->A[i+1];
    }
   arr->A[arr->length-1]=0; 
}

void rotate(struct Array *arr){
    int i;
    int x=arr->A[0];
    for ( i = 0; i < arr->length-1; i++)
    {
        arr->A[i]=arr->A[i+1];
    }
    arr->A[arr->length-1]=x;
}

void display(struct Array arr){
    int i;
    for ( i = 0; i < arr.length; i++)
    {
        printf("%d\n",arr.A[i]);
    }  
}

int main(){

    struct Array arr={{6,3,8,5,9},5,10};
    // shift(&arr);
    rotate(&arr);
    display(arr);
    return 0;
}