#include<bits/stdc++.h>
#include<map>
using namespace std;
class Graph{
    public:
    void prapre_list(int u, int v, int w, unordered_map<int, list<pair<int,int>>> &adj){
        pair<int, int> p = make_pair(v,w);
        adj[u].push_back(p);
    }
    
    void topo(unordered_map<int, list<pair<int,int>>> &adj, stack<int> &s, unordered_map<int, bool> &visit,int &src){
        int top = src;
        visit[top] = true;
        /// agr ye adj ka leta to poora pointer aata but aj[top] mtlb
        /// u is given there, all the things will work for j then;
        
        for(auto i: adj[top]){
            int u = top;
            int v = i.first;
            int w = i.second;
            if(visit[i.first] == false){
                topo(adj, s,visit, i.first);
            }
                
        }
        s.push(src);
    }
    
    void getShortest(int src, int d, stack<int> &s, vector<int> &distance){
        
    }
};
int main(){
    unordered_map<int, list<pair<int,int>>> adj;
    Graph g;
    g.prapre_list(0,1,5,adj);
    g.prapre_list(0,2,3,adj);
    g.prapre_list(1,2,2,adj);
    g.prapre_list(1,3,6,adj);
    g.prapre_list(2,3,7,adj);
    g.prapre_list(2,4,4,adj);
    g.prapre_list(2,5,2,adj);
    g.prapre_list(3,4,-1,adj);
    g.prapre_list(4,5,-2,adj);
    int n = 6;

    for(auto i:adj){
        cout<<i.first<<"-->";
        for(auto j:i.second){
            cout<<"( "<<j.first<<","<<j.second<<" ),";
        }
        cout<<endl;
    }
    
    /// Creating topo
    stack<int> s;
    unordered_map<int, bool> visit;
    
    for(int i=0; i<n; i++){
        if(!visit[i]){
            g.topo(adj, s, visit, i);
        }
    }
    
    // printing topo
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    
    /// finding shortest path
    int src = 1;
    int dst = 5;
    
    vector<int> distance(6);
    for(int i=0;i<n;i++){
        distance[i] = INT_MAX;
    }
    
    distance[src] = 0;
    
    
    
    
    





    
}