// x86_64 Linux g++ 4.8 compile & testing pass
#include<iostream>
#include<cstdlib>
#include<ctime> 
using namespace std;

int main(){
	int target = 0, input = -1, starttime = 0, step = 0;
	char gamemode;
	void start(int &starttime), finish(int starttime, int step), compare(int input, int target);
	int getInput();
	
	srand(time(NULL));//Using system timestamp as rand seed
	do{
		target = rand();
	}while(target < 0 or target > 100);

	cout << "==================================================" << endl;
	cout << "| System have generated an int between 0 and 100 |" << endl;
	cout << "|           Please guess what is it.             |" << endl;
	cout << "==================================================" << endl;
	//cout << "[Debug]:" << target << endl;//Debug message
	cout << endl;

	checkpoint:
	cout << "Please select which calcualtion method do you like" << endl;
	cout << "Menu: W(hile) D(o...while) Q(uit):";
	cin >> gamemode;
	switch(gamemode){
		case 'w':
		case 'W':
			start(starttime);
			goto whilepoint;
			break;	

		case 'd':
		case 'D':
			start(starttime);
			goto dowhilepoint;
			break;
		case 'q':
		case 'Q':
			cout << "Bye!" << endl;
			exit(0);

		default:
			cout << "Wrong mode! Please re-select."<< endl;
			goto checkpoint;
	}


	whilepoint:
	/** Using while(...){...} method **/
	while(input != target){
		step++;
		input = getInput();
		compare(input, target);
	}
	finish(starttime, step);

	dowhilepoint:
	/** Using do{...}while(...); method **/
	do{
		step++;
		input = getInput();
		compare(input, target);
	}while(input != target);
	finish(starttime, step);

}

void finish(int starttime, int step){
	cout << endl << "You get the right answer!(>.<)" << endl;
	cout << "Using " << time(NULL) - starttime << " second(s) and " << step << " step(s)" << endl;
	exit(0);
}

void start(int &starttime){
	cout << endl << "========== !Game Start! ==========" << endl;
	starttime = time(NULL);
}

int getInput(){
	int input;
	cout << "Your answer is ...:";
	cin >> input;
	return (int)input;
}

void compare(int input, int target){
	if(input > target) cout << "Your answer is BIGGER than target number." << endl;
	if(input < target) cout << "Your answer is SMALLER than target number." << endl;
}
