// program for https://www.hackerrank.com/challenges/compare-the-triplets/problem
#include <bits/stdc++.h>

using namespace std;

vector < int > solve(int a0, int a1, int a2, int b0, int b1, int b2){
    // Complete this function
    vector<int> returningArray(2);
    returningArray[0]=returningArray[1]=0;
    if(a0 > b0){
    	returningArray[0]=returningArray[0]+1;
	}else if (a0<b0){
		returningArray[1]=returningArray[1]+1;
	}else{
		
	}
	if(a1 > b1){
    	returningArray[0]=returningArray[0]+1;
	}else if (a1<b1){
		returningArray[1]=returningArray[1]+1;
	}else{
		
	}
	if(a2 > b2){
    	returningArray[0]=returningArray[0]+1;
	}else if (a2<b2){
		returningArray[1]=returningArray[1]+1;
	}else{
		
	}
	return returningArray;
}

int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    vector < int > result = solve(a0, a1, a2, b0, b1, b2);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;
    

    return 0;
}

