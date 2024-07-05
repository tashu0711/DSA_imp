#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class graph{
  public:
    unordered_map<int, list<int>>adj;
    void addedge(int u, int v, bool direction){
        adj[u].push_back(v);
        if(direction == 0){
          adj[v].push_back(u);
        }
    }
    
    void printadj(){
      for(auto i:adj){
        cout<<i.first<<"---->";
        for(auto j:i.second){
          cout<<j<<",";
        }
        cout<<endl;
      }
    }
};

int main()
{
  int n,m,a,b;
  bool direction;
  cout<<"enter n and m";
  cin>>n>>m;
  graph g;
  cout<<"connections";
  for(int i=0;i<n;i++){
    cin>>a>>b;
    g.addedge(a,b,direction);
  } 
  
  g.printadj();
  
}
