#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string h = s.substr(0, 2);              
    string mands = s.substr(2, 6);        
    string amorpm = s.substr(8, 2);        

    int hour = (h[0] - '0') * 10 + (h[1] - '0'); //conversion

    if (amorpm == "AM") {
        if (hour == 12){
            hour = 0;
        }
             
    } else {
        if (hour != 12){
            hour += 12;
        }
             
    }

    
    string answer;
    answer += (hour / 10) + '0';
    answer += (hour % 10) + '0';
    answer += mands;

    return answer;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
