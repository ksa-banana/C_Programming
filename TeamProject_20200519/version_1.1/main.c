#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>  
#include "studentP.h"

#define MAX 1024
#define DIR_SIZE 100


int main(void)
{
	//변수 선언
	int i = 0;
	int list_size = 0;
	int line_count = 0;
	FILE* fp;
	char *dir = "C:\\result\\서울반 교육생 명단_한국표준협회.csv";


	//파일 스트림 열기
	fp = fopen(dir, "r");


	//동적 할당할 파일 크기
	line_count = getFileSize(dir);

	//파일 크기에 맞는
	//메모리 동적 할당
	struct studentList* student_list = (struct studentList*)malloc(sizeof(struct studentList) * line_count);



	// 파일 읽어와 구조체에 저장
	for (i = 0; i < line_count; i++)
	{
		student_list[i] = fileLineReading(fp);
	}



	//전체 리스트 count
	i = 0;
	
	while (strcmp(student_list[i].leader, "") != 0) {
		list_size++;
		i++;
	}


	//메뉴 출력
	menu(student_list, list_size);

	


	//메모리 반환과 파일 스트림 닫기
	free(student_list);
	fclose(fp);

	return 0;
;
}