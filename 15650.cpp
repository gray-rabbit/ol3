#include <bits/stdc++.h>

using namespace std;
vector<int> ans;
vector<int> l;
int n,m;

void recu(int k){
    if(ans.size()>=m){
        //답출력
        for(auto c : ans) printf("%d ", c );
        printf("\n");
        return;
    }

    for(int i=k;i<n;i++){
        if(l[i]==-1)continue;
        
        ans.push_back(l[i]);
        l[i] = -1;
        recu(i+1);
        l[i] = ans.back();
        ans.pop_back();
    }
}

int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        l.push_back(i);
    }
    sort(l.begin(), l.end() ,greater<int>());
    recu(0);
}