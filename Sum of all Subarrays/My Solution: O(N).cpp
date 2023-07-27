#include <iostream>
using namespace std;

// Computes sum all sub-array, Needs to be O(N).
long int SubArraySum(int arr[], int n){
  /*
  O(N) Solution
  ------------------------------------------------------------------
  arr[i] = the current number
  (n - i) = nunber of sub sets starting with that current number
  (i + 1) = number of sub sets ending with that current number
  
  element: 1
  start with 1: {1}, {1,2}, {1,2,3}
  end with 1: {1}

  element: 2
  starts with 2: {2}, {2,3}
  ends with 2: {1,2}, {2}

  element: 3
  starts with 3: {3}
  end with 3: {123}, {23}, {3}
  */
  
  long int result = 0;
  for (int i = 0; i < n; i++){
    result += arr[i] * (n - i) * (i + 1);
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
