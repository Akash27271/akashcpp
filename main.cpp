#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int> v;
    for (int i = 0; i < m; i++)
    {
      int x;
      cin>>x;
      v.push_back(x);
    }
    sort(v.begin(),v.end());
    int ls=v[n-1]-v[0];
    for (int i = 0; i <= m-n; i++)
    {
      if (v[i+n-1]-v[i]<ls)
      {
       ls=v[i+n-1]-v[i];
      }
      
    }
    cout<<ls<<endl;
}