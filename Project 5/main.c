#include <stdio.h>
#include <stdlib.h>


typedef struct StudentData
{
	int num;
	char name[30];
	unsigned int kor, eng, math, total;
} S_DATA;


char* GetNextString(char* ap_src_str, char a_delimiter, char* ap_buffer)
{
	while (*ap_src_str && *ap_src_str != a_delimiter)
	{
		*ap_buffer++ = *ap_src_str++;
	}

	if (*(ap_buffer - 1) == '\n')
	{
		*(ap_buffer - 1) = 0;
	}

	else
	{
		*ap_buffer = 0;
	}

	if (*ap_src_str == a_delimiter)
	{
		ap_src_str++;
	}

	return ap_src_str;
}

int ReadData(const char* ap_file_name, S_DATA* ap_data, unsigned int* ap_data_count)
{
	S_DATA* p_start = ap_data;

	FILE* p_file = NULL;

	if (0 == fopen_s(&p_file, ap_file_name, "rt"))
	{
		char one_line_string[128], str[32], * p_pos;

		if (NULL != fgets(one_line_string, 128, p_file))
		{
			while (NULL != fgets(one_line_string, 128, p_file))
			{
				p_pos = GetNextString(one_line_string, ',', str);
				ap_data->num = atoi(str);
				p_pos = GetNextString(p_pos, ',', ap_data->name);
				p_pos = GetNextString(p_pos, ',', str);
				ap_data->kor = atoi(str);
				p_pos = GetNextString(p_pos, ',', str);
				ap_data->eng = atoi(str);
				p_pos = GetNextString(p_pos, ',', str);
				ap_data->math = atoi(str);
				ap_data->total = ap_data->kor + ap_data->eng + ap_data->math;
				ap_data++;
			}
			*ap_data_count = ap_data - p_start;
		}
		fclose(p_file);
		return 1;
	}
	return 0;
}

void ShowData(S_DATA* ap_data, unsigned int a_count)
{
	unsigned int sum = 0;

	printf("--------------------------------------------------------------------\n");
	printf("      id         name      kor    eng    math      total     avg \n");
	printf("--------------------------------------------------------------------\n");

	for (unsigned int i = 0; i < a_count; i++, ap_data++)
	{
		printf("   %08u    %10s    %3d     %3d     %3d     %3d      %.2f\n", ap_data->num, ap_data->name, ap_data->kor, ap_data->eng, ap_data->math, ap_data->total, ap_data-> total / 3.0);
		sum += ap_data->total;
	}
	printf("--------------------------------------------------------------------\n");

	if (a_count > 0)
	{
		printf("     총   %d 명, 전체 평균  %.2f\n", a_count, sum / (a_count * 3.0));
		printf("--------------------------------------------------------------------\n");
	}
}




void SaveData(const char* ap_file_name, S_DATA* ap_data, unsigned int a_count)
{
	FILE* p_file = NULL;
	int i = 0;



	if (0 == fopen_s(&p_file, ap_file_name, "wt"))
	{
		fprintf(p_file, "id, name, korean, english, math, total, avg\n");
		for (unsigned int i = 0; i < a_count; i++, ap_data++)
		{
			fprintf(p_file, "%d,%s,%u,%u,%u,%u,%u\n", ap_data->num, ap_data->name, ap_data->kor, ap_data->eng, ap_data->math, ap_data->total, ap_data->total / 3.0);
		}
		printf("%s 파일에 데이터를 저장했습니다.\n", ap_file_name);
		fclose(p_file);
	}
}

int main()
{
	S_DATA data[30];
	unsigned int data_count = 0, select = 0;

	if (ReadData("score_data.csv", data, &data_count))
	{
		while (select != 3)
		{
			printf("\n ==================[ manu ] ==================\n");
			printf("1. show data\n");
			printf("2. save data\n");
			printf("3. exit program\n");


			printf("selection: ");
			if (1 == scanf("%u", &select))
			{
				printf("\n\n");
				if (select == 1)
				{
					ShowData(data, data_count);
				}
				if (select == 2)
				{
					SaveData("new_score_data.csv", data, data_count);
				}
			}
			else
			{
				printf("잘못된 수를 입력했습니다.");
			}
		}
	}
	else
	{
		printf("scores_data.csv file can't open.\n");
	}
	return 0;
}