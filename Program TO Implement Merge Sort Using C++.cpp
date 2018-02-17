//program to implement merge sort using c++
#include<iostream>
using namespace std;

int merge(int unsortedArray[], int first, int middle, int last){
	cout<<"values"<<first<<"----"<<middle<<"----"<<last<<endl;
	int endOfFirstArray = (middle-first+1);
	int endOfSecondArray =(last - middle);
	int firstArray[endOfFirstArray], secondArray[endOfSecondArray];
	for(int i=0;i<endOfFirstArray;i++){
		firstArray[i] = unsortedArray[i+first-1];
	}
	for(int j=0;j<endOfSecondArray;j++){
		secondArray[j] = unsortedArray[middle+j];
	}
	
	int i=0,j=0;
	for(int index = first; index<last; index++){
		if(firstArray[i] >= secondArray[j]){
			unsortedArray[index] = secondArray[j];
			j++;
		}else{
			unsortedArray[index] = secondArray[i];
			i++;
		}
	}
	
	
	for(int i=0;i<last;i++){
		cout<<unsortedArray[i];
	}
	cout<<endl;
//	cout<<"Array values are:";
//	for(int i=0;i<endOfFirstArray;i++){
//		cout<<(firstArray[i]);
//	}
//	cout<<endl;
//	cout<<"second array";
//	for(int i=0;i<endOfFirstArray;i++){
//		cout<<(secondArray[i]);
//	}
//	cout<<endl;
	cout<<"---------"<<endl;
}

int mergeSort(int unsortedArray[], int first, int last){
	if(last>first){
		
		int middle = (first+last)/2;
		
		mergeSort(unsortedArray, first, middle);
		mergeSort(unsortedArray, middle+1, last);
		
		cout<<"first"<<first<<"last"<<last<<"middle"<<middle<<endl;
		merge(unsortedArray,first,middle,last);
	}
}

int printArray(int unsortedArray[], int endIndex){
	
	cout<<"Sorted Array is :"<<endl;
	for(int i =0;i<endIndex ; i++){
		cout<<unsortedArray[i];
		
	}
}

int main(){
	int numberOfElements = 0;
	cout<<"Welcome to Merge Sort"<<endl;
	cout<<"Enter number of elements of array";
	cin>>numberOfElements;
	int unsortedArray[numberOfElements];
	cout<<"Enter "<<numberOfElements<<" elements of array: ";
	for(int i=0;i<numberOfElements;i++){
		cin>>unsortedArray[i];
	}
	
	mergeSort(unsortedArray, 0, numberOfElements-1);
	
	printArray(unsortedArray,numberOfElements-1);
	
}
