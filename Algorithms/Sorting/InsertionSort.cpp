#include <iostream>
using namespace std;
#include "BubbleSort.h"

class InsertionSort
{
public:

	int len;
	int array[];
    InsertionSort(int arr[], int length)
    {
        len=length;
		for(int x=0;x<=len-1;x++){
			array[x]=arr[x];
		}
        

    };

    void print()
    {	cout << "start < ";
        for(int x=0;x<=len-1;x++){
			cout << array[x] << " < ";
		};
		cout << "end "<< endl;
    };

    void sort(){

    	for (int i=0;i<=len-1;i++){
    		int current = array[i];
    		int j=i-1;

    		while (j>=0 and array[j]>current){
    			array[j+1]=array[j];
  				j=j-1;
    		};
    		array[j+1]=current;
    	}

    	this->print();
    }
};

int main()
{
	int length=6;
    int arr[6]={4,3,2,1,10,15};
    BubbleSort sort = BubbleSort(arr,length);
    sort.sort();
    return 0;
};