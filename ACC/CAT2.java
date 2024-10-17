
//majority element---------------------------

// import java.util.*;

// public class Main {
    
//     public static int getMajorityElement(int []arr){
//          Map<Integer, Integer> mp = new HashMap<>();
//          for(int i : arr ){
//              mp.put(i,mp.getOrDefault(i,0)+1);
//          }
//          int halfLength = arr.length/2;
//          for(Map.Entry<Integer,Integer> entry:mp.entrySet()){
//              if(entry.getValue()>halfLength){
//                  return entry.getKey();
//              }
//          }
//          return -1;
//     }
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         int n = sc.nextInt();
//         int[] arr = new int[n];
//         for(int i=0;i<n;i++){
//             arr[i] = sc.nextInt();
//         }
//       System.out.println(getMajorityElement(arr));
       
//     }
// }

for(Map.Entry<Integer,Integer> entry:mp.entrySet()){

}


//Leaders in array ----------------------------------

// import java.util.*;

// public class Main {
    
//     public static ArrayList<Integer> leadersinArray(int []arr){
//         ArrayList<Integer> nums = new ArrayList<>();
//          int n = arr.length;
//          int leader = arr[n-1];
//          nums.add(leader);
//          for(int i=n-2;i>=0;i--){
//              if(arr[i]>leader){
//                  leader = arr[i];
//                  nums.add(leader);
//              }
//          }
//          return nums;
//     }
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         int n = sc.nextInt();
//         int[] arr = new int[n];
//         for(int i=0;i<n;i++){
//             arr[i] = sc.nextInt();
//         }
//      ArrayList<Integer> nums = leadersinArray(arr);
//      System.out.println(nums);
       
//     }
// }