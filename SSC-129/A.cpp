#include <iostream>
#include <string>

using namespace std;

void identifyDifferences(const string& str1, const string& str2)
{
    // Output the two input strings
    cout << str1 << endl;
    cout << str2 << endl;

    // Identify differences using periods (.) for identical characters and asterisks (*) for differing characters
    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] == str2[i])
        {
            cout << ".";
        }
        else
        {
            cout << "*";
        }
    }

    // Output a blank line after each test case
    cout << endl << endl;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string str1, str2;
        cin >> str1 >> str2;

        // Call the function to identify differences
        identifyDifferences(str1, str2);
    }

    return 0;
}

