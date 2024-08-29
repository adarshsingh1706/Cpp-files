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