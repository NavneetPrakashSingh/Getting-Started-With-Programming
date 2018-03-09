//basic operations in stacks using vector c++
#include<bits/stdc++.h>

using namespace std;

int emptyArray(vector<int> A){
	if(A.size()==0){
		return 1;
	}else{
		return 0;
	}
}
int PushArray(vector<int> A, int value){
	int sizeOfVector = A.size();
	sizeOfVector = sizeOfVector+1;
	A.resize(sizeOfVector);
	A[sizeOfVector-1] = value;
	
	cout<<"New Array Formed Is:"<<endl;
	for(int i=0;i<A.size();i++){
		cout<<A[i]<<" ";
	}
}

int PopArray(vector <int> A){
	if(emptyArray(A)){
		cout<<"Empty Array";
	}else{
		int sizeOfVector = A.size();
		sizeOfVector = sizeOfVector-1;
		A.resize(sizeOfVector);
	}
	
	cout<<"New Array Formed Is:"<<endl;
	for(int i=0;i<A.size();i++){
		cout<<A[i]<<" ";
	}
}

int main(){
	int numOfElements=0,decision,value=0;
	cout<<"Program To Implement Basic Operations On Stacks"<<endl;
	cout<<"Enter number of elements of the array :";
	cin>>numOfElements;
	vector<int> elements(numOfElements);
	cout<<"Enter elements of the array"<<endl;
	for(int i=0;i<numOfElements;i++){
		cin>>elements[i];
	}
	cout<<"Enter operation to be performed : 1 for Push and 2 for Pop"<<endl;
	cin>>decision;
	if(decision == 1){
		cout<<"Enter element to be added";
		cin>>value;
		cout<<"value to be added is "<<value<<endl;
		PushArray(elements,value);
	}else if(decision == 2){		
		PopArray(elements);
	}
}
