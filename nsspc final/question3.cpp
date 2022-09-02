#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <map>
#include <iomanip>
using namespace std;

array<int, 2> longestContinuousSTR(string DNA, string STR)
{
    int occurence = DNA.find(STR, 0);
    int max_count = 0;
    int count = 0;
    int STR_len = STR.length();

    while (occurence != -1)
    {
        int next_occurence = DNA.find(STR, occurence + 1);
        if (next_occurence == occurence + STR_len)
        {
            count++;
        }
        else
        {
            max_count = max(max_count, count);
            count = 0;
        }
        if (next_occurence == -1)
            break;
        occurence = next_occurence;
    }

    return {occurence - max_count * STR_len, (max_count + 1) * STR_len};
}

void main()
{
    string STR, crimeScene;
    int suspect_count = 4;
    string suspect[suspect_count];
    ;

    cout << "Please enter STR: ";
    cin >> STR;
    cout << "Please enter DNA found in crime scene: ";
    cin >> crimeScene;
    for (int i = 0; i < suspect_count; i++)
    {
        cout << "Please enter DNA of suspect " << i << " : ";
        cin >> suspect[i];
    }

    array<int, 2> longestSTRInCrimeScene = longestContinuousSTR(crimeScene, STR);
    string longestSTR = crimeScene.substr(longestSTRInCrimeScene[0], longestSTRInCrimeScene[1]);

    for (int i = 0; i < suspect_count; i++)
    {
        if (suspect[i].substr(longestSTRInCrimeScene[0], longestSTRInCrimeScene[1]) == longestSTR)
        {
            cout << i + 1 << endl
                 << longestSTRInCrimeScene[1] / STR.length() << endl;
            return;
        }
    }
    cout << 0 << endl
         << 0 << endl;
}