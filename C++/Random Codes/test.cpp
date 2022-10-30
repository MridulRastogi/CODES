/* An efficient program to print subarray with sum as given sum */
#include <bits/stdc++.h>
using namespace std;
/* Returns true if the there is a subarray of arr[] with a sum equal to 'sum' otherwise returns false. Also, prints the result */
int subArraySum(int arr[], int n, int sum)
{
	/* Initialize currentSum as value of first element and starting point as 0 */
	int currentSum = arr[0], start = 0, i;
	/* Add elements one by one to currentSum and if the currentSum exceeds the sum, then remove starting element */
	for (i=1; i<=n; i++)
    {
		// If currentSum exceeds the sum,
		// then remove the starting elements
		while (currentSum > sum && start < i - 1)
        {
			currentSum = currentSum - arr[start];
			start++;
		}
		// If currentSum becomes equal to sum,
		// then return true
		if (currentSum == sum)
        {
			cout << "Sum found between indexes " << start << " and " << i - 1;
			return 1;
		}
		// Add this element to currentSum
		if (i < n)
			currentSum = currentSum + arr[i];
	}
	// If we reach here, then no subarray
	cout << "No subarray found";
	return 0;
}

// Driver Code
int main()
{
	int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int sum = 23;
	subArraySum(arr, n, sum);
	return 0;
}
/**
Traverse the array, build map. Key is the reversed string, value is index in array (0 based)
  Edge case - check if empty string exists. It's interesting that for given words {"a", ""},
              it's expected to return two results [0,1] and [1,0]. Since my main logic can cover [0, 1] concatenate("a", ""),
so as to cover the other situation concatenate("", "a"), I need to traverse the words array again,
find the palindrome word candidate except "" itself, and add pair("", palindrome word) to the final answer.
Main logic part. Partition the word into left and right, and see
1) if there exists a candidate in map equals the left side of current word, and right side of current word is palindrome,
   so concatenate(current word, candidate) forms a pair: left | right | candidate.
2) same for checking the right side of current word: candidate | left | right.
**/

/**
 * Step 1: store every word with its index into a hash map.
 * Step 2: For each word in the array, split into two parts str1 and str2. Check whether str1 and str2 is palindrome
 * If str1 is palindrome, we can use str1 as middle part, str2 as right part, and find if map contains reversed str2.
 * If contains, then we can use that string as left part, combine with middle part, right part, it will form a correct
 * palindrome string.
 * Step 3: do all same operations for str2 (set str2 as middle part)
 * */
