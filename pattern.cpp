// #include<iostream>
// using namespace std;
// int main(){
//   int n; cin>>n;
  
//     for(int i=1;i<=n;i++){
//       for(int j=1;j<=n-i;j++){
//        cout<<" "; 
//     }
//     for(int k=1;k<=i;k++){
//        cout<<"*";
//     }
//     cout<<endl;
//   }
//--------------------------------------------

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;
    
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
    
//     return 0;
// }

//-----------------------------------

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;
    
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <=n-i; j++) {
//             cout << " ";
//         }
//         for(int k=1;k<=i;k++){
//           cout<<"* ";
//         }
//         cout << endl;
//     }
    
//     for (int i = n; i>=1 ; i--) {
//         for (int j = 1; j <=n-i; j++) {
//             cout << " ";
//         }
//         for(int k=1;k<=i;k++){
//           cout<<"* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


#include <iostream>
using namespace std;

void spiralTraversal(int arr[][100],int n){
  int top=0,bottom=n-1,left=0,right=n-1;

  while(top<=bottom && left<=right){
    //l->r
    for(int i=left;i<=right;i++){
      cout<<arr[top][i]<<" ";
    }
    top++;

    //t->b
    for(int i=top;i<=bottom;i++){
      cout<<arr[i][right]<<" ";
    }
    right--;

     //r->l
     if(top<=bottom){
      for(int i=right;i>=left;i--){
      cout<<arr[bottom][i]<<" ";
    }
    bottom--;
     }
    

     //b->t
    if(left<=right){
      for(int i=bottom;i>=top;i--){
      cout<<arr[i][left]<<" ";
    }
    left++;
     }

  }


}
int main(){
  int n;
    cout << "Enter the size of the square matrix (n): ";
    cin >> n;
    int arr[100][100];
    //fill
      int count = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = count++;
        }
    }

    //print5
      cout << "The " << n << "x" << n << " matrix with elements 1 to " << n*n << " is:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

  spiralTraversal(arr,n);

}
    


    


    
