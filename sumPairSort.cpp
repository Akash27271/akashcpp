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
    int i,j;
    i=0;
    j=n-1;
    while (i<j)
    {
        if (a[i]+a[j]==k)
        {
             cout<<a[i]<<'+'<<a[j]<<'='<<k<<endl;
             i++;
             j--;
        }
       else if (a[i]+a[j]<k)
       {
          i++;
       }
        else
        {
            j++;
        }
        
    }
    
}