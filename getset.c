#include<stdio.h>
struct Array 
{
int A[10];
int size;
int length;
};

int get(struct Array arr,int index){
    if (index>=0 && index<arr.length)
    {
        return arr.A[index];
    }
   return -1; 
}

void set(struct Array *arr,int index,int x){
     if (index>=0 && index<arr->length)
     {
       arr->A[index]=x;
     }
     
}

int max(struct Array arr){
    int max=arr.A[0];
    int i;
    for ( i = 1; i <arr.length; i++)
    {
        if (arr.A[i]>max)
        {
            max=arr.A[i];
        }
        
    }
    return max;
}

int min(struct Array arr){
    int min=arr.A[0];
    int i;
    for ( i = 1; i <arr.length; i++)
    {
        if (arr.A[i]<min)
        {
            min=arr.A[i];
        }
        
    }
    return min;
}

int sum(struct Array arr){
    int i;
    int total=0;
    for ( i = 0; i < arr.length; i++)
    {
        total=total+arr.A[i];
    }
    return total;
}

float avg(struct Array arr){
    return sum(arr)/arr.length;
}

void display(struct Array arr){
    int i;
    printf("\nElements are:\n");
    for ( i = 0; i < arr.length; i++)
    {
        printf("%d  ",arr.A[i]);
    }
    
}

int main(){
    struct Array arr={{8,3,9,15,6,10,7,2,12,4},10,10};
    printf("%d\n",get(arr,2));
    set(&arr,3,20);
    printf("%d\n",max(arr));
     printf("%d\n",min(arr));
     printf("%d\n",sum(arr));
     printf("%lf\n",avg(arr));

    display(arr);
    return 0;
}