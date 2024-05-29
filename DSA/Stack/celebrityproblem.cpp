// solved with O(n^2 try to optimize



// class Solution 
// {
// public:
//     //Function to find if there is a celebrity in the party or not.
//     int celebrity(vector<vector<int> >& M, int n) 
//     {
//         for(int i = 0; i < n; i++)
//         {
//             bool knowsSomeone = false;
//             bool everyOneKnows = true;
            
//             for(int j = 0; j < n; j++)
//             {
               
//                     if(M[i][j] == 1)
//                     {
//                         knowsSomeone = true;
                        
//                     }
//                     else if(M[j][i]==0 && i!=j)
//                     {
//                         everyOneKnows = false;
//                         break;
//                     }
                
//             }
            
//             if(!knowsSomeone && everyOneKnows)
//             {
//                 return i;
//             }
//         }
        
//         return -1;
//     } 
// };
