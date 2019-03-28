#include <iostream>
#include <string>
using namespace std;

int main(){
	string palabra;
	cin>>palabra;

	int count = 0;
	for (int i=0;i<palabra.length();++i){
		count++;
	}

	cout<<count<<endl;
	return 0;
}
