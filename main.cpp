#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    // Create input file stream and handle exception of unreadability
    ifstream input("charstat.in");
    if (!input)
    {
        cout << "Error reading file";
        return 1;
    }

    // Read letters to count and compare against an array including vowels
    int vowels[5] = {0};
    int cnt = 0;
    char letter;
    while (input >> letter)
    {
        if ((letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z'))
        {
            if (letter == 'A' || letter == 'a') vowels[0]++;
            else if (letter == 'E' || letter == 'e') vowels[1]++;
            else if (letter == 'I' || letter == 'i') vowels[2]++;
            else if (letter == 'O' || letter == 'o') vowels[3]++;
            else if (letter == 'U' || letter == 'u') vowels[4]++;
            cnt++;
        }
    }

    // Display results
    cout << fixed << setprecision(4);
    cout << "Total number of characters in the file charstat.in (excluding non-letters) " << cnt << endl;
    cout << "Number of times vowel \"a\" occurred is = " << vowels[0] << " and percentage wrt all characters is " << double(vowels[0]) / cnt << endl;
    cout << "Number of times vowel \"e\" occurred is = " << vowels[1] << " and percentage wrt all characters is " << double(vowels[1]) / cnt << endl;
    cout << "Number of times vowel \"i\" occurred is = " << vowels[2] << " and percentage wrt all characters is " << double(vowels[2]) / cnt << endl;
    cout << "Number of times vowel \"o\" occurred is = " << vowels[3] << " and percentage wrt all characters is " << double(vowels[3]) / cnt << endl;
    cout << "Number of times vowel \"u\" occurred is = " << vowels[4] << " and percentage wrt all characters is " << double(vowels[4]) / cnt << endl;

    return 0;
}
