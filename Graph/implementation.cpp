// #include<iostream>
// #include<vector>
// using namespace std;


// void print_graph(vector<vector<int>>adjacencyMatrix){
// for(int i=1;i<=4;i++){
//   cout<<"Node:"<<i<<" connected to "<<" ";
//   for(int j=1;j<=4;j++){
//     if(adjacencyMatrix[i][j]==1) cout<<j<<" "; 
//   }
//   cout<<endl;
//  }
// }
// int main(){
//   vector<vector<int>> edgeList = {{1,2},{2,3},{3,4},{4,2},{1,3}};
//   vector<vector<int>>adjacencyMatrix(5,vector<int>(5,0));
//   for(int i=0;i<edgeList.size();i++){
//     //unidirected
//     int a =edgeList[i][0];
//     int b =edgeList[i][1];
//     adjacencyMatrix[a][b]=1;
//     adjacencyMatrix[b][a]=1;
//   }
//   print_graph(adjacencyMatrix);
// }


///// map

#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;


void print_graph(unordered_map<int,vector<int>>graph){
for(auto x:graph){
  cout<<"Node:"<<x.first<<" connected to "<<" ";
  for(int node:x.second){
    cout<<node<<" "; 
  }
  cout<<endl;
 }
}
int main(){
  vector<vector<int>> edgeList = {{1,2},{2,3},{3,4},{4,2},{1,3}};
  unordered_map<int,vector<int>> graph;
  for(int i=0;i<edgeList.size();i++){
    //unidirected
    int a =edgeList[i][0];
    int b =edgeList[i][1];
    graph[a].push_back(b);
    graph[b].push_back(a);
  }
  print_graph(graph);
}