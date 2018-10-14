#include <iostream>
using namespace std;

int main() {
	cout << "Enter a sentence: " << endl;
	string shortest;
	string longest;
	string word;
	cin >> word;

	while (cin>>word){
		if(word.size()>longest.size())
			longest = word;
		else if(word.size()>shortest.size())
			shortest = word;
	}

	cout <<"\nLongest word: " << longest <<" of size " << longest.size();
	cout <<"\nShortest word: " << shortest << " of size " << shortest.size();
	return 0;
}
