// class Solution 
// {
//     public:
//     //Function to find out minimum steps Knight needs to reach target position.
    
//     vector<vector<int,int>> coordinates={{-1,-2},{-1,2},{1,-2},{1,2},{-2,-1},{-2,1},{2,-1},{2,1}};
    
//         int helperfn(int src_x,int src_y, int target_x,int target_y){
//             vector<vector<int,int>> visited(n,vector<int>(n));
//             queue<pair<int,int>>q;
//             q.push({src_x,src_y});
//             visited[src_x][src_y]=1;
//             int steps=1;
            
//             while(!q.empty()){
//                 int q_size=q.size();
//                 pair<int,int>>p=q.front();
//                 q.pop();
//                 int x = p.first();
//                 int y =p.second();
//                 if(x==target_x && y==target_y) return steps;
//                 while(q.size()>0){
//                     for(int i=0;i<coordinates.size();i++){
//                         int new_x = x+coordinates[i][0];
//                         int new_y = y+coordinates[i][1];
//                         if(new_x>=0 && new_y>=0&& new_x<n&& new_y<n && visited[new_x][new_y]==0){
//                             visited[new_x][new_y]==1;
//                             q.push({new_x,new_y});
//                         }
//                     }
//                     q_size--;
                    
//                 }
//                 steps++;
//             }
//             return -1;
//         };
//         public:
    
    
// 	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
// 	{
// 	    int src_x = N-KnightPos[1];//see row and col conversion by drawing
// 	    int src_y = KnightPos[0]-1;
// 	    int target_x = N-TargetPos[1];
// 	    int target_y = TargetPos[0]-1;
// 	    return helperfn(src_x,src_y,Target_x,Target_y);
// 	}
// };