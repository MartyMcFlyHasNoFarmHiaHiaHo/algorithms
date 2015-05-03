#include "gtest/gtest.h"
#include <vector>
#include "../sorting/quicksort.h"

TEST (swapFunctionTest, testSwap)
{
   int a = 4;
   int b = 6;
   ASSERT_EQ (6, a);
   ASSERT_EQ (4, b);
}

TEST (quickSortTest, partitionBorder)
{
   std::vector<int> arr = {1, 6, 4, 3, 8, 2};
   ASSERT_EQ (1, partition(arr, arr.size(), 1))
}

TEST (quickSortTest, partitionOrder)
{
   std::vector<int> arr = {1, 6, 4, 3, 8, 2};
   int q = partition(arr, arr.size(), 1)
   for (int i=0; i < q; i++)
   {
       ASSERT_LE (arr[i], q) << "Element at index " << i << "is bigger than q = " << q;
   }

   for (int i=q+1; i < arr.size(); i++)
   {
       ASSERT_GT (arr[i], q) << "Element at index " << i << "is smaller than q = " << q;
   }
}

TEST (quickSortTest, sorting)
{
   std::vector<int> arr = {1, 6, 4, 3, 8, 2};
   std::vector<int> arr_sorted = {1, 2, 3, 4, 6, 8};
   for (int i=0; i<arr.size(); i++)
   {
       ASSERT_EQ (arr[i], arr_sorted[i]) << "Elements differ at index " << i;
   }
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
