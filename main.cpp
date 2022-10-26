#include <bits/stdc++.h>
using namespace std;
struct Array
{
   int  A[15];
   int length;
   int size;

};

int get(struct Array arr,int index){
  if (index >= 0 && index < arr.length)
  {
    return arr.A[index];
  }
  return -1;
}

void set1(struct Array *arr,int index,int x){
    if (index>=0 && index<arr->length)
    {
        arr->A[index]=x;
    }
    
}

void display(struct Array arr){
    for (int i = 0; i < arr.length; i++)
    {
        cout<<arr.A[i]<<endl;
    }
    
}

int max(struct Array arr){
    int max=arr.A[0];
    for (int i = 0; i < arr.length; i++)
    {
        if (arr.A[i]>max)
        {
            max=arr.A[i];
        }
        
    }
    return max;
}

void swap(int *x,int *y){
     int temp;
     temp=*y;
     *y=*x;
     *x=temp;
}

void reverse(struct Array *arr){
  int *b=new int[15];
  int j;
  for (int i = arr->length-1,j=0; i >=0 ; i--,j++)
  {
    b[j]=arr->A[i];
  }
  for (int i = 0,j=0; i < arr->length; i++,j++)
  {
    arr->A[i]=b[j];
  }
  
}

void reverse2(struct Array *arr){
    int i,j;
    for (i = 0,j=arr->length-1; j>i; i++,j--)
    {
       swap(&arr->A[i],&arr->A[j]);
    }
    
}

void shift(struct Array *arr){
    for (int i = arr->length-1; i >0; i--)
    {
        arr->A[i]=arr->A[i-1];
    }
    arr->A[0]=0;
}

void rotate(struct Array *arr){
    int x=arr->A[arr->length-1];
    for (int i = arr->length-1; i >0 ; i--)
    {
        arr->A[i]=arr->A[i-1];
    }
    arr->A[0]=x;
}

void insert(struct Array *arr,int x){
    int i=arr->length-1;
    if (arr->size==arr->length)
    {
       return;
    }
   else
   {
    while (i>=0 && arr->A[i]>x)
    {
        arr->A[i+1]=arr->A[i];
        i--;
   }
   arr->A[i+1]=x;
   arr->length++;
   }  
}

int isSort(struct Array arr){
    for (int i = 0; i < arr.length; i++)
    {
       if (arr.A[i]>arr.A[i+1])
       {
        return -1;
       }
       
    }
   return 1;
}

void rearrange(struct Array *arr){
    int i=0;
    int j=arr->length-1;
    while (i<j)
    {
       while (arr->A[i]<0)
       {
       i++;
       }
       while (arr->A[j]>0)
       {
        j--;
       }
       if (i<j)
       {
        swap(&arr->A[i],&arr->A[j]);
       }
       

    }
    
}

struct Array *merge(struct Array *arr1,struct Array *arr2){
    int i,j,k;
    i=j=k=0;
    struct Array *B= new struct Array[sizeof(struct Array)];
    while (i<arr1->length && j<arr2->length)
    {
        if (arr1->A[i]<arr2->A[j])
        {
          B->A[k++]=arr1->A[i++];
        }
        else
        {
            B->A[k++]=arr2->A[j++];
        }
        
        
    }
    for ( i ; i < arr1->length; i++)
    {
        B->A[k++]=arr1->A[i];
    }
    for ( j ; j < arr2->length; j++)
    {
       B->A[k++]=arr2->A[j];
    }
    B->length=arr1->length+arr2->length;
    B->size=10;
    return B;
}

struct Array *Union(struct Array *arr1,struct Array *arr2){
    int i,j,k;
    i=j=k=0;
    struct Array *arr3=new struct Array[sizeof(struct Array)];
    while (i<arr1->length && j<arr2->length)
    {
       if (arr1->A[i]<arr2->A[j])
       {
        arr3->A[k++]=arr1->A[i++];
       }
        if (arr1->A[i]>arr2->A[j])
        {
            arr3->A[k++]=arr2->A[j++];
        }
        else
        {
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
        
    }
    for ( i ; i < arr1->length; i++)
    {
        arr3->A[k++]=arr1->A[i];
    }
    for ( j ; i < arr2->length; j++)
    {
        arr3->A[k++]=arr2->A[j];
    }
    arr3->length=k;
    arr3->size=10;
    return arr3;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // struct Array arr={{4,8,10,15,18,21,24,27,29,33},10,15};
    // struct Array lund={{-6,-3,-8,10,5,-7,-9,12,-4,2},10,15};
    // struct Array gand1={{3,8,16,20,25},5,10};
    // struct Array gand2={{4,10,12,22,23},5,10};
    // struct Array *gand3;
    // gand3=merge(&gand1,&gand2);
    // cout<<get(arr,3)<<endl;
    // set1(&arr,5,22);
    // cout<<max(arr)<<endl;
    // reverse(&arr);
    //reverse2(&arr);
    // shift(&arr);
    // rotate(&arr); 
    // insert(&arr,20);
    // isSort(arr);
    // rearrange(&lund);
     struct Array arr1 = {{3,4,5,6,10},5,10};
    struct Array arr2 = {{2,4,5,7,12}, 5,10};
    struct Array *arr3;
    arr3=Union(&arr1,&arr2);
    display(*arr3);
    
}