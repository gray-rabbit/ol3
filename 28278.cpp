#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, order, data;
    cin >> n;
    vector<int> st;

    for (int i = 0; i < n; i++)
    {
        cin >> order;
        if (order == 1)
        { // 입력이죠!
            cin >> data;
            st.push_back(data);
        }
        else if (order == 2)
        {
            if (st.size() == 0)
                cout << -1 << "\n";
            else
            {
                cout<<st.back()<<"\n";
                st.pop_back();
            }
        }
    }
}
