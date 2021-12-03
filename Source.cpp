#include <iostream>
#include <ctime>
using namespace std;
void fill_array(int *mas, const int size, int left, int right) {
	srand(time(0));
	for (int i = 0; i < size; i++) {
		mas[i] = rand() % (right - left + 1) + left;
	}
}
void print_array(int* mas, const int size) {
	for (int i = 0; i < size; i++) {
		cout << mas[i] << ' ';
	}
}
int sum_array(int* mas, const int size) {
	int sum = 0;
	
		
	for (int i = 0; i < size; i++) {
		sum += mas[i];
	}
	
	return sum;
}
double jajaj(int* mas, const int size) {
	int sum = 0;
	

	for ( int i = 0 ; i < size; i++) {
		sum += mas[i];
			
	}
	
	return double(sum) / size;
}
int main() {
	int a;
	const int n = 10;
	int arr[n];
	fill_array(arr, n, 8, 10);
	print_array(arr, n);
	cout <<"\n" << sum_array(arr, n);
	cout << "\n" << jajaj(arr, n);
}