#include<iostream>
#include<string.h>

int main(void)
{
	int i = -1;
	const int ic = i;
	const int *pic = &ic;
	int *const cpi = &ic;
	const int *const cpic = &ic;
}
