//maximum subarray problem using brute force method
#include<iostream>
#include<climits>

using namespace std;

int maximumSubarrayBruteForce(int A[], int n){
	int ans = INT_MIN;
	for(int subarray_size=1; subarray_size<n ; subarray_size++){
		for(int starting_index = 0;starting_index<n;starting_index++){
			int sum =0;
			if(starting_index+subarray_size>n){
				break;
			}
			for(int calculate_sum_from = starting_index; calculate_sum_from< subarray_size+starting_index; calculate_sum_from++){
				sum = sum + A[calculate_sum_from];
			}
			ans = max(sum,ans);			
		}
	}
	return ans;
}
int main(){
	int arraySize=0;
	cout<<"Enter array size: ";
	cin>>arraySize;
	int inputArray[arraySize];
	cout<<"Enter array values: ";
	for(int i=0;i<arraySize;i++){
		cin>>inputArray[i];
	}
	
	int ans = maximumSubarrayBruteForce(inputArray,arraySize);
	cout<<"maximum subarray sum is "<<ans;
}
