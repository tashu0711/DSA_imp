#include<bits/stdc++.h>

 void prepareAdj( unordered_map<int, list<int>> &adjlist, vector<vector<int>> &edges){
     for(int i=0;i<edges.size();i++){
         int u = edges[i][0];
         int v = edges[i][1];

         adjlist[u].push_back(v);
        //  adjlist[v].push_back(u);
     }
 }

  void toposort_BFS(unordered_map<int, list<int>> &adjlist, unordered_map<int, bool> &visited, int src, queue<int> &q, queue<int> &q2){
     
      q.push(src);
      q2.push(src);

      while(!q2.empty()){
          int front_node = q2.front();
          q2.pop();
         
          for(auto i: adjlist[front_node]){
              if(!visited[i]){
                  q2.push(i);
                  q.push(i);
              }else if (i == NULL){
                  q.push(i);
                  return;
              }
          }
      }
  }

//  void toposort(unordered_map<int, list<int>> &adjlist, unordered_map<int, bool> &visited, int src, stack<int> &s){

//      visited[src] = true;

//      for(auto i: adjlist[src]){
//          if(!visited[i]){
//              toposort(adjlist, visited, i, s);
//          }
//      }
//      s.push(src);
     
//  }


int main(){
    // Write your code here
    
    int v;
    int e;
    cin>>v>>e;
    for
    unordered_map<int, list<int>> adjlist;
    unordered_map<int, bool> visited;
    vector<int> ans;
    // stack<int> s;
    queue<int> q;
    queue<int> q2;
    

    prepareAdj(adjlist, edges);

    ///Handling case for Disconnected Graph
    for(int i=0;i<v;i++){
        if(!visited[i]){
            toposort_BFS(adjlist, visited, i, q, q2);
        }
    }

    while(!q.empty()){
        ans.push_back(q.front());
        q.pop();
    }
    // while(!s.empty()){
    //     ans.push_back(s.top());
    //     s.pop();
    // }

    for(auto i: ans){
        cout<<i<<"  ";
    }
    return ans;

}