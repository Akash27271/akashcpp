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
    {
       h[a[i]]++;
    }
    for (int i = 1; i < hg; i++)
    {
       if (h[i]==0)
       {
        cout<<"Missing element is "<<i<<endl;
       }
       
    }
    
}