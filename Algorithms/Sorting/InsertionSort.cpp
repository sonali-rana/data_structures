#include <iostream>
using namespace std;

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
	int length;
    cout << "Enter the length of array "<<endl;
    cin >> length;
    int arr[length];
    for (int i=0;i<=length-1;i++){
    	cout << "enter "<<i << "element in array "<< endl;
    	cin >> arr[i] ;
    };
    InsertionSort sort = InsertionSort(arr,length);
    sort.sort();
    return 0;
};