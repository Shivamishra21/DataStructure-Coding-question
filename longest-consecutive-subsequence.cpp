// Given an array of positive integers. Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers, 
// the consecutive numbers can be in any order.



int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      int s = *max_element(arr,arr+N)+1;
      int l=0,al=0;
      vector<int>hash(s,0);
      for(int i=0;i<N;i++){
          hash[arr[i]]+=1;
      }
    //   for(int i=0;i<s;i++){
    //       cout<<hash[i]<<" ";
    //   }
    //   cout<<endl;
      
      for(int i=0;i<s;i++){
          
          if(hash[i]!=0){
              l+=1;
          }
          else if(hash[i] == 0){
               if(l>al){
              al=l;
          }
              l=0;
          }
          if(l>al){
              al=l;
          }
        //   cout<<al<<" ";
      }
      return al;
    }
