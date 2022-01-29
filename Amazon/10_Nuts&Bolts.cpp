//Question Link- https://practice.geeksforgeeks.org/problems/nuts-and-bolts-problem0431/1

//Question - Given a set of N nuts of different sizes and N bolts of different sizes. There is a one-one mapping between nuts and bolts. Match nuts and bolts efficiently.

//Solution -

class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) {
	    // code here
	    sort(nuts,nuts+n);
	    sort(bolts,bolts+n);
	}

};
