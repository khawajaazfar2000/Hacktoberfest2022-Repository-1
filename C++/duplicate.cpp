# include <iostream>
using namespace std;
bool duplicate(int arr[],int size){
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(arr[i]==arr[j]){
				return true;
			}
			
		}
		return false;
	}
}
int main(){
	int size=5;
	int arr[size]={1,2,3,4};
cout<<	duplicate(arr,size);
}
