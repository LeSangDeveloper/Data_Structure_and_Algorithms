#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> squares(100);
	for (int i = 0; i < squares.size(); ++i) {
		squares[i] = i * i;
	}

	for (int i = 0; i < squares.size(); ++ i) {
		cout << " " << squares[i] << " ";
	}

	cout << endl;
	return 0;
}
