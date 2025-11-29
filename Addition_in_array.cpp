#include <iostream>
using namespace std;
int main(){
	int array[5] = {1, 2, 3, 4, 5};
	int sum = 0;
	for(int i= 0; i<5 ; i++){
		sum +=array[i];
	}
	cout <<" Sum of Elements in the array :" << sum << endl;
	return 0;
}