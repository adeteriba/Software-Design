#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int countWords(char *sentence, double& average);

int main(){
	const int size=80;
	char word[size];
	double average=0;
	cout<<"Enter a sentence: "<<endl;
	cin.getline(word, size);
	cout <<"There are "<<countWords(word, average)<<" words in the sentence."<<endl;
	return 0;
}

int countWords(char *sentence, double& average){
	int words= 1;
	int wordlen;
	char *word = NULL;
	while(*sentence != '\0'){
		if(*sentence == ' ') {
			words++;
			wordlen = sentence - word;
			average += wordlen;
			*sentence = '\0';
			cout << word << " " << wordlen<< endl;
			word = NULL;
    }
    else if (word == NULL) word = sentence;
    sentence++;
	}
	wordlen = sentence - word;
	average += wordlen;
	cout << word << " " << wordlen<< endl;
	average /= words;
	return words;

}
