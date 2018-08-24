#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,a;
    string s;
    string before,after,eng;
    bool br;
    cin>>t;
    while(t--){
        br=false;
        before="";
        after="";
        eng="";

        cin>>a;
        for(int i=0;i<a;i++){
             cin>>s;
             if(s[0]!='#'){
                br =true;
                eng=s;
                continue;
             }
            if(!br){
               if(before.size()==0) before=s;
               else before+=" "+s;
            }
            else{
               if(after.size()==0) after=s;
               else after+=" "+s;
            }
        }
        if(br){
            if(after.size()>0) cout<<after<<" "<<eng<<" "<<before<<endl;
            else  {
                    if(before.size()>0) cout<<eng<<" "<<before<<endl;
                    else cout<<eng<<endl;
                    }
        }
        else
            cout<<before<<endl;

    }
    return 0;
}
