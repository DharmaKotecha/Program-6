// A recursive algorithm to check whether a given number is palindrome
// Author: Dharma
// Date: 09/12/22

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//A recursive function that check a str[s..e] is a palindrome or not.
bool Pal(char str[],int s, int e)
{
	if (s == e)
	return true; // If there is only one character

	if (str[s] != str[e])
	return false; // If first and last characters do not match

	if (s < e + 1)
	return Pal(str, s + 1, e - 1); // If there are more than two characters, check if middle sub-string is a palindrome

	return true;
}

bool isPalindrome(char str[])
{
	int n = strlen(str);

	if (n == 0)
		return true; // An empty string is considered as palindrome

	return Pal(str, 0, n - 1);
}

int main()
{
	char str[] = "Is this word a palindrome?";

	if (isPalindrome(str))
	cout << "Yes";
	else
	cout << "No";

	return 0;
}
