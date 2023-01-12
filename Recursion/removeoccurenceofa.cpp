// C++ program for the above approach
#include <iostream>
using namespace std;
 
// Function to remove all occurrences
// of a character in the string
string removeChar(string str,char ch)
{
	// Base Case
	if (str.length() == 0) {
		return "";
	}
 
	// Check the first character
	// of the given string
	if (str[0] == ch) {
 
		// Pass the rest of the string
		// to recursion Function call
		return removeChar(str.substr(1), ch);
	}
 
	// Add the first character of str
	// and string from recursion
	return str[0] + removeChar(str.substr(1), ch);
}
 
// Driver Code
int main()
{
	// Given String
	string s = "abcax";
 
	// Given character
	char ch = 'a';
 
	// Function Call
	s = removeChar(s, ch);
	cout << s;
	return 0;
}