//Array and pointers
#include<iostream>
using namespace std;

int main(){
 int a[3]={10,20,30};
 int *ptr=&a[0];
 for(int i=0;i<3;i++)
 {
 	cout<<*ptr<<" ";
 	ptr++;
	 }	
}
