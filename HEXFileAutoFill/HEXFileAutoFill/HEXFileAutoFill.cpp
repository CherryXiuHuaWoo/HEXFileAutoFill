// HEXFileAutoFill.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

/*
 * argv[0]: this project's path
 * argv[1]: the target HexFile's path
 */
int main(int argc, char *argv[])
{
	char fillValue = 0;
	FILE* fd;

	if (argc < 2)
	{
		perror("Input parameter num < 2");
	}

	printf("Enter Fill Value:\r\n");
	scanf("%c", &fillValue);

	fd = fopen(argv[1], "r+");

	if (NULL == fd)
	{
		printf("%s fopen error\r\n", argv[1]);
		return 1;
	}
	else
	{
		printf("%s fopen successful!\r\n", argv[1]);
	}
	


    return 0;
}

