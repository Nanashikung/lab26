#include<iostream>

using namespace std;

#include<set>
int count(int data[],unsigned int N){
	set<int> mySet;
	for(unsigned int i=0;i < N;i++){
		mySet.insert(data[i]);
	}
	return mySet.size();

}

int main(){	
	int data[] = {1,2,4,5,4,8,2,1,2,4,6,1,4,4,4,2,1,0,12}; 
	
	cout << "There are " << count(data,sizeof(data)/sizeof(int)); 
	cout << " different numbers in data.";
	
	return 0;
}
