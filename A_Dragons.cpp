#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>>v;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
        
    }
    sort(v.begin(),v.end());
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i].first<<" "<<v[i].second<<endl;
    
    int cnt=0,temp=0;
    
    for (int i = 0; i < n; i++)
    {
      if (s<=v[i].first)
      {
        cnt++;
        break;
      }
      else
      {
        s=s+v[i].second;
      }
      
    }
       
       
    
    if(cnt==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}