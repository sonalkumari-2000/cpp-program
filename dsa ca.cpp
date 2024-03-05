#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int MAX = 100;
    char charArray[MAX];
    string inputString;

    
    cout << "Enter a character array: ";
    cin.getline(charArray, MAX);

    
    cout << "Enter a string to find: ";
    getline(cin, inputString);

    
    int charArrayLength = strlen(charArray);
    int inputStringLength = inputString.length();

    int frequency = 0;
    for (int i = 0; i <= charArrayLength - inputStringLength; ++i) {
        
        if (strncmp(charArray + i, inputString.c_str(), inputStringLength) == 0) {
            ++frequency;
        }
    }


    cout << "Frequency of \"" << inputString << "\" in the character array: " << frequency << endl;

    return 0;
}
