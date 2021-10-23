#include <iostream>
using namespace std;

class BubbleSort {

public:

	int len;
	int array[];
	BubbleSort(int arr[], int length){
		len= length;
		for (int i=0; i<len;i++){
			array[i]=arr[i];
		}
	};

	void sort(){
		for(int i=0;i<=len;i++){
			for(int j=0;j<len-1;j++){
				if (array[j]>array[j+1]){
					int temp=array[j];
					array[j]=array[j+1];
					array[j+1]=temp;
				}
			}
		};
	this->print();

	};

	void print(){
		for(int i=0;i<len;i++){
			cout << array[i] << " ";
		};
		cout <<endl;
	};

};

