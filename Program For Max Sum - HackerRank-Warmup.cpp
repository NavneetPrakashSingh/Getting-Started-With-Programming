//min max sum hackerrank warmup https://www.hackerrank.com/challenges/mini-max-sum/problem
#include<bits/stdc++.h>

using namespace std;
void minMaxSum(vector<int>A){
//	cout<<A.size();
	int ans=0,max_value=0,min_value=0;
	vector<int> array_sum(5);
	int count = 0;
	int position =0;
	for(int outer_index = 0; outer_index<A.size();outer_index++){
		int sum =0;
		for(int index=0;index<A.size();index++){
			if(index == outer_index){
				
			}else{
				sum = sum + A[index];	
			}
		}
		if(max_value<sum){
			max_value = sum;
		}
		if(count==0){			
			min_value = sum;
			count++;
		}
		if(min_value>sum){
			min_value = sum;
		}
	}
	cout<<min_value<<" "<<max_value;
}

int main(){
	vector<int> arr(5);
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	minMaxSum(arr);
}
