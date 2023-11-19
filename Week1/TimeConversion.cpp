#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    if(s[8] == 'P'){
        //  12:00:00~12:59:59 PM -> 12:00:00~12:59:59
        //  01:00:00~11:59:59 PM -> 13:00:00~23:59:59
        if(s[0] == '1' && s[1] == '2'){
            return s.substr(0,8);
        }
        else{
            s[0] += 1; s[1] += 2;
            return s.substr(0,8);
        }
    }
    else{
        // 12:00:00~12:59:59 AM -> 00:00:00~00:59:59
        // 01:00:00~11:59:59 AM -> 01:00:00~11:59:59
        if(s[0] == '1' && s[1] == '2'){
            s[0] = '0'; s[1] = '0';
            return s.substr(0,8);
        }
        else{
            return s.substr(0,8);
        }
    }
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
