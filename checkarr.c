#include <stdio.h>
#include <stdlib.h>
struct Array
{
  int A[10];
  int size;
  int length;
};

void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void insert(struct Array *arr,int x){
   
   if (arr->length==arr->size)
   {
    return;
   }
   else{
    int i = arr->length-1;
   while (i>=0 && arr->A[i] > x)
   {
    arr->A[i+1]=arr->A[i];
    i--;
   }
   arr->A[i+1]=x;
   arr->length++;
   }  
}

int isSorted(struct Array arr){
      int i;
      for ( i = 0; i < arr.length; i++)
      {
        if (arr.A[i]>arr.A[i+1])
        {
            return 0;
        }
      }
       return 1;
}

void rearrange(struct Array *arr2){
    int i=0;
    int j=arr2->length-1;
    while (i<j)
    {
        while (arr2->A[i]<0)
        {
            i++;
        }
       while (arr2->A[j] >= 0)
       {
        j--;
       }
        if (i<j)
        {
            swap(&arr2->A[i],&arr2->A[j]);
        }
        
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
    struct Array arr={{4,8,13,16,20,25,28,33},8,10};
    struct Array arr2={{-6,-3,-8,10,5,-7,-9,12,-4,2},10,10};
    // insert(&arr,18);
    printf("%d\n",isSorted(arr));
    rearrange(&arr2);

    display(arr2);
}