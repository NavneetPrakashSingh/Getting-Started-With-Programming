//difference of sum of diagonals in c++ using vectors
#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int diagonalDifference(vector<vector<int>>a){
	int array_size = a.size();
	int first_diagonal=0,second_diagonal=0;
	for(int i=0;i<array_size;i++){
		for(int j=0;j<array_size;j++){
			if(i==j){
				first_diagonal = first_diagonal+a[i][j];
			}
			if((i+j)==(array_size-1)){
				second_diagonal =second_diagonal+a[i][j];
			}
		}
	}
	return abs(first_diagonal-second_diagonal);
}

int main(){
	int n;
	cin>>n;
	vector<vector<int>> a (n,vector<int>(n));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	
	int result = diagonalDifference(a);
	cout<<result<<endl;
}
