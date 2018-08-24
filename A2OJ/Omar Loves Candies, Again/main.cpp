#include <bits/stdc++.h>

using namespace std;

int t;
string s;
vector<int> arr;
pair<int,int> getmax(){
 int ind=-1;
 int maxi=0;
 for(int i=0;i<arr.size();i++){
    if(arr[i]>maxi){
        ind=i;
        maxi=arr[i];
    }
 }
 return make_pair(ind,maxi);

}
int main()
{

    cin>>t;
    while(t--){
        arr.clear();
        arr.resize(28);
        cin>>s;
        for(int i=0;i<s.size();i++){
            arr[s[i]-'a']++;
        }
        pair<int,int> l;
        l= getmax();
        cout<<l.second<<" "<<(char)(l.first+'a')<<endl;
    }
    return 0;
}
