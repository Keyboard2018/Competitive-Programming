#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,k,a,res;
    cin>>t;
    while(t--){
        res=0;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>a;
            res+=a/k;
        }
        cout<<res<<endl;
    }
    return 0;
}
