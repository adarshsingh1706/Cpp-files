//problem statement
// Raman was playing a game,  he starts with x coins. Now in every step, he wins and loses and he has to get the money or pay the money as needed. He came in contact with a psychic who can see the future and the Psychic predicted the outcomes after each step. Now Raman wants to start the game with the minimum wage where he doesn’t run out of money.  Help Raman to find what money he should start with. The only rule to keep playing is not going in a credit situation.

#include <iostream>
#include <vector>
using namespace std;

int main(){
  int steps; int sum,result=0;
  cout<<"Enter no of elements"<<endl;
  cin>>steps;
  vector<int> coins(steps);

  for(int i=0;i<steps;i++){
    cout<<"enter " << i << "th element"<<endl;
    cin>>coins[i];
    sum+=coins[i];
    if(sum<result) result = sum;
  }
  
 cout<<abs(result)<<endl;
  return 0;
}