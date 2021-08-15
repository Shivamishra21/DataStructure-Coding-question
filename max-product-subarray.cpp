

//    Given an array Arr that contains N integers (may be positive, negative or zero). Find the product of the maximum product subarray.
	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    // code here
	    //6 -3 -10 0 2
	  long long maxP = arr[0];
	  long long minP = arr[0];
	  long long answer = arr[0];
	  for(int i=1;i<n;i++){
	      if(arr[i]<0){
	          swap(maxP,minP);
	      }
	      maxP = max(static_cast<long long>(arr[i]),arr[i]*maxP);
	      minP = min(static_cast<long long>(arr[i]),minP*arr[i]);
	      answer = max(maxP,answer);
	   //   cout<<"Max = "<<maxP<<"  Min = "<<minP<<"  ans = "<<answer<<endl;
	  } 
	  return answer;
    }





























