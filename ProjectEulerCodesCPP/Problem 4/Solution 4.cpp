#include <iostream>
#include <string>
#include <array>

using namespace std;

int main(){
	int largestprod = 0;
	int tempprod = 0;
	for(int i = 1; i < 1000; i++)
		for(int j = 1; j < 1000; j++){
			tempprod = i*j;
			string s = to_string(tempprod);
			char * charArr = new char[s.length()];
			int k = 0;
			for(string::iterator it = s.begin(); it != s.end(); ++it)
				charArr[k++] = *it;
			bool isPalindrome = true;
			int size = s.length()/2;
			if(s.length() != 1)
				for(int l = 0; l < size; l++)
					if(charArr[l] != charArr[s.length()-1-l]){
						isPalindrome = false;
						break;
					}
			if(isPalindrome){
				if(tempprod > largestprod)
					largestprod = tempprod;
				isPalindrome = false;
			}
			delete [] charArr;
		}
	cout << largestprod;
	return largestprod;
}
