// #include<iostream>
// #include<vector>
// #include<unordered_map>
// #include<queue>
// #include<set>
// using namespace std;

// void bfs(int source,unordered_map<int,vector<int>>mp){
//   queue<int>q;
//   unordered_map<int, bool> visited; 
//   q.push(source);
//   visited[source]=true;

//   while(!q.empty()){
//     int f = q.front();
//     q.pop();
//     cout<<f<<" ";
//     for(int i:mp[f]){
//       //check if notvisited
//       if(!visited[i]){
//         visited[i]=true;
//         q.push(i);
//       } 
//     }

//   }

// }


// int main(){
//   vector<vector<int>>edgeList={{0,1},{1,2},{1,4},{2,3}};
//   unordered_map<int,vector<int>>mp;
//   set<int> unique_node; //to keep count of nodes if needed


//   for(int i=0;i<edgeList.size();i++){
//     int a = edgeList[i][0];
//     int b = edgeList[i][1];
//     //unidirected
//     mp[a].push_back(b);
//     mp[b].push_back(a);
//     //inserting unique nodes in a set 
//     unique_node.insert(a);
//     unique_node.insert(b);
//   }
//     int n = unique_node.size();
//     int source = 1;  

//     cout << "BFS Traversal starting from node " << source << ": ";
//     bfs(source, mp);
//     return 0;
// }


//dfs-----------------------

#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>
#include<set>
using namespace std;

void dfs(int node,unordered_map<int,vector<int>>mp,int n, unordered_map<int, bool> &visited){
  
  cout<<node<<" "; 
  visited[node]=true;
  for(int x:mp[node]){
    if(!visited[x]){
      dfs(x,mp,n,visited);
    }
  }
 

}


int main(){
  vector<vector<int>>edgeList={{0,1},{1,2},{2,3},{2,5},{0,4}};
  unordered_map<int,vector<int>>mp;
  set<int> unique_node; //to keep count of nodes if needed


  for(int i=0;i<edgeList.size();i++){
    int a = edgeList[i][0];
    int b = edgeList[i][1];
    //unidirected
    mp[a].push_back(b);
    mp[b].push_back(a);
    //inserting unique nodes in a set 
    unique_node.insert(a);
    unique_node.insert(b);
  }
    int n = unique_node.size();
    int node = 5;  

    unordered_map<int, bool> visited; 
    cout << "DFS Traversal starting from node " << node << ": ";
    dfs(node, mp,n,visited);
    return 0;
}