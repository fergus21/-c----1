#include<iostream>

using namespace std;

int main(){
int arr[8][8];
for(int i = 0; i<8; i++){



  for(int j = 0; j<8; j++){
		if((i+j)%4 == 0){
		arr[i][j] = 1;

		}
	
		else{
	    arr[i][j] = 0;
		
		}
	cout<<arr[i][j]<<" ";
	}

cout<<"\n";
}

system("pause");
return 0;
}
