#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   map <string,int> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        m[str]++;
        if(m[str]==1){
            cout<<"OK"<<endl;
        }
            else{
                cout<<str<<m[str]-1<<endl;
            }
        }
    }