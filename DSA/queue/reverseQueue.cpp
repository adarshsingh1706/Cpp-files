#include<Queue>
using namespace std;

void reversequeue(std::queue<int> &q){
            //base case
            if(q.empty()){
                return;
            }
            
            int num = q.front();
            q.pop();
            reversequeue(q);
            q.push(num);
            
        }

//Function to reverse the queue.
class Solution
{
    public:
    queue<int> rev(queue<int> &q)
    {
      reversequeue(q);
      return q;
    }
    
};

//also solvable by using stack