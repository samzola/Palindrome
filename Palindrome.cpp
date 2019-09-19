#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

void removePunc (char *str) { //method to remove punctuation from the inputted string.
  int counter = 0;
  for (int i = 0; i < str[i]; i++) { //go through all characters that were inputted
    if (!(str[i] < 97)) { //test if they are between a and z
      if (!(str[i] > 122)) {
        str[counter++] = str[i]; //if not, remove the character
      }
    }
  }
  str[counter] = '\0'; //add null character to end
}

void reverseChar(char* str) { //method that reverses the characters in a char array (stackoverflow.com)
  for (int i = 0; i < strlen(str)/2; i++) { //go through all characters in the char array
    char temp = str[i]; //creates a temp variable that is equal to the character a i
    str[i] = str[strlen(str)-i-1]; //sets the first character equal to the last character
    str[strlen(str)-i-1] = temp; //sets last character to temp, and runs through method again
  }
}

int main() {
  //tell user about program and what to do
  cout << "Please enter a word/sentence that is under 80 characters long." << endl;
  cout << "This program will tell you if your input is a palindrome." << endl;
  char str[80];
  char str2[80];
  cin.get(str, 80); //takes in input that is less than 80 chars
  cin.get();
  for (int i = 0; i < str[i]; i++) { //run through input and sets uppercase to lowercase
    if (str[i] >= 65 && str[i] <= 92) { //uses ascii values and finds uppercase
      str[i] = str[i] + 32; //sets to lowercase
    }
  }
  removePunc(str); //calls the remove punctation method from above
  int count = 0;
  for (int i = 0; str[i] != '\0'; i++) { //copies str to str2
    str2[count] = str[i];
    count++;
  }
  str2[count] = '\0'; //adds null char to str2
  reverseChar(str2); //calls reverse character method from above for str2
  if (strcmp (str, str2) == 0) { //compare str to str2, and if they are the same...
    cout << endl;
    cout << "Palindrome." << endl; //...tell the user that it is a palindrome
  }
  else {
    cout << endl;
    cout << "Not a Palindrome." << endl; //if str and str2 aren't the same, tell the user not palindrome
  }
  return 0;
}
