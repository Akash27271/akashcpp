#include <bits/stdc++.h>
using namespace std;

int missingSingleFirst(int arr[], int x,int n){
   int sum=0,s;
   s=(x*(x+1))/2;
   for (int i = 0; i < n; i++)
   {
     sum=sum+arr[i];
   }
   int diff=s-sum;
   return diff;
}

int missingSingle(int arr[],int n){
    int l,diff;
    l=arr[0];
    diff=l-0;
    for (int i = 0; i < n; i++)
    {
        if ((arr[i]-i)!=diff)
        {
            cout<<"Missing element is "<<diff+i<<endl;
            break;
        }
        
    }
    return 0;
}

void missingMultiple(int arr[],int n){
    int l,diff;
    l=arr[0];
    diff=l-0;
    for (int i = 0; i < n; i++)
    {
        if ((arr[i]-i)!=diff)
        {
            while (diff<(arr[i]-i))
            {
                cout<<"Missing element is "<<diff+i<<endl;
                diff++;
            }
            
        }
        
    }
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int x=arr[n-1];
    cout<<missingSingleFirst(arr,x,n);
    int n1;
    cin>>n1;
    int arr1[n1];
    for (int i = 0; i < n1; i++)
    {
        cin>>arr1[i];
    }
    missingSingle(arr1,n1);
    int n2;
    cin>>n2;
    int arr2[n2];
    for (int i = 0; i < n2; i++)
    {
        cin>>arr2[i];
    }
    missingMultiple(arr2,n2);
}