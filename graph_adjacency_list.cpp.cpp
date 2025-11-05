#include <bits/stdc++.h>
using namespace std;




int main() {

    int vertex,edge;  cin >> vertex >> edge;

    vector<int>v[vertex+1];

    for(int i=0;i<edge;i++)
    {
        int a,b; cin >> a >> b;

        if(a==b){ v[a].push_back(b); }
        else
        {
            v[a].push_back(b);
            v[b].push_back(a);
        }
    }

    for(int i=1;i<=vertex;i++)
    {
        cout << i << " -> ";
        for(int j = 0;j<v[i].size();j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
