//program to implement insertion sort using c++
#include<iostream>
#include<ctime>
using namespace std;

void InsertionSort(int unsortedArray[],int numberOfElements){
	
	int start_s = clock();
	for(int i =1;i<numberOfElements;i++){
		int k=0,temp=0;
		for(int j=i-1;j>=0;j--){
			
			/*
			| Uncomment the following lines to start debug mode
			*/
//			cout<<"-----------"<<endl;
//			cout<<"values of i: "<<i<<"value of j :"<<j<<"value of k :"<<k<<endl;
//			cout<<"Array value "<<unsortedArray[j]<<" Other value of array"<<unsortedArray[i-k]<<endl;
//			cout<<"-----------"<<endl;
			
			/*
			|	End of uncommenting debug lines
			*/
			if(unsortedArray[j]>unsortedArray[i-k]){
				temp = unsortedArray[i-k];
				unsortedArray[i-k] = unsortedArray[j];
				unsortedArray[j] = temp;
//				cout<<"value changed"<<endl;				
			}
			k++;		
		}
	}
	int stop_s = clock();
	cout << "Array sorted in :" << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 <<" clocks" << endl;

	cout<<"Sorted Array :"<<endl;
	for(int i=0;i<numberOfElements;i++){
		cout<<unsortedArray[i];
	}
}
int main(){
	int elementsInArray=0;
	cout<<"Welcome To Insertion Sort"<<endl;
	cout<<"Enter number of elements of the array";
	cin>>elementsInArray;
	int arrayValue[elementsInArray];
	cout<<"Enter "<<elementsInArray<<" numbers of array: ";
	for(int i =0;i<elementsInArray;i++){
		cin>>arrayValue[i];
	}
	InsertionSort(arrayValue,elementsInArray);
}
