// C++ implementation of the above approach
#include<bits/stdc++.h>

using namespace std;


// Function to check for a prime number
bool Prime(int n){

	if( n == 1){
		return false;
			}
	for (int i=2;i*i<=n;i++){
		if (n % i == 0)
			return false;
					}
	return true;
}

// Function to find the sum of array
bool checkSumPrime(string st){
	int summ = 0;
	for (int i=1;i<st.size();i++)
		summ+= abs(st[i-1]-st[i]);

	if(Prime(summ))
		return true;
	else
		return false;
}

// Driver code
int main(){

	int num = 142;

	string s= "142";

	if (checkSumPrime(s))
		cout<<"Prime\n";
	else
		cout<<"Not Prime\n";

return 0;

}
