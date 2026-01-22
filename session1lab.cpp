#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {

    int arr[6] = {4, 9, 2, 7, 5, 8};
    int max = arr[0];
    int k = 0;

   for (int i = 1; i < 6; i++) {
      if (arr[i] > max) {
         max = arr[i];
      }
   }

   for (int i = 0; i < 6; i++) {
      if (arr[i] == max) {
         k++;
      }
   }

   cout << "Highest value: " << max << endl;
   cout << "Number of times it appears: " << k << endl;
   
   return 0;
}