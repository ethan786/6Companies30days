class Solution{
    public:
    pair<int,int> findSmallestRange(int KSortedArray[][N], int n, int k)
    {
          typedef vector<int> vi;
          priority_queue<vi,vector<vi>,greater<vi>> pq;
          
          int low = INT_MAX , high = INT_MIN;
          
          for(int i=0;i<k;i++)
          {
              int val = KSortedArray[i][0];
              low = min(val,low) , high = max(high,val);
              pq.push({val,i,0});
          }
          
          int mn = low , mx = high;
          
          while(!pq.empty())
          {
              auto front = pq.top();
              pq.pop();
              
              mn = front[0];
              
              if(mx - mn < high - low)
              {
                  high = mx , low = mn;
              }
              
              int nc = front[2] + 1;
              if(nc == n) break;
              
              int val = KSortedArray[front[1]][nc];
              
              mx = max(mx,val);
              
              pq.push({val,front[1],nc});
          }
          
          
          return {low,high};
    }
};