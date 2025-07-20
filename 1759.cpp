#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<char> v;
    for (int i = 0; i < m; i++)
    {
        char c;
        cin >> c;
        v.push_back(c);
    }
    sort(v.begin(), v.end());



    for (int i = 0; i < 4; i++)
    {
        v.push_back(i);
    }
    vector<int>indices;
    for(int i=0;i<n;i++){
        indices.push_back(i);
    }

    do
    {

    } while (next_permutation(v.begin(), v.end())&&indices.back()<m);
}