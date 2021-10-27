#include<iostream>
using namespace std;
long long int Add(int starti,int startj,int w,long long int C[][100]);


int main(){
	long long int N;
    long long int C[100][100],w;
	cin >> N;
	long long int A[N][N],B[N][N];
	for(int i = 0;i<N;i++) {
		for(int j = 0;j<N;j++){
			cin >> A[i][j];
		}
	}
	for(int i = 0;i<N;i++) {
		for(int j = 0;j<N;j++){
			cin >> B[i][j];
		}
	}
	cin >> w;
	if(w>=N) return 0;
	for(int i = 0;i<100;i++) {
		for(int j = 0;j<100;j++){
			C[i][j]= 0 ;
		}
	}
	for(int i = 0;i<N;i++) {
		for(int j = 0;j<N;j++){
			C[i][j]= (A[i][j]-B[i][j])*(A[i][j]-B[i][j]);
		}
	}
	long long int R[N][N];
	for(int i = 0;i<N;i++){
		for(int j = 0;j<N;j++){
			R[i][j] = Add(i,j,w,C);
		}
	}
	for(int i = 0;i<N;i++){
		for(int j = 0;j<N;j++){
			cout << R[i][j] <<" ";
		}
		cout << endl;
	}
return 0;
}
long long int Add(int starti,int startj,int w,long long int C[][100]){
	int sum = 0;
	for(int i = starti;i< (starti + w);i++){
		for(int j = startj;j<(startj+w);j++){
			
			sum = sum + C[i][j];
		}
	}
	return sum;
}
