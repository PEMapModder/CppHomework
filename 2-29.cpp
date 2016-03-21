#include<iostream>
using namespace std;

int main(){
	int i = 0, j = 0;
	bool isPrime = true;

	cout << "using while(...){..} method:" << endl;
	while(i < 100){
		isPrime = true;
		i++;
		j = 2;
		while(j < i){
			if(i % j == 0){
				isPrime = false;
				break;
			}
			j++;
		}
		if(!isPrime) continue;
		cout << i << ',';
	}
	cout << endl;

	cout << "using do{...}while(...); method:" << endl;	
	i = 0, j = 0;
	do{
		isPrime = true;
		i++;
		j = 1;
		do{
			j++;
			if(i != j and i % j == 0){
				isPrime = false;
				break;
			}
		}while(j < i);
		if(!isPrime) continue;
		cout << i << ',';
	}while(i < 100);
	cout << endl;

	cout << "using for(...;...;...;){...} method:" << endl;
	i = 0, j = 0;
	for(i = 1;i<=100;i++){
		isPrime = true;
		for(j = 2;j < i; j++){
			if(i % j == 0){
				isPrime = false;
				break;
			}
		}
		if(!isPrime) continue;
		cout << i << ',';
	}
	cout << endl;
}
