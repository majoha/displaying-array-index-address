#include <iostream>

using namespace std;

int main(){

	int myArray[5] = {2, 4, 6, 8, 10};
	int sizeOfArray = sizeof(myArray) / sizeof(myArray[0]);
	bool isComplete = false;
	cout << "The value of sizeOfArray is "  << sizeOfArray << endl;

	int i = 0;

	while(!isComplete){
		
		cout << "The adress of the location " << i << " is " << &myArray[i] << endl;
		i += 0x0004;

		if(i >= 5){
		
			isComplete = true;

		}else{
		

		}
	}

	system("pause");

	return 0;
}

//try creating a program that creates objects within a function and returns them as references. With this, the creation of a new object will be Object object rather than object object = new Object;