#include<iostream>
using namespace std;

int main(){
	char input;
	while(true){
		cout << "Menu: A(dd) D(elete) S(ort) Q(uit), Select one:";
		cin >> input;
		switch(input){
		case 'A':
			cout << "Data have been added" << endl;
			break;
		case 'D':
			cout << "Data have been deleted" << endl;
			break;
		case 'S':
			cout << "Data have been shorted" << endl;
			break;
		case 'Q':
			cout << "Exit, bye" <<endl;
			return 0;
		default :
			cout << "Unreconized command, please retype" << endl;
		}
	}
}
