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
	//input data
	int i = 0;
	int list_size = 0;
	int line_count = 0;


	FILE* fp;
	char *dir = "C:\\result\\서울반 교육생 명단_한국표준협회.csv";


	//파일 열기
	fp = fopen("C:\\result\\서울반 교육생 명단_한국표준협회.csv", "r");


	//동적 할당할 파일 크기
	line_count = getFileSize(dir);

	//파일 저장할 구조체
	//동적 할당
	struct studentList* student_list = (struct studentList*)malloc(sizeof(struct studentList) * line_count);


	// 파일 읽기와 구조체에 저장
	for (i = 0; i < line_count; i++)
	{
		student_list[i] = fileLineReading(fp);
	}
	


	//fileList->leader = inputData()
	for (i = 0; i < 25; i++) {
		printf("%s", student_list[i].leader);
		printf("%s", student_list[i].company);
		printf("%s", student_list[i].name);
		printf("%s", student_list[i].email);
		printf("%s", student_list[i].school);
		printf("%s", student_list[i].major);
		printf("\n");
	}

	i = 0;
	
	while (strcmp(student_list[i].leader, "") != 0) {
		list_size++;
		i++;
	}
	





	//search
	int select_num = 0;
	char input[60];
	time_t t;
	char ans = 0;


	

	while (1) {

		//메뉴 호출
		select_num = menu();


		switch (select_num) {


		case 1:
			t = time(NULL);


			//검색 함수
			searchingLeader(student_list, list_size, t);


			//프로그램 종료
			printf("\n프로그램을 종료하시겠습니까?(y/n) : ");
			ans = getchar();

			if (ans == 'y')
			{
				free(student_list);
				fclose(fp);
				return 0;
			}

			break;

		case 2:
			//검색할 데이터 입력받기
			printf("\n검색하고자 하는 회사명을 입력해주세요.\n");
			scanf("%s", &input);
			getchar();
			t = time(NULL);


			//검색 함수
			searchingCompany(student_list, list_size, input, t);

		
			//프로그램 종료
			printf("\n프로그램을 종료하시겠습니까?(y/n) : ");
			ans = getchar();

			if (ans == 'y')
			{
				free(student_list);
				fclose(fp);
				return 0;
			}
				

			break;

		case 3:
			//검색할 데이터 입력받기
			printf("\n검색하고자 하는 이름을 입력해주세요.\n");
			scanf("%s", &input);
			getchar();
			t = time(NULL);


			//검색 함수
			searchingName(student_list, list_size, input, t);


			//프로그램 종료
			printf("\n프로그램을 종료하시겠습니까?(y/n) : ");
			ans = getchar();

			if (ans == 'y')
			{
				free(student_list);
				fclose(fp);
				return 0;
			}


			break;

		case 4:
			//검색할 데이터 입력받기
			printf("\n검색하고자 하는 E-mail을 입력해주세요.\n");
			scanf("%s", &input);
			getchar();
			t = time(NULL);


			//검색 함수
			searchingEmail(student_list, list_size, input, t);


			//프로그램 종료
			printf("\n프로그램을 종료하시겠습니까?(y/n) : ");
			ans = getchar();

			if (ans == 'y')
			{
				free(student_list);
				fclose(fp);
				return 0;
			}

			break;

		case 5:
			//검색할 데이터 입력받기
			printf("\n검색하고자 하는 학교를 입력해주세요.\n");
			scanf("%s", &input);
			getchar();
			t = time(NULL);


			//검색 함수
			searchingSchool(student_list, list_size, input, t);


			//프로그램 종료
			printf("\n프로그램을 종료하시겠습니까?(y/n) : ");
			ans = getchar();

			if (ans == 'y')
			{
				free(student_list);
				fclose(fp);
				return 0;
			}

			break;

		case 6:
			//검색할 데이터 입력
			printf("\n검색하고자 하는 전공을 입력해주세요.\n");
			scanf("%s", &input);
			getchar();
			t = time(NULL);


			//검색 함수
			searchingMajor(student_list, list_size, input, t);
			
			
			//프로그램 종료
			printf("\n프로그램을 종료하시겠습니까?(y/n) : ");
			ans = getchar();

			if (ans == 'y')
			{
				free(student_list);
				fclose(fp);
				return 0;
			}
				

			break;


		default:

			select_num = menu();
			break;
		}
	}


	free(student_list);
	fclose(fp);

	return 0;
;
}