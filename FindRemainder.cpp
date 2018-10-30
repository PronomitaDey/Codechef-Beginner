#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  int arr[2][t];
  int i=0,j=0;
  for(i=0;i<t;i++){
		  cin>>arr[i][0]>>arr[i][1];
  }
  for(j=0;j<t;j++){
	  cout<<arr[j][0]/arr[j][1];
  }
	 return 0;
}
  

//this code was successfully submitted
