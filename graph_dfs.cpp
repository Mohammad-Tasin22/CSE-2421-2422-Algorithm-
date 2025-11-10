#include <bits/stdc++.h>
using namespace std;

int visit[100];
vector<int>v[100];

void init(int n)
{

    for(int i=1;i<=n;i++)
    {
        visit[i] = 0;
        v[i].clear();
    }
}

void dfs(int node)
{
    cout << node << "\n";
    visit[node] = 1;

    for(int i=0;i<v[node].size();i++)
    {
        if(visit[v[node][i] ]== 0)
        {
            dfs(v[node][i]);
        }
    }
}

int main() {


    freopen("list.txt","r",stdin);
    freopen("out.txt","w",stdout);

    int vertex,edge;  cin >> vertex >> edge;
    init(vertex);

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

    dfs(1);
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
