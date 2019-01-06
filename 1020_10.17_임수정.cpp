#include<iostream>
using namespace std;

class Location{
public:
	Location(int row, int colume, double maxValue){
		this->row = row;
		this->column = column;
		this->maxValue = maxValue;
		
	}
	int getRow(){
		return row;
	}
	int getColumn(){
		return column;
	}
	double getMaxValue(){
		return maxValue;
	}
	void setRow(int row){
		this->row = row;
	}
	void setColumn(int column){
		this->column = column;
	}
	void setMaxValue(double maxValue){
		this->maxValue = maxValue;
	}
private:
	int row;
	int column;
	double maxValue;
};
void maxValue(double arr[][4], int rowSize, Location& l1){
	for(int i = 0 ; i < rowSize ; i++){
		for(int j = 0 ; j < 4 ; j++){
			if(arr[i][j] > l1.getMaxValue()){
				l1.setMaxValue(arr[i][j]);
				l1.setRow(i);
				l1.setColumn(j);
			}
		}
	}
}
int main(){
	cout << "Enter a 3-by-4 two-dimensional array:" << endl;
	double arr[3][4];
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 4 ; j++)
			cin >> arr[i][j] ;
	}
	Location l1(0,0,arr[0][0]);
	maxValue(arr, 3, l1);
	cout << "The location of the largest element is " << l1.getMaxValue() << " at (" <<l1.getRow()<< ", " << l1.getColumn() << ")" << endl;
	
	
	return 0;
}
