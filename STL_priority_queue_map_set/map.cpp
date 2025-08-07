#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    mp["Nasim"] = 90;
    mp["Nazmul"] = 85;
    mp["Hasan"] = 90;
    mp["Rafiq"] = 95;
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
    if (mp["Nasim"])
        cout << "Found Nasim with marks: " << mp["Nasim"] << endl;
    else
        cout << "Nasim not found" << endl;
    return 0;
}