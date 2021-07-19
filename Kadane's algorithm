 //It is the login function that takes two parameter
 // first : array
 //second : size of array
 
 int maxSubarraySum(int a[], int n){
        
   int max_so_far = -999999;
   int curr_max = 0;

   for (int i = 0; i < n; i++)
   {
        curr_max+=a[i];
        if(max_so_far < curr_max){
            max_so_far = curr_max;
        }
        if(curr_max<0){
            curr_max = 0;
        }
   }
   return max_so_far;
    }
