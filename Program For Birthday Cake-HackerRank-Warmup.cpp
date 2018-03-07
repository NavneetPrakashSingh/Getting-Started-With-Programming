//birthday cake challange | https://www.hackerrank.com/challenges/birthday-cake-candles/problem
#include<bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(int n, vector<int> candles){
	sort(candles.begin(), candles.end(), greater<int>());
	int key_value = candles[0];
	int count = 0;
	for(int i=0;i<n;i++){
		if(candles[i] == key_value)
			count++;
	}
	return count;
	
}

int main(){
	int n;
	cin>>n;
	vector<int> candles (n);
	for(int i=0;i<n;i++){
		cin>>candles[i];
	}
	int result = birthdayCakeCandles(n,candles);
	cout<<result<<endl;
}
