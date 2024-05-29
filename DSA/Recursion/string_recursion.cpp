// reversing a string

#include <iostream>
using namespace std;

void reverse(int i, int j, string &str) // passing by reference
{
  // base case
  if (i > j)
  {
    return;
  }

  // operation
  swap(str[i], str[j]);
  i++;
  j--;

  // recursive call
  reverse(i, j, str);
}

int main()
{

  string name = "Adarsh";
  int i = 0;
  int j = name.length() - 1;
  reverse(i, j, name);
  cout << name << endl;
}

// bool check palindrome

#include <iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j)
{
  // base case
  if (i > j)
  {
    return true;
  }

  // recursion sambhal kega
  if (str[i] != str[j])
  {
    return false;
  }

  else
  {
    return checkPalindrome(str, i + 1, j - 1);
  }
}

int main()
{
  string name = "abba";
  cout << endl;

  bool isPalindrome = checkPalindrome(name, 0, name.length() - 1);
  if (isPalindrome)
  {
    cout << "its a palindrome" << endl;
  }
  else
  {
    cout << "its not a palindrome" << endl;
  }
}
