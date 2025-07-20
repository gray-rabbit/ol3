#include <bits/stdc++.h>

using namespace std;

bool solve()
{
    string s;
    cin >> s;
    vector<char> st;
    for (char c : s)
    {
        if (c == '(')
            st.push_back(c);
        else
        {
            if (st.empty())
                return false;
            else
                st.pop_back();
        }
    }
    return st.size() == 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n ;
    cin>>n;
    for(int i=0;i<n;i++){
        if(solve()){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }

}