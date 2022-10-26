#include<stdio.h>
struct Array
{
    int A[10];
    int size;
    int length;
};

void display(struct Array arr){
   int i;
   printf("\nElements are:\n");
    for ( i = 0; i < arr.length; i++)
    {
        printf("%d\n",arr.A[i]);
    }   
}

int linearSearch(struct Array arr, int key){
         int i;
         for ( i = 0; i <arr.length ; i++)
         {
            if (key==arr.A[i])
            {
                return i;
            }
         }
         return -1;
}

int main(){
    struct Array arr = {{2,3,4,5,6},10,5};
   printf("%d", linearSearch(arr,12));
    display(arr);
    return 0;
}
