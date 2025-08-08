#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        getline(cin >> ws, s);
        stringstream ss(s);
        string word;
        map<string, int> wordCount;
        string mostFrequentWord;
        int maxCount = 0;
        while (ss >> word)
        {
            wordCount[word]++;
            if (wordCount[word] > maxCount)
            {
                maxCount = wordCount[word];
                mostFrequentWord = word;
            }
        }
        cout << mostFrequentWord << " " << maxCount << endl;
    }
    return 0;
}