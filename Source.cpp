#include <iostream>

int main()
{
	int begin = 0, end = 4;
	char str[6] = {'H','e','l','l','o','\0'}, temp;
NO_U:
	if (begin >= end)
		goto end;
	temp = str[begin];
	str[begin] = str[end];
	str[end] = temp;
	begin++;
	end--;
	goto NO_U;
end:
	std::cout << str;

	return 0;
}