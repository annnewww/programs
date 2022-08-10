#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int>anuu;
	cout<<"enter elements in vector=";
	for(int i=1;i<10;i++){
		anuu.push_back(i);
	}
	
	int sum=0;
	for(int i=0;i<anuu.size();i++){
		sum+=anuu[i];
		
	}
	cout<<"\nsum="<<" "<<sum;
	return 0;
}
