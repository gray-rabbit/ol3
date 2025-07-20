#include <bits/stdc++.h>

using namespace std;
bool solve(string s){
    vector<char> st;
    for(auto c : s){
        if(c=='('||c=='['){
            st.push_back(c);
        }else if(c==')'){
            if(st.empty()||st.back()=='['){
                return false;
            }
            st.pop_back();
        }else if(c==']'){
            if(st.empty()||st.back()=='('){
                return false;
            }
            st.pop_back();
        }
    }

    return st.size()==0;
}
int main(){
    string s;
    while(getline(cin, s)){
        if(s==".") break;
        if(solve(s)){
            cout<<"yes"<<"\n";
        }else{
            cout<<"no"<<"\n";
        }
    }
}