#include <iostream>
using namespace std;

int main()
{
    char str1[100];
    char str2[100];

    cout << "Enter first word: ";
    cin >> str1;

    cout << "Enter second word: ";
    cin >> str2;

    int len1 = 0;
    while (str1[len1] != '\0')
    {
        len1++;
    }

    int len2 = 0;
    while (str2[len2] != '\0')
    {
        len2++;
    }

    cout << "\nLength of first word: " << len1 << endl;
    cout << "Length of second word: " << len2 << endl;

    int start = 0;
    int end = len1 - 1;
    while (start < end)
    {
        char temp = str1[start];
        str1[start] = str1[end];
        str1[end] = temp;
        start++;
        end--;
    }
    cout << "Reversed first word: " << str1 << endl;

    start = 0;
    end = len1 - 1;
    while (start < end)
    {
        char temp = str1[start];
        str1[start] = str1[end];
        str1[end] = temp;
        start++;
        end--;
    }

    int i = 0;
    bool isEqual = true;

    while (str1[i] != '\0' || str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            isEqual = false;
            break;
        }
        i++;
    }

    if (isEqual)
    {
        cout << "The two words are equal." << endl;
    }
    else
    {
        cout << "The two words are not equal." << endl;
    }

    return 0;
}
