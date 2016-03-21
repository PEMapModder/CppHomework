#include <iostream>
using namespace std;

int main(){
	int mark;
	do{
		cout << "Please input your mark :";
		cin >> mark;
		if(mark > 100 or mark < 0)cout << "Input Error" << endl;
	}while(mark > 100 or mark < 0);
	if(mark >= 90)cout << "Excellent" << endl;
	if(mark >= 80 and mark < 90)cout << "Good" << endl;
	if(mark >= 60 and mark < 80)cout << "Pass" << endl;
	if(mark < 60)cout << "Bad" << endl;
}
