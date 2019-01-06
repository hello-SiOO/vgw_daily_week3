#include<iostream>
using namespace std;

class StackOfInteger{
public:
	StackOfInteger(){
		size = 0 ;
	}	
	bool isEmpty () const{
		if(size == 0)
			return true;
		else
			return false;
	}
	int peek () const {
		return element[size-1];
	}
	void push(int value){
		element[size++] = value;
	}
	int pop(){
		return element[--size]; //size �ϳ��� �����鼭 ���� �������°� �ƴ����� ������ ������ �� ��ġ�� �ְ� �ǹǷ� ����̳� �������� 
	}
	int getSize() const {
		return size;
	}
private:
	int element[100];
	int size;
};
bool isPrime(int n){
	int d = 2;
	do{
		if(n == 2)
			break;
		if(n % d == 0)
			return false;
		d++;
	}while(d <= n/2);
	return true;
}
int main(){
	StackOfInteger prime;
	for(int n = 2 ; n < 120 ; n++){
		if(isPrime(n))
			prime.push(n);
	}
			
	do{
		cout << prime.pop() ;
		prime.getSize() != 0 ? cout << ", " : cout << endl ;
	}while(!prime.isEmpty());
	/*bool isprime = true;
	for(int n = 2 ; n < 120 ; n++){
		int d = 2;
		do{
			if(n ==2)
				break;
			if(n%d == 0){
				isprime = false;
				break;
			}
			else isprime = true;
			d++;
		}while(d <= n/2);
		if(isprime)
			prime.push(n);
	}*/
	
	return 0;
}
