#include <bits/stdc++.h>
using namespace std;
struct Array
{
   int  A[15];
   int length;
   int size;

};
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
void display(struct Array arr){
    for (int i = 0; i < arr.length; i++)
    {
        cout<<arr.A[i]<<endl;
    }
    
}
int Delete(struct Array *arr,int index)
{
 int x=0;
 int i;

 if(index>=0 && index<arr->length)
 {
   x=arr->A[index];
   for(i=index;i<arr->length-1;i++)
   arr->A[i]=arr->A[i+1];
   arr->length--;
   return x;
 }
  
   return 0;
}
void swap(int *x,int *y){
     int temp;
     temp=*y;
     *y=*x;
     *x=temp;
}
int Sum(struct Array arr)
{
 int s=0;
 int i;
 for(i=0;i<arr.length;i++)
 s+=arr.A[i];

 return s;
}
int get(struct Array arr,int index){
  if (index >= 0 && index < arr.length)
  {
    return arr.A[index];
  }
  return -1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    struct Array arr1;
    int ch;
    int index,x;
    cout<<"Enter the size of the array:";
    cin>>arr1.size;
    arr1.size=x;
    arr1.length=0;
    do
    {
      cout<<endl<<"Menu"<<endl;
      cout<<"1. Insert"<<endl;
      cout<<"2. Delete"<<endl;
      cout<<"3. Get"<<endl;
      cout<<"4. Display "<<endl;
      cout<<"5. Sum"<<endl;
      cout<<"6. Exit"<<endl;
      cout<<"Enter your choice:";
      int ch;
      cin>>ch;
      switch (ch)
      {
      case 1:cout<<"Enter an element and index:";
             cin>>x>>index;
             insert(&arr1,x);
        break;
      
      default:
        break;
      }
    } while (ch<=6);
    
}