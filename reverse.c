#include <stdio.h>
#include <stdlib.h>
struct Array
{
  int A[10];
  int size;
  int length;
};

void reverse(struct Array *arr){
   int *B;
   int i,j;
   B=(int *)malloc(arr->length*sizeof(int));
   for ( i = arr->length-1,j=0; i >=0; i--,j++)
   {
     B[j]=arr->A[i];
   }
   for ( i = 0; i < arr->length; i++)
   {
      arr->A[i]=B[i];
   }
   
}

void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void reverse2(struct Array *arr){
    int i,j;
    for ( i = arr->length-1,j=0; i >j ; i--,j++)
    {
        swap(&arr->A[i],&arr->A[j]);
    }
    

}

void display(struct Array arr){
  int i;
  printf("Elements are\n");
  for ( i = 0; i < arr.length ; i++)
  {
    printf("%d\n", arr.A[i]);
  }
  
}

int main(){
    struct Array arr={{8,3,9,15,6,10,7,2,12,4},10,10};
    // reverse(&arr);
    reverse2(&arr);
    display(arr);
}