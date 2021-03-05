#include<iostream>
#include<cstdlib>
#define M 4
#define N 2

using namespace std;

void load(int m[][M]);
void load2(int m[][N]);
void print(int m[][M]);
void print2(int m[][N]);
void print3(int m[][N]);
void scalarProduct(int m1[][M], int m2[][M], int m3[][M]);
void init(int m[][N]);
void matrixProduct(int m1[][M], int m2[][N], int m3[][N]);
int main() {
	//TEST scalar product 2d Array
	/*
	int m[N][M];
	int m2[N][M];
	int result[N][M];
	load(m);
	load(m2);
	print(m);
	cout << endl;
	cout << endl;
	print(m2);
	cout << endl;
	cout << endl;
	scalarProduct(m, m2, result);
	print(result);
	*/
	int m[N][M];
	int mT[M][N];
	int result[N][N];
	load(m);
	print(m);
	cout << endl << endl;
	load2(mT);
	print2(mT);
	cout << endl << endl;
	init(result);
	matrixProduct(m, mT, result);
	cout << endl << endl;
	print3(result);
}


void load(int m[][M]) {
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < M; j++) {
			m[i][j] = i+1;
		}
	}
}
void load2(int m[][N]) {
	for(int i = 0; i < M; i++) {
		for(int j = 0; j < N; j++) {
			m[i][j] = i+1;
		}
	}
}

void scalarProduct(int m1[][M], int m2[][M], int m3[][M]) {
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < M; j++) {
			m3[i][j] = m1[i][j] * m2[i][j];
		}
	}
}

void print3(int m[][N]) {
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
}
void matrixProduct(int m1[][M], int m2[][N], int m3[][N])  {
	int z = 0;
	for(int k = 0; k < N; k++) {
		for(int i = 0; i < N; i++) {
			for(int j = 0; j < M; j++) {
				m3[j][i] += m1[i][j] * m2[j][z];
			}
		}
		z++;
	}
}

void print(int m[][M]) {
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < M; j++) {
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
}
void print2(int m[][N]) {
	for(int i = 0; i < M; i++) {
		for(int j = 0; j < N; j++) {
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
}

void init(int m[][N]) {
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			m[i][j] = 0;
		}
	}
}
