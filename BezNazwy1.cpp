#include <iostream>
int main(void)
{
	using namespace std;
	
	
	int carrots;
	cout<<"Ile masz marchewek?"<<endl;
	cin>>carrots;
	cout<<"Prosze, oto jeszcze 5!"<<endl;
	carrots = carrots + 5;
	cout<<"Teraz masz "<<carrots<<" marchewek";
	cin.get();
	cin.get();
	return 0;
}
