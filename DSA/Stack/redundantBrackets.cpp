// #include <bits/stdc++.h>
// bool findRedundantBrackets(string &s) {
//   stack<char> st;
//   for (int i = 0; i < s.size(); i++) {

//     char ch = s[i];

//     if (ch == '(' || ch=='+' || ch== '-' ||ch == '*' || ch=='/') {
//       st.push(ch);
//     }
//     // now we will check ')' if this then surely pehle'('
//     // surely ye rha hoga, ab cjeck krenge if in dono ke beech koi operator
//     // hai tho redundant nhi hai
//     else {
//       if (ch == ')') {

//         bool flag = true;
//         while (st.top() != '(') {
//           char atTop = st.top();
//           if (atTop == '+' ||atTop== '-' ||atTop== '*' ||atTop =='/') {
//             flag = false;
//           }
//           st.pop();
//         }
//         st.pop();// '(' for this popping
//         if (flag == true) {
//           return true;
          
//         }
//       }
//     }
//   }
//   return false;
// }
