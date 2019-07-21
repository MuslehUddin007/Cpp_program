#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<map>
#include<algorithm>

using namespace std;

void printDistinctSubStrs(string input,int sizeOfSubStr){
	map<string,int> subStrFreqMap;
	int inputLen = input.length();
	int limit = inputLen - (sizeOfSubStr - 1);
	for(int i=0;i<limit;i++){
		stringstream ss;
		for(int j=i;j<i+sizeOfSubStr;j++){
			ss << input[j];
		}
		subStrFreqMap[ss.str()]++;
	}

	for(map<string,int>::iterator itr = subStrFreqMap.begin();itr != subStrFreqMap.end();itr++){
		cout << itr->first << "-" << itr->second << endl;
	}
}

int main()
{
	string input = "abcacdcacabacaassddssklac";
	printDistinctSubStrs(input,2);
	return 0;
}
