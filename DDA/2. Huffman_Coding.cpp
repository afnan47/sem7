#include<bits/stdc++.h>

using namespace std;

class letter{
	public:
	char c;
	int freq;
};

class myComparator{
	public:
	int operator(const letter& l1, const letter& l2) return l1.freq > l2.freq;
};

int main(){
    string s = "ABCDEACEDBEE";
	int h[26] = {0};
	for(char c : s){
		h[c - 'A'] += 1;
	}
	priority_queue<letter, vector<letter>, myComparator> h;
	
	for(int i = 0; i < 26; i++){
		if(h[i] > 0) h.push_back('A' + i, h[i])
	
	
    return 0;
}