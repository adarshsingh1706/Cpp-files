//Simple Sieve


// import java.util.*;
// public class Main{
//     public static void main(String args[]){
//         Scanner sc = new Scanner(System.in);
//         System.out.println("Enter a number ");
//         int num = sc.nextInt();
//         boolean [] bool = new boolean[num+1];
//         // all elements as true
//         for(int i=0;i<=num;i++){
//             bool[i]=true;
//         }
//         for(int i=2;i<=Math.sqrt(num);i++){
//             if(bool[i]==true){
//                 for(int j=i*i;j<=num;j=j+i){
//                     bool[j]=false; // marking all multiples false
//                 }
//             }
//         }
//         System.out.println("List of prime nos till " + num + " are : ");
//         for(int i=2;i<=num;i++){
//             if(bool[i]==true){
//                 System.out.print(i+ " ");
//             }
//         }
        
//     }
// }



//segmented sieve


// import java.util.*;
// public class Main{
    
//     static void SegSieve(int l, int h){
//         boolean [] prime = new boolean[h+1];
//         if(l==0){
//             prime[0]=true;
//             prime[1] = true;
//         }
//         if(l==1) prime[1] = true;
//         for(int i =2;i*i<=h;i++){
//             int smallestMultiple = (l/i)*i;
//             if(smallestMultiple<l) smallestMultiple=smallestMultiple+i;
//             for(int j=smallestMultiple;j<=h;j=j+i){
//                 prime[j]=true;
//             }
//         }
//         //print prime
//         for(int i=l;i<=h;i++){
//             if(prime[i]==false) System.out.print(i + " ");
//         }
//     }
        
//         public static void main(String args[]){
//         SegSieve(0,2);
//         }
//     }



//eulers phi algo

// import java.util.*;
// public class Main{
//     static int phi(int n){
//         int result = n;
//         for(int i=2;i*i<=n;i++){
//             if(n%i == 0){
//                 while(n%i==0){
//                     n=n/i;
//                 }
//                 result = result - result/i;
//             }
//         } 
        
//         if(n>1) result = result - result/n;
//         return result;
//     }
//     public static void main(String args[]){
//         int n= 8;
//         System.out.print(phi(n));
//     }
// }


//remainder theorem

/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/

// import java.util.*;
// public class Main{
//     static int findX(int num[],int rem[],int k){
//         int x =1;
//         while(true){
//             int j;
//             for( j=0;j<k;j++){
//                 if(x%num[j]!=rem[j]){
//                     break;
//                 }
//             }
            
//             if(j==k) {
//                 return x;
//             }
//             x++;
//         }
//     }
    
//     public static void main(String args[]){
//         Scanner sc = new Scanner(System.in);
//         System.out.println("Enter the size of relation");
//         int size = sc.nextInt();
//         int [] num = new int[size];
//         int [] rem = new int[size];
//         System.out.println("Enter the values of num");
//         for(int i=0;i<size;i++){
//             num[i] = sc.nextInt();
//         }
        
//          System.out.println("Enter the values of rem");
//         for(int i=0;i<size;i++){
//             rem[i] = sc.nextInt();
//         }
        
//         System.out.print("Value of x is " + findX(num,rem,size));
//     }
// }





// import java.util.*;

// public class Main {
//     public static void main(String args[]) {
//         Scanner sc = new Scanner(System.in);
//         System.out.print("Enter number: ");
//         String n = sc.nextLine();
//         if (isStrobogrammaticNumber(n)) {
//             System.out.print(n + " is a Strobogrammatic Number");
//         } else {
//             System.out.print("Nope");
//         }
//     }

//     static boolean isStrobogrammaticNumber(String n) {
//         Map<Character, Character> map = new HashMap<>();
//         map.put('0', '0');
//         map.put('1', '1');
//         map.put('6', '9');
//         map.put('8', '8');
//         map.put('9', '6');
        
//         int last = n.length() - 1;
//         for (int i = 0, j = last; i <= j; i++, j--) {
//             if (n.charAt(i) != map.getOrDefault(n.charAt(j), '\0')) {
//                 return false;
//             }
//         }
//         return true;
//     }
// }