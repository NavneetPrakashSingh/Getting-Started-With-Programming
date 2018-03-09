//basic operations in stacks using vector c++
//#include<bits/stdc++.h>
#include<iostream>

using namespace std;


int emptyArray(int A[],int size){
	if(size == 0){
		return 1;
	}else{
		return 0;
	}
}
int PushArray(int A[], int value, int size){
	int sizeOfArray = size+1;
	A[sizeOfArray];
	A[sizeOfArray-1]=value;
	
	cout<<"Size of the array is "<<endl;
	for(int i=0;i<sizeOfArray;i++){
		cout<<A[i];
	}
}

int PopArray(int A[], int size){
	if(emptyArray(A,size)){
		cout<<"Empty Array";
	}else{
		int sizeOfArray = size;
		sizeOfArray = sizeOfArray-1;
		A[sizeOfArray];
	}
	
	cout<<"New Array Formed Is:"<<endl;
	for(int i=0;i<size;i++){
		cout<<A[i]<<" ";
	}
}

int main(){
	int size=0,decision,value=0;
	cout<<"Program To Implement Basic Operations On Stacks"<<endl;
	cout<<"Enter number of elements of the array :";
	cin>>size;
	int elements[size];
	cout<<"Enter elements of the array"<<endl;
	for(int i=0;i<size;i++){
		cin>>elements[i];
	}
	cout<<"Enter operation to be performed : 1 for Push and 2 for Pop"<<endl;
	cin>>decision;
	if(decision == 1){
		cout<<"Enter element to be added";
		cin>>value;
		cout<<"value to be added is "<<value<<endl;
		PushArray(elements,value,size);
	}else if(decision == 2){		
		PopArray(elements,size);
	}
}
