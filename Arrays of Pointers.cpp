// Arrays of pointers

#include<iostream>
using namespace std;

int main(){
	int var[3]={10,20,30};
	int *ptr [3];
	for (int i=0;i<3;i++)
	{
		ptr[i]= &var[i];
	}
	
	for(int i=0;i<3;i++)
			{
				cout<<*ptr[i]<<" ";
			}
			cout<<*ptr[0]<<*ptr[1]<<*ptr[2];
	
	
	
}
