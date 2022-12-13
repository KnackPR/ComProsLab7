#include<iostream>

using namespace std;

int main(){
	
	int i = 0, P[5000], k, result;
	while(i < 5000){
		P[i] = 2*i+1;
		i++;
	}
	int y = 0;
	cout << "Please input k: ";
	cin >> k ;
	if(k > 0 ){
	i = 0 ;
	result = 0 ;
		while(y < 5000){
			if(P[y] % k == 0){
				result -= P[y];
			}else{
				result += P[y];
			}
			y++;
		}
		cout << "Result = " << result ;
	}else{
		cout << "Invalid input!!!";
	}
	
	return 0;
}
