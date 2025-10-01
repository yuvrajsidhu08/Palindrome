// Yuvraj Sidhu
// 9/26/25
// This program allows the user to see if a string is a palindrome or not

#include <iostream>
#include <cstring>

using namespace std;

int main() {

  // Makes the maximum  80 characters
  const int max = 81;

  // Stores original input
  char input[max], sorted[max];

  // Makes the user enter a string
  cout << "Enter a string: ";
  cin.getline(input, max);

  // Index for getting rid of punctuation
  int j = 0;

  // Goes through each character
  for (int i = 0; input[i] != '\0'; i++) {
    char c = input[i];

    // Converts uppercase letters to lowercase
    if (c >= 'A' && c <= 'Z')
      c = c +  ('a' - 'A');

    // Keeps only lowercase letters and digits
    if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) {
      sorted[j++] = c;
    }
	}
  sorted[j] = '\0';

  // Checks if the string is a palindrome
  bool palindrome = true;
  for (int i = 0; i < j / 2; i++) {

    // Compares the characters
    if (sorted[i] != sorted[j - 1 -i]) {
	palindrome = false;
	break;
      }
    }

  // Prints if its a palindrome or not
  cout << (palindrome ? "Its a palindrome" : "Not a palindrome") << endl;
  return 0;
}
