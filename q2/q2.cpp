#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class TestClass {

	public:
		string name;
		TestClass(string n) {
			name = n;
		}
		
		void printItem(string s);
		int addTwoNumbers(int x, int y);
		vector<int> fibonacci(int n);
		void readFile(string fileName);
};

void TestClass::printItem(string s) {
	cout << s;
}

int TestClass::addTwoNumbers(int x, int y) {
	int sum = x + y;
	cout << sum;
	return sum;
}

vector<int> TestClass::fibonacci(int n) {

	vector<int> new_list;
    int num1 = 0;
	int num2 = 1;

	if (n == 0) {
		new_list.push_back(num1);
        return new_list;
	}
	
	else if (n == 1) {
        new_list.push_back(num1);
        new_list.push_back(num2);
        return new_list;
	}

    for (int i = 0; i < n - 2; i++) {
        int sum = num1 + num2;
        new_list.push_back(sum);
        num1 = num2;
        num2 = sum;
    }

    return new_list;
	
}

void TestClass::readFile(string filename) {

    ifstream myFile(filename);
    string line; 
    
    while (getline(myFile, line)) {
        cout << line;
        cout << "\n";
    }
    myFile.close();
    }

//Run some commands to ensure workability of class
int main() {
    TestClass test("name");

    //Print fibonacci sequence
    vector<int> output = test.fibonacci(10);
    for (int i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }

    cout << "\n"; //spacing between commands
    test.addTwoNumbers(5, 10);

    cout << "\n";
    test.printItem("this is a long string");

    cout << "\n";
    test.readFile("test.txt");

    return 0;
}
