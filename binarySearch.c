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

int binarySearch(struct Array arr,int key){
       int l,mid,h;   
       l=0;
       h=arr.length-1;
       while (l<=h)
       {
        mid=(l+h)/2;
        if (key==arr.A[mid])
        {
            return mid;
        }
        else if (key<=arr.A[mid])
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
        
        
       }
    return -1;   
}

int RBinSearch(int a[],int l,int h,int key){
    if(l <= h){
    int mid=(l+h)/2;
    if (key==a[mid])
    {
        return mid;
    }
    else if (key<a[mid])
    {
        return RBinSearch(a,l,mid-1,key);
    }
    
    else
    {
        return RBinSearch(a,mid+1,h,key);
    }
    }
    return -1;
}

int main(){
    struct Array arr = {{2,3,4,5,6,8,10,15,17,20},10,10};
    // printf("%d\n", binarySearch(arr,15));
     printf("%d",RBinSearch(arr.A,0,20,15));

    display(arr);
    return 0;
}
