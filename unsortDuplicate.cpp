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

    //first method

    for (int i = 0; i < n-1; i++)
    {
       int count=1;
       if(a[i]!=-1){
       for (int j = i+1; j < n; j++)
       {
          if (a[j]==a[i])           
          {
            count++;
            a[j]=-1;
          }
           
       }
       cout<<a[i]<<" is present "<<count<<" times"<<endl;
       }
    }
    

    //2nd method

    int m;
    cin>>m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    
    int max=0;
    for (int i = 0; i < m; i++)
    {
        if (b[i]>max)
        {
            max=b[i];
        }
        
    }
   int hg=max+1;
   int h[hg]={0};
   for (int i = 0; i < n; i++)
   {
      h[b[i]]++;
   }
   for (int i = 0; i < hg; i++)
   {
     if (h[i]>1)
     {
        cout<<i<<" is repeated for "<<h[i]<<" times"<<endl;
     }
     
   }
   

}