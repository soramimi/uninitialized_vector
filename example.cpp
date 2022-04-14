
#include <new>
#include <stdio.h>

#include "uninitialized_vector.h"


void print(uninitialized_vector<int> const *vec)
{
	for (int i : *vec) {
		printf("%d\n", i);
	}
}

int main(int argc, char **argv)
{
	uninitialized_vector<int> a;
	uninitialized_vector<int> b;
	a.push_back(0);
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	a.push_back(5);
	a.push_back(6);
	a.push_back(7);
	a.push_back(8);
	a.push_back(9);
	a.resize(5);
	a.resize(10);

	print(&a);


	return 0;
}

