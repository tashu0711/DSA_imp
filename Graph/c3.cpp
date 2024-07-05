#include<bits/stdc++.h>
#include<map>
void prepareAdjList(unordered_map<int, list<int>> &adjlist, vector<vector<int>> &edges ){
    //empty adjlist is given
    //edges given

    for(int i=0;i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];

            adjlist[u].push_back(v);
            adjlist[v].push_back(u);

    }

}

void printAdjlist(unordered_map<int, list<int>> &adjlist){
    for(auto i:adjlist){
        cout<<i.first<<"--->";
        for(auto j:i.second){
            cout<<j<<",";
        }
        cout<<endl;
    }
}

void bfs(unordered_map<int, list<int>> &adjlist, vector<int> &ans, int node, unordered_map<int, bool> &visited ){
            queue<int> q;
            q.push(node);
            visited[node] = 1;
            
            while(!q.empty()){
                int front_node = q.front();
                q.pop();

                ans.push_back(front_node);

                for(auto i: adjlist[front_node]){
                    if(!visited[i]){
                        q.push(i);
                        visited[i]=1;
                    }
                }
            }
           
}
vector<int> bfsTraversal(int v, vector<vector<int>> &edges){
    // Write your code here.
    unordered_map<int, list<int>>adjlist;
    vector<int> ans;
    unordered_map<int, bool> visited;
    prepareAdjList(adjlist, edges);
    printAdjlist(adjlist);

    for(int i=0;i<v;i++){
        if(!visited[i]){
            bfs(adjlist, ans, i, visited);
        }
    }
    return ans;
}

