#include <iostream>
#include <string>
#include <iostream>
#include <vector>
#include <set>
#include <cctype>
#include <sstream>
using namespace std;

char pName;
string word;

void countLine (string)
{
    int numOfLines = 0;
    while (getline(cin, word))
	{
		numOfLines++; 			// COUNTS NUMBER OF LINES
	}
    return;
}

int countChar (string charactrer)
{
    int char_num = length(character);
    return char_num;
}

int main()
{
    int charAmount = 0;
    cout << "Enter your words:  \n";
    countLine(word);
    cout << "Your words:  " << word << endl;
    cout << "Number of Characters:  " << countChar(word) << endl;
    return 0;
}