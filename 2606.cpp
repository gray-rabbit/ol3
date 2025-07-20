#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> graph;
vector<bool> visited;
void dfs(int n){
    for(auto c : graph[n]){
        if(visited[c]==false){
            visited[c]= true;
            dfs(c);
        }
    }
}
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    graph.resize(n+1);
    visited.resize(n+1,false);

    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
 
    deque<int> q;
    q.push_back(1);
    visited[1] = true;
    dfs(1);
    for(auto v : visited){
        cout<<v<<" ";
    }
    // while(!q.empty()){
    //     int v = q.front();
    //     q.pop_back();
    //     for(auto c :graph[v]){
    //         if(visited[c]==false){
    //             q.push_back(c);
    //             visited[c]= true;
    //         }
    //     }
    // }
 

}