#include <iostream>

using namespace std;

class a{
public :
	static int k;
	void	hello_c_plus_plus();
};

void	a::hello_c_plus_plus()
{
		cout << k << endl; 
}

int	a::k = 99;

int main(){
	a firstclass;
	firstclass.hello_c_plus_plus();
	return (0);
}