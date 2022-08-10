//program to sort array using bubble sort

#include<iostream>
using namespace std;
int main(){
	int a[]={1,5,7,2,6,8,4,};
	int n=7;
	cout<<"array before sorting=";
	for(int i=0;i<n;i++){
		cout<<" "<<a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
		        a[j]=a[j+1];
			    a[j+1]=temp;
		    }
		}
    }
    cout<<"\n\n\nafter sorting=";
    for(int i=0;i<n;i++){
    	cout<<" "<<a[i];
	}
    
	return 0;
}
