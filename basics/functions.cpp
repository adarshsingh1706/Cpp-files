// #include <iostream>
// using namespace std;

// int factorial(int a){

//     int fact=1;

//     for(int i=1; i<=a;i++){
//         fact=fact*i;

//     }
//     return fact;
// }

// int nCr(int n, int r){
//     int numerator = factorial(n);

//     int denominator = factorial(r)*factorial(n-r);

//     int ans = numerator/denominator;

//     return ans;


// }

// int main(){
//    cout<< nCr(8,2) << endl;

// }

// #include <iostream>
// using namespace std;
//  int main(){

//     int a=0;
//     int b=1;
    
//     int n;
//     cin>>n;
//     cout<< a << b << endl;
//     for(int i=0;i<=n;i++){
//         int nextnumber=a+b;
//         cout<< nextnumber<< endl;
//         a=b;
//         b=nextnumber;
//     }
//  }


// #include <iostream>
// using namespace std;
// int main(){
//     int number[100]={0};
//    cout<< number[50]<<endl;
//    cout<< number[65]<<endl;
//    cout<< number[0]<<endl;
// }


#include <iostream>
using namespace std;
int main(){
    int number[105];
    fill_n(number,100,3);

    cout<< number[50]<<endl;
    cout<< number[65]<<endl;
    cout<< number[0]<<endl;
    cout<< number[103]<<endl;
}