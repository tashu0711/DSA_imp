#include<bits/stdc++.h>
#include<map>
using namespace std;
class Graph{
    public:
    void prapre_list(int u, int v, int w, unordered_map<int, list<pair<int,int>>> &adj){
        pair<int, int> p = make_pair(v,w);
        adj[u].push_back(p);
    }

   
};
main(){
    unordered_map<int, list<pair<int,int>>> adj;
    Graph g;
    g.prapre_list(1,2,3,adj);
    g.prapre_list(2,1,5,adj);
    g.prapre_list(1,2,8,adj);
    g.prapre_list(7,1,4,adj);
    g.prapre_list(4,2,-3,adj);

    for(auto i:adj){
        cout<<i.first<<"-->";
        for(auto j:i.second){
            cout<<"( "<<j.first<<","<<j.second<<" ),";
        }
        cout<<endl;
    }





    
}