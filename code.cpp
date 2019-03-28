#include <iostream>
#include <string>
using namespace std;

int main(){
	string palabra;
	cin>>palabra;

	int count = 0;
	for (int i=0;i<palabra.length();++i){
		if (palabra[i] == 'a' || palabra[i] == 'e' || palabra[i] == 'i' || palabra[i] == 'o' || palabra[i] == 'u'){
		count++;
		}
	}

	cout<<count<<endl;
	return 0;
}
