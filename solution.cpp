#include<bits/stdc++.h>

using namespace std;

void mergeArr(vector<int> &arr, int l, int m, int r){
	int n1 = m-l;
	int n2 = r-m;
	int a[n1], b[n2];
	for(int i = l; i<m; i++){
		a[i-l] = arr[i];
	}
	for(int i = m; i<r; i++){
		b[i-m] = arr[i];
	}
	int i = 0, j = 0, k = 0;
	while(i<n1 && j<n2){
		if(a[i]<b[j]) arr[k++] = a[i++];
		else arr[k++] = b[j++];
	}
	while(i<n1) arr[k++] = a[i++];
	while(j<n2) arr[k++] = b[j++];
}

void merge(vector<vector<int>> &arr, int r1, int c1, int m1, int m2, int r2, int c2){
	// row-wise
	for(int i = r1; i<r2; i++){
		vector<int> temp;
		for(int j = c1; j<c2; j++) temp.push_back(arr[i][j]);
		mergeArr(temp, c1-c1, m2-c1, c2-c1);
		for(int j = c1; j<c2; j++) arr[i][j] = temp[j-c1];
	}
// display(arr, 4, 4);
	// column-wise
	for(int j = c1; j<c2; j++){
		vector<int> temp;
		for(int i = r1; i<r2; i++) temp.push_back(arr[i][j]);
		mergeArr(temp, r1-r1, m1-r1, r2-r1);
		for(int i = r1; i<r2; i++) arr[i][j] = temp[i-r1];
	}
// display(arr, 4, 4);
}

void mergeSort(vector<vector<int>> &arr, int r1, int c1, int r2, int c2){
	if(r1>=r2 || c1>=c2) return;
	if(r1==r2-1 && c1==c2-1) return;

	int m1 = (r1+r2)/2 + (r2-r1)%2;
	int m2 = (c1+c2)/2 + (c2-c1)%2;

	mergeSort(arr, r1, c1, m1, m2);
	mergeSort(arr, r1, m2, m1, c2);
	mergeSort(arr, m1, c1, r2, m2);
	mergeSort(arr, m1, m2, r2, c2);
	merge(arr, r1, c1, m1, m2, r2, c2);
}

void display(vector<vector<int>> &arr, int m, int n){
	for(int i = 0; i<m; i++){
		for(int j = 0; j<n; j++){
			cout << arr[i][j] << " ";
		}
	}
}

int main(){
	int m, n;
	cin >> m >> n;
	vector<vector<int>> arr;
	for(int i = 0; i<m ; i++){
		vector<int> temp;
		int num;
		for(int j = 0; j<n; j++){
			cin >> num;
			temp.push_back(num);
		}
		arr.push_back(temp);
	}
	mergeSort(arr, 0, 0, m, n);
	display(arr, m, n);
	return 0;
}
