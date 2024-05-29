// //max and min number

// #include <iostream>
// using namespace std;
// int main(){
//     int size=5;
//     int numbers[5];

//     cout<< "Enter the numbers"<< endl;

//     for(int i=0;i<size;i++){
//         cin>>numbers[i];
        
//     }

//      for(int i=0;i<size;i++){
//         cout<< numbers[i]<<" ";
//     }

//     int min=numbers[0];
//     int max=numbers[0];
    
//     // for loop for checking every element

//     for(int i=1;i<=size;i++){
//         if(min>numbers[i]){
//             min=numbers[i];
//         }
//         else if(max<numbers[i]){
//             max=numbers[i];
//         }
//     }
//     cout<< endl;
//     cout<< "max_value = " << max << endl;
//     cout<< "min_value = " << min << endl;


// }


// #include <iostream>
// using namespace std;
// #include <climits> //for INT_MIN and INT_MAX


// int getMax(int num[],int size){
//     int max=INT_MIN;
//     for(int i=0;i<size;i++){
//         if(num[i]>max){
//             max=num[i];
//         }
//     }
//     return max;
// }

// int getMin(int num[],int size){
//     int min=INT_MAX;
//     for(int i=0;i<size;i++){
//         if(num[i]<min){
//             min=num[i];
//         }
//     }
//     return min;
// }

// int main(){
//     int size;
//     cin>> size;
//     int num[100];

//     for(int i=0;i<size;i++){
//         cin>>num[i];
//     }

//     cout << "Max" << getMax(num,size) << endl;
//     cout << "Min" << getMin(num,size) << endl;
    
// }


//print sum of array

// #include <iostream>
// using namespace std;

// void sum(int n){
    
//    int* num = new int[n];
//     for(int i=0;i<n;i++){
//         cin>>num[i];
//     }
    

//     for(int i=0;i<n;i++){
//         cout<< num[i] << endl;
//     }
    
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=num[i];
//     }
//     cout << sum << endl;
// }
// int main(){
//     sum(5);
//     return 0;
// }


