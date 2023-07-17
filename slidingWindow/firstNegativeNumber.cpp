vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                                                 
                                                 
                                                 
       deque<long long int> dq;
       vector<long long int > ans;
       int start = 0,end = 0;
       
       while(end < N){
           if(A[end] < 0) dq.push_back(end);
           if(end - start + 1 < K) end++;
           else if(end - start + 1 == K){
               if(dq.size() == 0) ans.push_back(0);
               else{
                   int x = dq[0];
                   ans.push_back(A[x]);
                   if(x == start) dq.pop_front();
               }
               
               end++;
               start++;
           }
       }
       
       return ans;
                                                 
 }