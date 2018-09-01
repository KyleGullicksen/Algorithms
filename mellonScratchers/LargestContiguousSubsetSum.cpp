#include "LargestContiguousSubsetSum.h"

int LargestContiguousSubsetSum::largestContiguousSubsetSum(vector<int> & array)
{
    int sum = 0, max_sum = 0;

    for (int index = 0; index < array.size(); ++index)
    {
        sum += array[index];

        if(sum < array[index])
            sum = array[index];

        if(sum > max_sum)
            max_sum = sum;
    }
}