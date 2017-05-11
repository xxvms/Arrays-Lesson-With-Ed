// Arrays-Lesson-With-Ed.cpp : Defines the entry point for the console application.
//

#include <iostream>
void dodo(int ag[]);
struct part
{
	int i;
	char s;
};

int main()
{
	/*
	int age[]{ 1, 2, 3, 4, 5, 6, 7, 8 };
	std::cout << age[0] << std::endl;
	std::cout << &age[0] << std::endl;

	dodo(age);
	std::cout << age[2] << std::endl;
	*/
	part p[2];

	p[0].i = 1;
	//p->i = 33;

	for (int j = 0; j < 3; j++)
	{
		std::cout << p[j].i << std::endl;
	}

	std::cout << &p->i; 


	system("pause");
    return 0;
}
void dodo(int ag[])
{
	ag[2] = 7;
}
