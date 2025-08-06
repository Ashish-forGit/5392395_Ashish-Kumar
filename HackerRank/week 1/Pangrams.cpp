#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s) {
    vector<bool> seen(26, false); 

    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            char lowerChar = tolower(s[i]); 
            seen[lowerChar - 'a'] = true;
        }
    }

    
    for (int i = 0; i < 26; i++) {
        if (!seen[i])
            return "not pangram";
    }

    return "pangram";
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
