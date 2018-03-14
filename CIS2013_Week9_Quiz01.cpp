#include <iostream>
#include <fstream>

using namespace std;
ifstream data;

int main(){
	int A=0;
	int F=0;
	int a=0;
	int b=0;
	int count=0;
	char next;
	int nextint;
	
	data.open("info.dat");
	if (data.fail()){
		cout << "cannot open file.";
		exit(1);
	}
	while (data >> next){
		data >> next;
		count++;
		if (next=='A'){
			A++;
		}
		else if (next=='F'){
			F++;
		}
		else if (next=='a'){
			a++;
		}
		else if (next=='b'){
			b++;
		}
	}
	cout << next << nextint;
	data.close();
	cout << "The file contains " << A << "A's, " << F << "F's, " << a << "a's and "
	<< b << "b's.  The total number of characters in the document is " << count;
	return 0;
}