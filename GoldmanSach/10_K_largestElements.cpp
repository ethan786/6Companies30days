//Question - https://practice.geeksforgeeks.org/problems/k-largest-elements3736/1

//Question- Given an array of N positive integers, print k largest elements from the array. 


//Solution -

vector<int> kLargest(int arr[], int n, int k){
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<k;i++)
        {
            pq.push(arr[i]);
        }
        for(int i=k;i<n;i++)
        {
            if(arr[i]>pq.top())
            {
                pq.pop();
                pq.push(arr[i]);
            }
        }
        vector<int> vt;
        while(!pq.empty())
        {
            vt.push_back(pq.top());
            pq.pop();
        }
        sort(vt.begin(),vt.end(),greater<int>());
        return vt;
}