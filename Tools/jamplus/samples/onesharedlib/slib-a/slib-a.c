#include <stdio.h>

int Add(int a, int b)
{
	return a + b;
}

#if _MSC_VER
__declspec(dllexport)
#endif
void ExportA()
{
	printf("ExportA: 2 + 5 = %d\n", Add(2, 5));
}


#if _MSC_VER
__declspec(dllexport)
#endif
void ExportA2()
{
	//
	printf("ExportA2: 3 + 9 = %d\n", Add(3, 9));
}


