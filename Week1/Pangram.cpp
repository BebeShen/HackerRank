#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s) {
    set<char> chars;
    for(int i=0;i<s.length();++i){ 
        char ch = (char)tolower(s[i]);
        if(!chars.count(ch) && ch>='a' && ch<='z'){
            chars.insert((char)tolower(s[i]));
        }
        if(chars.size()==26){
            return "pangram";
        }
    }
    return "not pangram";
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
