#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

void removePunc (char *str) {
  int counter = 0;
  for (int i = 0; i < str[i]; i++) {
    if (!(str[i] < 97)) {
      if (!(str[i] > 122)) {
        str[counter++] = str[i];
      }
    }
  }
  str[counter] = '\0';
}

void reverseChar(char* str) {
  for (int i = 0; i < strlen(str)/2; i++) {
    char temp = str[i];
    str[i] = str[strlen(str)-i-1];
    str[strlen(str)-i-1] = temp;
  }
}

int main() {
  char str[80];
  char str2[80];
  cin.get(str, 80);
  cin.get();
  for (int i = 0; i < str[i]; i++) {
    if (str[i] >= 65 && str[i] <= 92) {
      str[i] = str[i] + 32;
    }
  }
  removePunc(str);
  int count = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    str2[count] = str[i];
    count++;
  }
  str2[count] = '\0';
  reverseChar(str2);
  if (strcmp (str, str2) == 0) {
    cout << endl;
    cout << "Palindrome." << endl;
  }
  else {
    cout << endl;
    cout << "Not a Palindrome." << endl;
  }
  return 0;
}
