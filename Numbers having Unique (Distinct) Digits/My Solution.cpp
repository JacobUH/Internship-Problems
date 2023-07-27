#include <iostream>
using namespace std;

void printUnique(int l, int r){
  for (int i = l; i < r; i++){
    int num = i;

    // create a hashmap for each number every iteration
    bool visited[10] = {false};

    // while number is not 0
    while (num){ 
      if (visited[num % 10])
        break;

      visited[num % 10] = true;
      num = num / 10; // go to next leftmost digit
      
    } 
    if (num == 0){
      cout << i << " ";
    }
  }
}


// Driver code
int main()
{
    int l = 1, r = 20;
    printUnique(l, r);
    return 0;
}
