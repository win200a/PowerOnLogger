#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning (disable:4996)
int main(int argc,char*argv[])
{
	if (argc == 1)
	{

		time_t rawtime;
		time(&rawtime);
		struct tm* nowtime = localtime(&rawtime);
		FILE*fp;
		fp = fopen("log", "a+");
		fprintf(fp, "%d-%d-%d %d:%d:%d\n", nowtime->tm_year + 1900, nowtime->tm_mon + 1, nowtime->tm_mday, nowtime->tm_hour, nowtime->tm_min, nowtime->tm_sec);
		fclose(fp);

	}
	else if (argc == 2)
	{
		if ((strcmp(argv[1], "cS8")) == 0)
		{
			system("del log");
			/*
			char c;
			FILE*fp;
			fp = fopen("log", "r");
			while ((c = fgetc(fp)) != EOF)
			{
				putchar(c);
			}
			fclose(fp);
			getch();
			*/
		}
		else
		{
			puts("wrong");
		}
	}
	else
	{
		puts("wrong");
	}
}