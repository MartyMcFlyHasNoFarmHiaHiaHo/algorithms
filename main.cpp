#include "sorting/quicksort.h"
#include <vector>
#include <iostream>
#include <string>

int main(int argc, char **argv) {
   std::vector<int> arr = {1, 6, 4, 3, 8, 2};
  for (auto c : arr)
       std::cout << c << ' ';
   quicksort_cormen<int>(arr, arr.size(), 1);
   std::cout << "bla";
   return 0;
}
