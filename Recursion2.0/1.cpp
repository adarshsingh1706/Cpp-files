// #include <iostream>
// using namespace std;

// int cnt =0;
// void f(){
//   if(cnt==3) return;

//   cout<<cnt<<endl;
//   cnt++;
//   f();
// }

// int main(){
//   f();
// }

// print name 5 times using recursion

// #include <iostream>
// using namespace std;

// void printName(int i,int n){
//   if(i>n) return;
//   cout<<"Adarsh"<<endl;
//   i++;
//   printName(i,n);
// }

// int main(){
//   int n;
//   cout<<"enter n"<<endl;
//   cin>>n;
//   printName(1,n);
// }

// print 1->N
// #include <iostream>
// using namespace std;

// void printN(int i, int n)
// {
//   // base case
//   if (i > n)
//     return;
//   cout << i<<" " ;
//   i++;
//   printN(i, n);
// }

// int main()
// {
//   int n;
//   cout << "Enter N" << endl;
//   cin >> n;
//   printN(1, n);
// }

// print N->1
//  #include <iostream>
//  using namespace std;

// void printN(int n)
// {
//   // base case
//   if (n<1)
//     return;
//   cout << n<<" " ;
//   n--;
//   printN(n);
// }

// int main()
// {
//   int n;
//   cout << "Enter N" << endl;
//   cin >> n;
//   printN(n);
// }

// print 1->N via backtracking
// #include <iostream>
// using namespace std;

// void printN(int i, int n)
// {
//   // base case
//   if (i < 1)
//     return;

//   // first recursive fn call then printing,so basically tracking bkwds
//   printN(i - 1, n);
//   cout << i << endl;
// }

// int main()
// {
//   int n;
//   cout << "Enter N";
//   cin >> n;
//   printN(n, n);
// }

// N->1 by backtracking

// #include <iostream>
// using namespace std;

// void printN(int i, int n)
// {
//   //base case
//   if(i>n) return;
//   printN(i+1,n);
//   cout<<i <<" ";
// }

// int main()
// {
//  int n;
//  cout<<"Enter n"<<endl;
//  cin>>n;
//  printN(1,n);
// }

// summation of first n numbers
//  #include <iostream>
//  using namespace std;

// void sumN(int i, int sum)
// {
//   //base case
//   if(i<1){
//     cout<<sum;
//     return;
//   }
//   sumN(--i,sum+i);

// }

// int main()
// {
//  int n;
//  cout<<"Enter N"<<endl;
//  cin>> n;
//  sumN(n,0);
// }

// functional way

// #include <iostream>
// using namespace std;

// int sumN(int n)
// {
//   if(n==0) return 0;
//   return n+sumN(n-1);
// }

// int main()
// {
//  int n;
//  cout<<"Enter N"<<endl;
//  cin>>n;
//  cout<<sumN(n);
// }

// factorial

// #include <iostream>
// using namespace std;

// int fact(int n)
// {
//   if(n==0) return 1;
//   return n*fact(n-1);
// }

// int main()
// {
//  int n;
//  cout<<"Enter n"<<endl;
//  cin>>n;
//  cout<<fact(n)<<endl;

// }

// reverse an array (using 1-pointer) => (i,n-i-1)

// #include <iostream>
// using namespace std;

// void reverse(int i, int nums[],int n)
// {
//   if(i>=n/2) return;
//   swap(nums[i],nums[n-i-1]);
//   reverse(++i,nums,n);
// }

// int main()
// {
//  int n;
//  cout<<"Enter the size of the array"<<endl;
//  cin>>n;
//  int nums[n];
//  for(int i=0;i<n;i++){
//  cin>>nums[i];
//  }
//  reverse(0,nums,n);
//  for(int i=0;i<n;i++) cout<<nums[i]<<" ";
// }

// reverse an array using 2 pointer approach

// #include <iostream>
// using namespace std;

// void reverseArray(int l,int arr[], int r)
// {
//   // base case
//   if (l >= r)
//     return;
//   swap(arr[l], arr[r]);
//   reverseArray(++l, arr,--r);
// }

// int main()
// {
//   int n;
//   cout<<"Enter the size of the array"<<endl;
//   cin>>n;
//   int arr[n];
//   for (int i = 0; i < n; i++)
//   {
//     cout<<"Enter the ith index value"<< endl;
//     cin >> arr[i];
//   }
//   reverseArray(0,arr,n-1);
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
// }

// check if the given string is palindrome
// #include <iostream>
// using namespace std;

// void checkPalindrome(string text, int n, int i)
// {
//   // base case
//   if (i >= n - i - 1)
//   {
//     cout << "The given string is a palindrome" << endl;
//     return;
//   }

//   // check

//   if (text[i] == text[n - i - 1])
//   {
//     checkPalindrome(text, n, ++i);
//   }

//   else
//   {
//     cout << "Not a palindrome" << endl;
//     return;
//   }
// }

// int main()
// {
//   string text;
//   int n;
//   cout << "Enter the string length" << endl;
//   cin >> n;
//   cout<<"Enter String"<<endl;
//   cin >> text;

//   // checking if entered length of string is equal to n
//   if (text.length() != n)
//   {
//     cout << "Entered length does not match the actual string length" << endl;
//     return 1;
//   }

//   checkPalindrome(text, n, 0);
// }



//fibonacci => multiple recursion calls

// #include <iostream>
// using namespace std;

// int fibonacci(int n){
//   //base case
//   if(n<=1) return n;

//   //Now,since for fibbbonaci(n)= f(n-1)+f(n-2);
//   int last = fibonacci(n-1);
//   int secLast = fibonacci(n-2);

//   return last+secLast;

// }

// int main(){
//   int n;
//   cout<<"Enter the nth number who's fibbonaci is required "<< endl;
//   cin>>n;
//   int result = fibonacci(n);
//   cout << "The Fibonacci number at position " << n << " is " << result << endl;
// }

