#include <stdio.h>

using namespace std;

struct value {
    int min;
    int max;
}

struct value get_min_max(int arr[],int low,int high){
    struct value minmax,mm1,mm2;
    if(low == high){
        minmax.min = arr[0]; 
        minmax.max = arr[0]; 
        return minmax;
    }
    if(low +1 = high){
        if (arr[low] > arr[high]){
          minmax.min = arr[high];
          minmax.max = arr[low];
          return minmax;
        }
        else{
          minmax.min = arr[low];
          minmax.max = arr[high];
          return minmax;
        }
    }
    int mid = (low+high)/2;
    mm1 = get_min_max(arr,low,mid);
    mm2 = get_min_max(arr,mid+1,high);
    if(mm1.min<mm2.min){
        minmax.min = mm1.min;
    }
    else{
       minmax.min = mm2.min; 
    }
    if(mm1.max>mm2.max){
        minmax.max = mm1.max;
    }
    else{
        minmax.max = mm2.max;
    }
    return maxmin;
    
    
    
    
    
}
int main() {
	//code
	int  arr[100];
	int n;
	cout<<"Enter size of array";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>arr[i];
	struct val = get_min_max(arr,0,n-1);
	cout<<"Maximum: "<<val.max;
	cout<<"\nMinimum: "<<val.min;
	
	return 0;
}