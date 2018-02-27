//program to implement maximum subarray problem using divide and conquer algorithm
#include<iostream>
#include<climits>

using namespace std;

int maxCrossingArray(int A[], int low, int mid, int high){
	int leftSum = 0, rightSum = 0, sum = 0, maxLeft=0,maxRight=0;
	for(int i=mid; i>0;i--){
		sum = sum + A[i];		
			leftSum = max(sum, leftSum);
			maxLeft = i;
		
	}
	cout<<"sum for leftSum is "<<leftSum;
//	cout<<"Left sum and max Left are:"<<leftSum<<"++++"<<maxLeft;
	sum =0;
	for(int j=mid+1; j<high; j++){
		sum = sum + A[j];
		
			rightSum = max(sum, rightSum);
			maxRight = j;	
		
	}
	cout<<"sum for rightSum is "<<rightSum;
//	cout<<"Right sum and max Right are:"<<rightSum<<"++++"<<maxRight;
	
	return(maxLeft,maxRight,leftSum+rightSum);
}
int maxSubarray(int A[], int low, int high){
	int leftLow, leftHigh, leftSum, rightLow, rightHigh, rightSum, centerLow, centerHigh, centerSum;
	if(low ==  high){
		cout<<"in 11 with"<<low<<"----"<<high<<endl;
		return (low, high, A[low]);
	}else {
		cout<<"in 22 with"<<low<<"----"<<high<<endl;
		int mid = (low+high)/2;
		//divide algo starts here
		(leftLow, leftHigh, leftSum) = maxSubarray(A,low,mid);
		(rightLow, rightHigh, rightSum) = maxSubarray(A,mid+1,high);
		(centerLow, centerHigh, centerSum) = maxCrossingArray(A,low,mid,high);
		//divide ends here and combine starts here
		if(leftLow >= rightLow && leftLow >= centerLow){
			return (leftLow,leftHigh,leftSum);
		}else if(rightLow>=leftLow && rightLow>=centerLow){
			return (rightLow, rightHigh, rightSum);
		}else{
			return (centerLow, centerHigh, centerSum);
		}
	}
	
}
 
int main(){
	int numberOfElements=0;
	cout<<"Enter the number of elements you want to enter: ";
	cin>>numberOfElements;
	int arrayValues[numberOfElements];
	cout<<"Enter array elements :";
	for(int i=0;i<numberOfElements;i++){
		cin>>arrayValues[i];
	}
	int lowerBound, upperBound, maxSubarraySum;
	(lowerBound, upperBound, maxSubarraySum) = maxSubarray(arrayValues,0,numberOfElements-1);
	cout<<"Lower Index :"<<lowerBound<<endl<<"Upperbound Index :"<<upperBound<<endl<<"Sum :"<<maxSubarraySum<<endl;
	
}
