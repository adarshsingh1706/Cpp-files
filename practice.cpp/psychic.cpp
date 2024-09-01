//problem statement
// Raman was playing a game,  he starts with x coins. Now in every step, he wins and loses and he has to get the money or pay the money as needed. He came in contact with a psychic who can see the future and the Psychic predicted the outcomes after each step. Now Raman wants to start the game with the minimum wage where he doesn’t run out of money.  Help Raman to find what money he should start with. The only rule to keep playing is not going in a credit situation.

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//   int steps; int sum,result=0;
//   cout<<"Enter no of elements"<<endl;
//   cin>>steps;
//   vector<int> coins(steps);

//   for(int i=0;i<steps;i++){
//     cout<<"enter " << i << "th element"<<endl;
//     cin>>coins[i];
//     sum+=coins[i];
//     if(sum<result) result = sum;
//   }
  
//  cout<<abs(result)<<endl;
//   return 0;
// }



//Problem statement: Rocky is a software engineer and he is creating his own operating system called “myFirst os”. myFirst os is a GUI (Graphical user interface) based operating system where everything is stored in files and folders. He is facing issues on  creating unique folder names for the operating system . Help rocky to create the unique folder name for it’s os.If folder name already exists in the system and integer number is added at the name to make it unique. The integer added starts with 1 and is incremented by 1 for each new request of an existing folder name. Given a list of folder names , process all requests and return an array of corresponding folder names.



#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

int main(){
  int size;
  cout<<"enter folder size"<<endl;
  cin>>size;
  vector<string> folderName(size);
  
  std:: unordered_map<string,int> mp;
  for(int i=0;i<size;i++){
    cout<<"enter" << i <<"th folder name"<<endl;
    cin>>folderName[i];
  }
  
for(auto it:folderName){
  if(mp[it] ){
    cout<<it<<mp[it]<<endl;
  }
  else{
    cout<<it<<endl;
    mp[it]++;
  }
}

}


