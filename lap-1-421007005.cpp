  #include<iostream>
using namespace std;
int main()
{
	int  num=99 ;
	int *pointer =new    int ;
	 *pointer=num;
	 
	cout<<"Values = "<<*pointer<<endl;
	cout<< "address = "<<pointer<<endl;
} 
 
