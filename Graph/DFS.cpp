#include<bits/stdc++.h>
#include<map>

void prepareAdj(unordered_map<int, list<int>> &adjlist, vector<vector<int>> &edges){
    for(int i=0;i<edges.size();i++){
        int u =edges[i][0];
        int v =edges[i][1];

        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
}

void printadj(unordered_map<int, list<int>> &adjlist){
    for(auto i:adjlist){
        cout<<i.first;
        for(auto j:i.first){
            cout<<j;
        }
        cout<<endl;
    }
}
void dfs( unordered_map<int, list<int>> &adjlist,  vector<int> &ans, unordered_map<int, bool> &vistited, int node){
     ans.push_back(node);

     vistited[node] = true;
    
     for(auto i:adjlist[node]){
         if(!vistited[i]){
             dfs(adjlist,ans, vistited, i);
         }
     }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    unordered_map<int, list<int>> adjlist;
    unordered_map<int, bool> vistited;

    vector<int>ans;
    
    prepareAdj(adjlist,edges);
    dfs(adjlist, ans, vistited, 0);

    return ans;
}