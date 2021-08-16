// The cost of stock on each day is given in an array A[] of size N. 
// Find all the days on which you buy and sell the stock so that in between those days your profit is maximum.


vector<vector<int> > stockBuySell(vector<int> price, int n){
        vector<vector<int> > v;
        vector<int>v1;
        
        if(n==1){
            return v;
        }
        int i=0;
        while(i<n-1){
            while((i<n-1)&&(price[i+1]<=price[i]))
                i++;
            if(i== n-1)
                break;
            int buy = i++;
            while((i<n)&& (price[i]>=price[i-1]))
                i++;
            int sell = i-1;
            
            v.push_back({buy,sell});
        }
        return v;
    }
