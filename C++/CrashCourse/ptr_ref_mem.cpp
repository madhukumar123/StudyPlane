#include <iostream>
#include <iomanip>


void swap_ptr(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void swap_ref(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	char mychar;
	int myint;
	char *mychar_ptr;
	int *myint_ptr;
	void *void_ptr;
	
	mychar = 'm';
	mychar_ptr = &mychar;
	
	myint = 10;
	myint_ptr = &myint;
	
	std::cout << "mychar value is : " << mychar << std::endl;
	std::cout << "mychar address is : " << (void*)&mychar << std::endl;
	std::cout << "mychar pointer is : "<< (void*)mychar_ptr << std::endl;
	std::cout << "mychar pointer address is : " << *mychar_ptr << std::endl;
	
	std::cout << "myint value is : " << myint << std::endl;
	std::cout << "myint value is address is :" << &myint << std::endl;
	std::cout << "myint pointer is : " << myint_ptr << std::endl;
	std::cout << "myint pointer address is : " << *myint_ptr << std::endl;

	int a = 20, b = 10;
	std::cout << "before swapping : " << a << " " << b << std::endl;
	swap_ptr(&a, &b);
	std::cout << "after swapping : " << a << " " << b <<std::endl;
	std::cout << "using references now" << std::endl;
	std::cout << "before swapping : " << a << " " << b << std::endl;
	swap_ref(a, b);
	std::cout << "after swapping : " << a << " " << b <<std::endl;

	int d = 10;
	int &c = d;

	std::cout << d << std::endl;
	std::cout << c << std::endl;

	d++;

	std::cout << d << std::endl;
	std::cout << c << std::endl;

	int *my_ptr = new int[4];

	for(int i = 0; i < 4; i++)
	{
		std::cout << my_ptr[i] << std::endl;
	}

	delete [] my_ptr;

	return 0;
}
