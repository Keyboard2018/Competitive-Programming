#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,x,y,a,res;
    cin>>t;
    bool easy,hard;
    while(t--){
        easy=false;
        hard=false;
        cin>>n>>x>>y;
        cin>>a;
        if(a==x) easy=true;
        for(int i=2;i<n;i++){
            cin>>a;
        }
        cin>>a;
        if(a==y) hard=true;
        if(easy && hard){
            cout<<"BOTH"<<endl;
        }
        else{
            if(easy){
                cout<<"EASY"<<endl;
            }
            else{
                if(hard){
                    cout<<"HARD"<<endl;
                }
                else {
                    cout<<"OKAY"<<endl;
                }
            }
        }


    }
    return 0;
}
