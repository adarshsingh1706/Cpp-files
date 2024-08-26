// ASDF -> BREE
// AV->BU
// VA->WZ
// ZE-> AD
// OZ->PY



// A B C D E F G H  I J K L M N O P Q R S T U V W X Y Z


#include <iostream>
using namespace std;

void helperfn(char ch, bool front, string &c) {
    if (front) {
        if (ch == 'A') {
            c += 'B';
            return;
        } else if (ch == 'Z') {
            c += 'A';
            return;
        } else {
            ch = 65 + (ch - 65) + 1; 
            c += ch;
        }
    } else {
        if (ch == 'A') {
            c += 'Z';
            return;
        } else if (ch == 'Z') {
            c += 'Y';
            return;
        } else {
            ch = 65 + (ch - 65) - 1; 
            c += ch;
        }
    }
}

int main(){
  string s;
  cout<<"Enter String"<<endl;
  cin>> s;
  bool front = true;
  string c;
  for(int i=0;i<s.length();i++){
    helperfn(s[i],front,c);
    front = !front;
  }
  
  cout<< c<<endl;
  return 0;


}