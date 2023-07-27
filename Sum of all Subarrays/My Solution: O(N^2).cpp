#include <iostream>
using namespace std;

// Computes sum all sub-array, Needs to be O(N).
long int SubArraySum(int arr[], int n){

  /*
  O(N^2) solution
  ------------------------------------------------------------------
  */
  long int result = 0;
  for (int i = 0; i < n; i++){
    int temp = 0;
    for (int j = i; j < n; j++){
      temp += arr[j];
      result += temp;
    }
  }
  return result;
  
}

// Driver code
int main()
{
    int arr[] = { 1, 2, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum of SubArray : " << SubArraySum(arr, n) << endl;
    return 0;
}
