 
// Given an integer N, find its factorial.

// Constraints:
// 1 ≤ N ≤ 1000

int multiply(int x, vector<int>&ans,int size){
        int carry = 0;
        int prod=0;
        for(int i=0;i<size;i++){
           prod = ans[i]*x+carry;
           ans[i] = prod%10;
           carry = prod/10;
        }
        while(carry){
            ans.push_back(carry%10);
            carry = carry/10;
            size+=1;
        }
        return size;
    }
    vector<int> factorial(int N){
        // code here
        vector <int>answer(1,1);
        int ansSize = 1;
        for(int i = 2;i<=N;i++){
            ansSize = multiply(i,answer,ansSize);
        }
        reverse(answer.begin(),answer.end());
        return answer;
        
        
    }
