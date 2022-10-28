#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    bool istrue=true;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
           i=i+2;
           if (!istrue)
           {
            cout<<" ";
           }
           continue;
        }
        else
        {
            istrue=false;
            cout<<s[i];
        }
        
    }
    
    
    return 0;
    
}