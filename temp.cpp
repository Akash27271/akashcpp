#include<bits/stdc++.h>
using namespace std;

template<class T>
class Array{
 private:
    T *A;
    int size;
    int length;
public:
    Array(){
        size=10;
        length=0;
        A=new T[size];
    }
    Array(int sz){
        size=sz;
        length=0;
        A=new T[size];
    }
    ~Array(){
        delete []A;
    }
    void Display();
    void Append(T x);
    void Insert(int index,T x);
    T Delete(int index);
};


template<class T>
void Array<T>::Display(){
    cout<<"Elements are:";
    for (int i = 0; i < length; i++)
    {   
        cout<<A[i]<<" ";
    }   
}

template<class T>
void Array<T>::Insert(int index,T x){
   if (index<=length && index>=0)
   {
    for (int i = length; i > index ; i--)
    {
        A[i]=A[i-1];
    }
    A[index]=x;
    length++;
   } 
}

template<class T>
T Array<T>::Delete(int index){
    T x=0;
  if (index>=0 && index<length)
  { x=A[index];
    for (int i = index; i < length; i++)
    {
        A[i]=A[i+1];
    }
    length--;
    return x;
  }
  return 0;
}

template<class T>
void Array<T>::Append(T x){
    if (length<size)
    {
        A[length++]=x;
    }
    
}

int main(){
    Array<int> arr(10);
    arr.Insert(0,5);
    arr.Insert(1,6);    
    arr.Insert(2,9);
    arr.Display();
    cout<<arr.Delete(0)<<endl;
    arr.Display();
}