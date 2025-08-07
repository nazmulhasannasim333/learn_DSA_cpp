#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    map<string, int> wordCount;
    while (ss >> word)
    {                      // O(NlogN)
        wordCount[word]++; // O(logN)
    }
    for (auto it : wordCount)
    {                                                 // O(NlogN)
        cout << it.first << " " << it.second << endl; // O(logN)
    }
    return 0;
}