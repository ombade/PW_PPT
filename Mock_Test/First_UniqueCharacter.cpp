#include <iostream>
#include <unordered_map>

using namespace std;

int firstUniqChar(string s)
{
    unordered_map<char, int> freqCount;

    // Count the frequency of each character
    for (char c : s)
    {
        freqCount[c]++;
    }

    // Find the first character with frequency 1
    for (int i = 0; i < s.length(); i++)
    {
        if (freqCount[s[i]] == 1)
        {
            return i;
        }
    }

    return -1; // No unique character found
}

int main()
{
    // Test cases
    cout << firstUniqChar("leetcode") << endl;     // Output: 0
    cout << firstUniqChar("loveleetcode") << endl; // Output: 2
    cout << firstUniqChar("aabb") << endl;         // Output: -1

    return 0;
}
