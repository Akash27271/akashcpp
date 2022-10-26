#include<stdio.h>
#include<stdlib.h>
struct Array
{
    int A[10];
    int size;
    int length;
};

void display(struct Array arr){
   int i;
   printf("Elements are:\n");
   for ( i = 0; i < arr.length; i++)
   {
    printf("%d\n",arr.A[i]);
   }
   
}
int delete(struct Array *arr,int index){
    int x=0, i;
    if (index > 0 && index < arr->length)
    {
        x=arr->A[index];
        for ( i = index; i < arr->length-1; i++)
        {
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
        return x;
    }
    return 0;
}

int main(){
    struct Array arr={{2,3,4,5,6},10,5};
    printf("%d\n",delete(&arr,3));
    display(arr);

    return 0;
}