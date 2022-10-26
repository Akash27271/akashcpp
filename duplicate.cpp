#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
    }                                             
    int last_duplicate=0;
    for (int i = 0; i < n-1; i++)
    {
       if (a[i]==a[i+1] && a[i]!=last_duplicate)        //finding elements which have a duplicate
       {
        cout<<a[i]<<endl;
        last_duplicate=a[i];
       }
       
    }  

    int j=0;
   for (int i = 0; i < n-1; i++)
   {
     if (a[i]==a[i+1])
     {
       j=i+1;
       while (a[j]== a[i])
       {
        j++;
       }
     
        cout<<a[i]<<" is repeating for "<<j-i<<" times"<<endl;
        i=j-1;
     }
     
   }
   
}