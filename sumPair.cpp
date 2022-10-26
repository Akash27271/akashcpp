#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
   
   //1st Method

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
           if (a[i]+a[j]==k)
           {
            cout<<a[i]<<'+'<<a[j]<<'='<<k<<endl;
           }
           
        }
        
    }
    
    //2nd Method
    int max=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]>max)
        {
           max=a[i];
        }
        
    }
    int hg=max+1;
    int h[hg]={0};
    for (int i = 0; i < n; i++)
    { if(a[i]<k){
        if (h[k-a[i]]!=0)
        {
            cout<<a[i]<<'+'<<k-a[i]<<'='<<k<<endl;
        }
        h[a[i]]++;
    }
    }
    
}