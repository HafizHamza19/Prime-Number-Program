#include <iostream>
#include <conio.h>

using namespace std;

void main(){
	cout << "------------------Number From 1 to 100--------------------"<< endl<< endl;
	
	int x=0;
	while(x<100){
	x++;
	cout << " " << x;
	
	}
	
	cout<<endl<<endl<<endl<<endl<<"---------------------Prime Numbers---------------------"<< endl<< endl;
	
	for (int i=2;i<=100; i++){
		for
			(int j =2;j<=i;j++)
		{
			
		if
			(i%j == 0){
				break;
		}
		
		else if(i == j+1)
		{
			cout << "\t" << i;
		}
		
		} 
	} 
getch();
}