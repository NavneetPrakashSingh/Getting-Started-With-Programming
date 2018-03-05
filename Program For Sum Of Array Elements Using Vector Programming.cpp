//program to calculate sum of all the number in an array using vector programming
#include<bits/stdc++.h>

using namespace std;

int sumOfArrayElements(int n, vector<int> A){
	int sum = 0;
	for(int starting_index = 0;starting_index<n;starting_index++){
		sum = sum + A[starting_index];
	}
	return sum;
}
int main(){
	int n;
	cin>>n;
	vector<int> ar(n);
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	int result = sumOfArrayElements(n,ar);
	cout<<result<<endl;
}
