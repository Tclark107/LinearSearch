#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

vector<int> SearchThis(int lenOfVec) {
	string s;

	getline(std::cin, s);

	istringstream is(s);
	std::vector<int> v;
	int x;

	while (is >> x) v.push_back(x);

	return v;
}


int main() {
	int numOfTests;
	cout << "How many tests do you want(Choose a number greater than zero)? ";
	cin >> numOfTests;

	for (int i = 1; i <= numOfTests; ++i)
	{
		int lenOfVec;
		int numOfInterest;
		cout << "Choose how long you want the length of the vector: ";
		cin >> lenOfVec;
		cout << "Choose what number you want to find: ";
		cin >> numOfInterest;

		cout << "Please choose a vector of length " << lenOfVec << endl;
		vector<int> v = SearchThis(lenOfVec);
		while (v.size() != lenOfVec) {
			cout << "Please choose a vector of length " << lenOfVec << endl;
			v.clear();
			v = SearchThis(lenOfVec);
		}

		int count = 0;
		for (auto it : v) {
			if (count == (v.size()-1)) {
				cout << "-1" << endl;
			}
			if (numOfInterest == it) {
				cout << count;
				break;
			}
			++count;
		}
	}
}