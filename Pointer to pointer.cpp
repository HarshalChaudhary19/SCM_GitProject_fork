// Pointer to pointer - Chain of pointers multiple indirection
/*

#include<iostream>
using namespace std; 

int main()
{
	int var;
	int *ptr1 , **ptr2;
	var = 30;
	ptr1=& var;
	ptr2=&ptr1;
	cout<<var<<endl;
	cout<<"At ptr1 = "<<*ptr1<<endl;
	cout <<"At ptr2 = "<<**ptr2;
	
	return 0;
}
*/


#include<string>
#include<iostream>
using namespace std;

int main(){
	
string var = "abc";
string *ptr=&var;
cout<<var<<endl;
cout<<&var<<endl;
cout<<*ptr<<endl;

*ptr="efg";
cout<<*ptr;
cout<<var;


	return 0;
}
