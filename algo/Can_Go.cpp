#include<bits/stdc++.h>
using namespace std;
char grid[1000][1000];
bool vis[1000][1000];
vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};
int n,m;

bool valid(int i, int j){
    if(i<0 || i>=n || j<0 || j>=m){
        return false;
    }
    return true;
}

bool bfs(int si, int sj){
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj] = true;
    while(!q.empty())
    {
        pair<int,int> p = q.front();
        q.pop();
        int pi = p.first;
        int pj = p.second;
        if(grid[pi][pj] == 'B'){
            return true;
        }
        for(int i=0;i<4;i++)
        {
            int ci = pi + d[i].first;
            int cj = pj + d[i].second;
            if(valid(ci,cj) && !vis[ci][cj] && (grid[ci][cj]=='.' || grid[ci][cj]=='B')){
                q.push({ci,cj});
                vis[ci][cj] = true;
            }
        }
    }
    return false;
}

int main()
{
    cin >> n >> m;
    int si,sj;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> grid[i][j];
            if(grid[i][j] == 'A')
            {
                si = i;
                sj = j;
            }
        }
    }
    memset(vis,false,sizeof(vis));
    if(bfs(si,sj)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO"<< endl;
    }
    return 0;
}