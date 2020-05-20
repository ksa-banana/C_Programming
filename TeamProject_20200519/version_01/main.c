#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "studentP.h"

#define MAX 1024

void main(void)
{
	//input data
	int list_Num = 0;
	list_Num = malloc(MAX * MAX);
	// 구조체 리스트 선언 -> 동적 할당을 어떻게 해야 할지? 
	struct studentList fileList[100];

	// 파일 읽기와 구조체에 저장
	struct studentList *student_list = fileReading();

	int select_num = 0;
	char input[60];
	int list_size = 2;
	time_t t;

	while (1) {

		select_num = menu();

		switch (select_num) {

		case 0:

			select_num = menu();
			break;

		case 1:
			t = time(NULL);
			searchingLeader(student_list, list_size, t);
			break;

		case 2:

			printf("검색하고자 하는 회사명을 입력해주세요.\n");
			scanf("%s", &input);
			t = time(NULL);
			searchingCompany(student_list, list_size, input, t);
			break;

		case 3:

			printf("검색하고자 하는 이름을 입력해주세요.\n");
			scanf("%s", &input);
			t = time(NULL);
			searchingName(student_list, list_size, input, t);
			break;

		case 4:

			printf("검색하고자 하는 E-mail을 입력해주세요.\n");
			scanf("%s", &input);
			t = time(NULL);
			searchingEmail(student_list, list_size, input, t);
			break;

		case 5:

			printf("검색하고자 하는 학교를 입력해주세요.\n");
			scanf("%s", &input);
			t = time(NULL);
			searchingSchool(student_list, list_size, input, t);
			break;

		case 6:

			printf("검색하고자 하는 전공을 입력해주세요.\n");
			scanf("%s", &input);
			t = time(NULL);
			searchingMajor(student_list, list_size, input, t);
			break;


		default:

			select_num = menu();
			break;
		}
	}
	return 0;
	

	return 0;
}