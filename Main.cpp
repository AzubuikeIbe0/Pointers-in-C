//// C program to illustrate Pointers
//#include <stdio.h>
//
//void geeks()
//{
//	int var = 20;
//
//	// declare pointer variable
//	int* ptr;
//
//	// note that data type of ptr and var must be same
//	ptr = &var;
//
//	// assign the address of a variable to a pointer
//	printf("Value at ptr = %p \n", ptr);
//	printf("Value at var = %d \n", var);
//	printf("Value at *ptr = %d \n", *ptr);
//}
//
//// Driver program
//int main()
//{
//	geeks();
//	return 0;
//}


//// The output of this program can be different
//// in different runs. Note that the program
//// prints address of a variable and a variable
//// can be assigned different address in different
//// runs.
//#include <stdio.h>
//
//int main()
//{
//	int x;
//
//	// Prints address of x
//	printf("%p", &x);
//
//	return 0;
//}

//// C program to demonstrate declaration of
//// pointer variables.
//#include <iostream>
//#include <stdio.h>
//
//int main()
//{
//	int x = 10;
//
//	// 1) Since there is * in declaration, ptr
//	// becomes a pointer variable (a variable
//	// that stores address of another variable)
//	// 2) Since there is int before *, ptr is
//	// pointer to an integer type variable
//	int* ptr;
//
//	// & operator before x is used to get address
//	// of x. The address of x is assigned to ptr.
//	ptr = &x;
//
//	std::cout << *ptr << std::endl;
//	std::cout << ptr << std::endl;
//	std::cout << &x << std::endl;
//
//	return 0;
//}

//// C program to demonstrate use of * for pointers
//#include <stdio.h>
//
//int main()
//{
//	// A normal integer variable
//	int Var = 10;
//
//	// A pointer variable that holds address of var.
//	int* ptr = &Var;
//
//	// This line prints value at address stored in ptr.
//	// Value stored is value of variable "var"
//	printf("Value of Var = %d\n", *ptr);
//
//	// The output of this line may be different in different
//	// runs even on same machine.
//	printf("Address of Var = %p\n", ptr);
//
//	// We can also use ptr as lvalue (Left hand
//	// side of assignment)
//	*ptr = 20; // Value at address is now 20
//
//	// This prints 20
//	printf("After doing *ptr = 20, *ptr is %d\n", *ptr);
//
//	return 0;
//}


// C program to illustrate Pointer Arithmetic

#include <stdio.h>

int main()
{

	// Declare an array
	int v[3] = { 10, 100, 200 };

	// Declare pointer variable
	int* ptr;

	// Assign the address of v[0] to ptr
	ptr = v;

	for (int i = 0; i < 3; i++) {
		printf("Value of *ptr = %d\n", *ptr);
		printf("Value of ptr = %p\n\n", ptr);

		// Increment pointer ptr by 1
		ptr++;

		printf("Pointer address incremented = %p\n\n", ptr); //adds the size on of an integer to the pointer
	}
	return 0;
}



