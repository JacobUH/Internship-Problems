#include <bits/stdc++.h>
#include <map>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'checkMagazine' function below.
 *
 * The function accepts following parameters:
 *  1. STRING_ARRAY magazine
 *  2. STRING_ARRAY note
 */

void checkMagazine(vector<string> magazine, vector<string> note) {
    unordered_map<string,int> mag;
    for(int i = 0; i < magazine.size(); i++){
        mag[magazine[i]]++;
    }
    
    for (int i = 0; i < note.size();i++){
        string word = note[i];
        if(mag[word] > 0)
            mag[word]--;
        else{
            cout << "No";
            return;
        }     
    }
    cout << "Yes";
    return;
}
