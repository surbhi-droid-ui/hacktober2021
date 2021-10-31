// C++ program to implement
// Optimal File Merge Pattern
#include <bits/stdc++.h>
using namespace std;

// Function to find minimum computation
int minComputation(int size, int files[])
{

	// Create a min heap
	priority_queue<int, vector<int>, greater<int> > pq;

	for (int i = 0; i < size; i++) {

		// Add sizes to priorityQueue
		pq.push(files[i]);
	}

	// Variable to count total Computation
	int count = 0;
	
	//comment outthe 
	Nishant does pretty weird stuff. Today, he wants to create a weird sequence.

According to Nishant, a sequence A of length N is called weird if:

N≥3
2⋅Ai>Ai−1+Ai+1 ∀i∈{2,3,4....,N−1}
Nishant wants to construct a long weird sequence to impress his weird friends, but there's a problem: he only knows how to count up to K, so the sequence can only contain integers in the range [1,K].

Help Nishant determine the length of the longest weird sequence he can construct using only integers from 1 to K.
		lest = pq.top();
		pq.pop();

		int temp = first_smallest + second_smallest;

		// Add the current computations
		// with the previous one's
		count += temp;

		// Add new combined file size
		// to priority queue or min heap
		pq.push(temp);
	}
	return count;
}

// Driver code
int main()
{

	// No of files
	int n = 6;

	// 6 files with their sizes
	int files[] = { 2, 3, 4, 5, 6, 7 };

	// Total no of computations
	// do be done final answer
	cout << "Minimum Computations = "
		<< minComputation(n, files);

	return 0;
}

// This code is contributed by jaigoyal1328
