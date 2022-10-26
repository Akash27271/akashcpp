#include <stdio.h>
#include <stdlib.h>
struct Array
{
  int A[10];
  int size;
  int length;
};
void append(struct Array *arr, int x){
  if (arr->size > arr->length)
  {
    arr->A[arr->length++]=x;
  }
  
}
void insert(struct Array *arr,int index,int x){
  if (index >=0 && index <= arr->length)
  {
    int i;
    for ( i = arr->length; i >index; i--)
    {
      arr->A[i]=arr->A[i-1];
    }
    arr->A[index]=x;
    arr->length++;
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
  struct Array arr={{2,3,4,5,6},10,5};
  append(&arr,10);
  insert(&arr,5,12);
  display(arr);
}