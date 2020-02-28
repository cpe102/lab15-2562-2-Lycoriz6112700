#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void randData(double *,int,int);

void findRowSum(const double *,double *,int,int);

void showData(double *,int,int);

int main(){
	srand(time(0));
	const int N = 7, M = 7;
	double data[N][M] = {};
	double result[N] = {};
	double *dPtr = data[0];
	randData(dPtr,N,M);
	showData(dPtr,N,M);
	
	cout << "---------------------------------------------\n";
	findRowSum(dPtr, result, N, M);
	showData(result, N, 1);
	
	return 0;
}

void randData(double *x,int y,int z){
	for(int i = 0; i < y*z ; i++){
			*(x + i) = rand()%101/100.00;
	}
}

void showData(double *x,int y,int z){
	for(int i = 0; i < y * z; i++){
		cout << *(x + i) << "\t";
		if (i % z == z - 1) cout << "\n";
	}
}
void findRowSum(const double *x,double *r,int y,int z){
	for(int i = 0; i < y ; i++){
		*(r + i) = {};
		for(int j = 0; j < z ; j++){
			*(r + i) += *(x +i*7+j);
		}
	}	
}
