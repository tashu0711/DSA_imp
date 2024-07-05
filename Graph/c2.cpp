#include<iostream>
#include<bits/stdc++.h>
using namespace std;
template<typename T>

class graph{
  public:
    unordered_map<T, list<T>>adj;
    void addedge(T u, T v, bool direction){
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
  graph<int> g;
  cout<<"connections";
  for(int i=0;i<n;i++){
    cin>>a>>b;
    g.addedge(a,b,direction);
  } 
  
  g.printadj();
  
}
