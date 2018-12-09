#include <iostream>
using namespace std;

int main(){
	int s1,s2,s3;
	
	cout <<"masukan sisi ke-1 : ";
	cin>>s1;
	
	cout<<"masukan sisi ke-2 : ";
	cin>>s2;
	
	cout<<"masukan sisi ke-3 : ";
	cin>>s3;
	
	if ((s1+s2)>s3)
	{
		cout<<"ini adalah segitiga";
	}
	else
	if ((s1+s3)>2)
	{
		cout<<"ini bukan segitiga";
	}
	
	return 0;
}
