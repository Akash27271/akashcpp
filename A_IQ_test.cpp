#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int e=0,o=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2==0)
        {
           e++;
        }
        else
        {
            o++;
        }
        
    }
    int x;
    if (e>o)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i]%2!=0)
            {
               cout<<i+1<<endl;
               break;
            }
            
        }
        
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i]%2==0)
            {
               cout<<i+1<<endl;
               break;
            }
            
        }
        
    }
    
return 0;
}