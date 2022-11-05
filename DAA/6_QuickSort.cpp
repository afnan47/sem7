#include<iostream>

using namespace std;

int partition(int * arr, int p, int r){
	int x = arr[r];
	int i = p - 1;
	for(int j = p; j < r; j++){
		if(arr[j] <= x){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i + 1], arr[r]);
	return i + 1;
}

void quickSort(int * arr, int p, int r){
	if (p < r){
		int q = partition(arr, p, r);
		quickSort(arr, p, q - 1);
		quickSort(arr, q + 1, r);
	}
}

//Randomized
int randomPartition(int * arr, int p, int r){
	int x = arr[r];
	int i = rand() % ((r - p) + 1) + p;
	cout << i << endl;
	for(int j = p; j < r; j++){
		if(arr[j] <= x){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i + 1], arr[r]);
	return i + 1;
}

void radomizedQuickSort(int * arr, int p, int r){
	if (p < r){
		int q = randomPartition(arr, p, r);
		radomizedQuickSort(arr, p, q - 1);
		radomizedQuickSort(arr, q + 1, r);
	}
}

int main(){
	int A[] = {23,34,54,123,34,56,67676,112};
	int n = sizeof(A)/ sizeof(A[0]);
	radomizedQuickSort(A, 0, n - 1);
	for(int i : A){
		cout << i << " ";
	}
	cout << '\n';
	return 0;
}