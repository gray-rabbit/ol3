#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,idx=0;
    cin>>n;
    vector<int> st;
    vector<char> ans;
    vector<int> t;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        t.push_back(temp);
    }

    for(int i=1;i<=n;i++){
        st.push_back(i);
        ans.push_back('+');
        while(!st.empty()&&st.back()==t[idx]){
            st.pop_back();
            idx+=1;
            ans.push_back('-');
        }

    }
    if(st.size()){
        cout<<"NO";
    }else{
        for(auto c : ans){
            cout<<c<<"\n";
        }
    }
}