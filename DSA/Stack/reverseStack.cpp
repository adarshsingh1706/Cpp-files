// void insertAtBottom(stack<int> &s, int element) {
//     if (s.empty()) {
//         s.push(element);
//     } else {
//         int num = s.top();
//         s.pop();
//         insertAtBottom(s, element);
//         s.push(num);
//     }
// }

// void reverseStack(stack<int> &stack) {
//     if (!stack.empty()) {
//         int num = stack.top();
//         stack.pop();
//         reverseStack(stack);
//         insertAtBottom(stack, num);
//     }
// }
