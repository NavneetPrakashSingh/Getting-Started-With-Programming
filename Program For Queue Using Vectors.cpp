//program to implement basic opeartions in queue using vectors
#include<bits/stdc++.h>

using namespace std;
int head = 0;
int tail = 0;

int enqueue(vector<int> queue,int newElement, int size){
	tail = size;
	tail = tail +1;
	queue[tail];
	queue[tail-1]=newElement;
	
	for(int i=0; i<tail;i++){
		cout<<queue[i]<<" ";
	}
	
}
int dequeue(vector<int> queue, int size){
	head = 0;
	queue.erase(queue.begin() + head); 
	queue.resize(size-1);
	for(int i=0; i<queue.size();i++){
		cout<<queue[i]<<" ";
	}
}

int main(){
	int size=0,decision=0;
	cout<<"Program To Implement Enqueue And Dequeue In Queues"<<endl;
	cout<<"Enter number of elements of the queue : ";
	cin>>size;
	vector<int> queue(size);
	cout<<"enter elements of the queue";
	for(int i=0;i<size;i++){
		cin>>queue[i];
	}
	cout<<"Enter the operation to be perform on queue 1 for enqueue and 2 for dequeue"<<endl;
	cin>>decision;
	if(decision == 1){
		cout<<"Enter the element to be added :";
		int newElement;
		cin>>newElement;
		enqueue(queue,newElement,size);
	}else if(decision ==2){
		dequeue(queue,size);
	}
	
}
