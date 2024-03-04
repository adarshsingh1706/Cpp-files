#include <iostream>
#include <stack>
using namespace std;

// implementing stack through arrays

class Stack
{
  // properties
public:
  int *arr;
  int top;
  int size;

  // behaviour

  Stack(int size)
  {
    this->size = size;
    arr = new int[size];
    top = -1;
  }

  void push(int element)
  {
    if (size - top > 1)
    { // checking if space is there or not
      top++;
      arr[top] = element;
    }
    else
    {
      cout << "Stack Overflow" << endl;
    }
  };

  void pop()
  {
    if (top >= 0)
    {
      top--;
    }
    else
    {
      cout << "Stack underflow" << endl;
    }
  };

  int peek()
  {
    if (top >= 0)
    {
      return arr[top];
    }
    else
    {
      cout << "Stack is empty" << endl;
      return -1;
    }
  };

  bool isEmpty()
  {
    if (top == -1)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
};

int main()
{

  Stack st(5);
  st.push(22);
  st.push(34);
  st.push(89);

  // cout << st.peek() << endl;

  // st.pop();

  // cout << st.peek() << endl;

  /*
    stack<int> s;

    // pushing
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout << "size of stack before popping " << s.size() << endl;

    // popping
    s.pop();

    // isempty?

    if (s.empty())
    {
      cout << "Stack is empty" << endl;
    }
    else
    {
      cout << "Stack is not empty" << endl;
    }

    // checking size

    cout << "size of stack after popping " << s.size() << endl;

    // printing

    cout << "the top of stack looks like " << s.top() << endl;

    */

  // peek
  cout << st.peek() << endl;

  return 0;
}