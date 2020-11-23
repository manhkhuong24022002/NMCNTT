#include<iostream>
using namespace std;
double  soluotbo(int n){
	int tam,sotam=0;
	while (n) {
		tam = n % 10;
		if (tam != 0 && tam != 5)
			sotam = (sotam *10)+ tam ;
		n /= 10;
	}
	while (sotam) {
		  tam=sotam % 10;
		  n = n * 10 + tam;
		  sotam /= 10; 
	}
	return n;
}
int main() {
	int i,   n;
	cout << "nhap n ";
	cin >> n;
	cout <<"so luot bo la: "<< soluotbo(n)<<"\n";
		for ( i = 2; i <= n; i++)
			while (n % i == 0) {
				n =n/ i;
				cout << i << " ";
			}
	return 0;
}
