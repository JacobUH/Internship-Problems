#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'hourglassSum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int hourglassSum(vector<vector<int>> arr) {
    int maxSum;
    int num = 0;
    for (int x = 1; x < arr.size()-1;x++){
        for (int y = 1; y < arr.size()-1; y++){
            num = arr[x-1][y-1] + arr[x-1][y] + arr[x-1][y+1]
            + arr[x][y]
            + arr[x+1][y-1] + arr[x+1][y] + arr[x+1][y+1];
            maxSum = max(num, maxSum);
        }
    }
    
    return maxSum;
}
