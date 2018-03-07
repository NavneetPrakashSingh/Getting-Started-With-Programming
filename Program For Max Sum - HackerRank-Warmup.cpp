//min max sum hackerrank warmup https://www.hackerrank.com/challenges/mini-max-sum/problem
#include<bits/stdc++.h>
#include<stdint.h>

using namespace std;
void minMaxSum(vector<unsigned long int>A){
//	cout<<A.size();
	vector<unsigned long int> temp_vector (A.size());
	unsigned long int sum=0;
	for(int index=0;index<A.size();index++){
		sum = sum+A[index];
	}
	unsigned long int current_sum=0;
	for(int i=0;i<A.size();i++){
		current_sum = sum-A[i];
		temp_vector[i] = current_sum;
	}
	

	sort(temp_vector.begin(), temp_vector.end());
	for(int i=0;i<temp_vector.size();i++){
		cout<<temp_vector[i]<<endl;
	}
	cout<<temp_vector[0]<<" "<<temp_vector[temp_vector.size()-1];
//	cout<<min_value<<" "<<max_value;
}

int main(){
	vector<unsigned long int> arr(5);
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	minMaxSum(arr);
}
