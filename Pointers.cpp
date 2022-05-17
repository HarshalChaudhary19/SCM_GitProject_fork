/*Pointer - a pointer is a variable which points to a value at particular address.

		& - address of
		* - value at that address   
		                        
------------------------------------------------------------------------------------------------------------
#include<iostream>
using namespace std;
int main()
	string* ptr1;
	int* ptr2;
	string s;
	int a;
	s="hello"; ptr1=&s;
	a= 10; ptr2=&a;
	cout<<&s<<" "<<&a<<endl;
	cout<<*ptr1<<" "<<*ptr2;
	
	return 0;
}

-------------------------------------------------------------------------------------------

#include<iostream>
using namespace std;
int main(){
	int var=10;
	int* ptr; //pointer variable    (*ptr - value at address or dereferencing variable)
	ptr=&var; //It is pointing to address 1000             									
	cout<<"Address of var: "<<&var<<endl;
	cout<<"Value at address: "<<*ptr;
}

---------------------------------------------------------------------------------------------            

//WAP to use pointers for 2 int, 1 float and 2 string
#include<iostream>
using namespace std;

int main(){
	int var1=10;
	int var2=20;
	int* ptr1; 
	int* ptr2;
	ptr1=&var1;  
	ptr2=&var2;          									
	cout<<"Address of var1: "<<&var1<<endl;
	cout<<"Address of var2: "<<&var2<<endl;
	cout<<"Value at address: "<<*ptr1;
	
}
---------------------------------------------------------------------------------------------             */

#include<iostream>
using namespace std;
int main()
{
	int a=10,*ptra;
	string s="hello",*ptrs;
	float f=3.3,*ptrf;
	ptra=&a;
	ptrs=&s;
	ptrf=&f;
	cout<<ptra<<" "<<*ptrs<<" "<<*ptrf;
}
