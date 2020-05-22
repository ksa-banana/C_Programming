#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>  
#include "studentP.h"

#define MAX 1024
#define COL 6



int menu()
{
	int num = 0;
	printf("원하시는 메뉴를 선택해주세요\n");
	printf("1. 조장 검색\n");
	printf("2. 회사명 검색\n");
	printf("3. 이름 검색\n");
	printf("4. Email 검색\n");
	printf("5. 학교 검색\n");
	printf("6. 전공 검색\n");
	scanf("%d", &num);
	getchar();

	return num;
}


//파일 라인 크기를 반환하는 함수
int getFileSize(char* dir)
{
	//변수 선언
	FILE* fp = fopen(dir, "r");
	char* str = 0 ;
	int buf_size = MAX * MAX;
	int line_count = 0;

	// 크기 동적 할당
	str = (char*)malloc(buf_size);

	//동적 할당에 사용할 파일 크기 측정
	while (fgets(str, buf_size, fp)) {

		line_count++;

	}

	free(str);
	fclose(fp);
	return line_count;

}


// 함수 정의
// fileReading 함수: 파일을 읽는 함수
struct studentList fileLineReading(FILE* fp) {

	//변수 선언
	// 원본 데이터 포인터
	char* str;

	// 버퍼 사이즈
	int buf_size = MAX * MAX;

	// 포인터
	char* ptr;

	int line_count = 0;


	int i = 0;

	//파일 열기
	//fp = fopen(dir, "r");


	// 크기 동적 할당
	str = (char*)malloc(buf_size);
	

	//반환할 데이터 목록
	struct studentList line;


	ptr = fgets(str, buf_size, fp);
	//getchar();
	line = retToken(ptr);



	free(str);

	return line;

}

// retToken 함수: 토큰을 기준으로 데이터 절단
struct studentList retToken(char* ptr) {

	int i = 0;

	// strtok()을 이용하여 문자열을 ';' 토큰을 기준으로 자름
	// char* ptr = strtok(inp, ";");
	char* ptoken = strtok(ptr, "??,\n");
	char* line[COL] = { NULL };
	struct studentList list_line;



	while (ptoken != NULL) {

		//arry[i] = ptr;

		if (i == 0 && (strcmp(ptoken, "조장") != 0) && strcmp(ptoken, "조장 여부") != 0) {
			line[0] = "조원";
			line[i + 1] = ptoken;
			/*
			strcpy(line[0], "조원");
			strcpy(line[i + 1], token);
			*/
		}
		else if (i == 0 && strcmp(ptoken, "조장") == 0 || strcmp(ptoken, "조장 여부") == 0) {
			line[i] = ptoken;
		}
		else if (strcmp(line[0], "조원") == 0) {
			line[i + 1] = ptoken;
			//strcpy(line[i + 1], token);
		}
		else {
			line[i] = ptoken;
			//strcpy(*line[i], token);
		}

		ptoken = strtok(NULL, "??,\"\n");

		i++;

	}


	list_line = inputData(line);

	return list_line;
}



// inputData 함수: 구조체에 데이터 저장
struct studentList inputData(char** line) {


	struct studentList list_line;


	strcpy(list_line.leader, line[0]);
	strcpy(list_line.company, line[1]);
	strcpy(list_line.name, line[2]);
	strcpy(list_line.email, line[3]);
	strcpy(list_line.school, line[4]);
	strcpy(list_line.major, line[5]);


	return list_line;
}






void searchingLeader(struct studentList* student_list, int list_size, time_t t) {

	int count = 0;
	int i, j = 0;

	for (int i = 0; i < list_size; i++) {

		if (strcmp(student_list[i].leader, "조장") == 0) {
			count++;
		}
	}

	if (count == 0)
		printf("결과가 없습니다.\n");



	//검색 결과를 저장할
	//메모리 동적 할당
	struct studentList* result_list = (struct studentList*) malloc(sizeof(struct studentList) * count);

	for (i = 0; i < list_size; i++) {

		if (strcmp(student_list[i].leader, "조장") == 0) {

			strcpy(result_list[j].leader, student_list[i].leader);
			strcpy(result_list[j].company, student_list[i].company);
			strcpy(result_list[j].name, student_list[i].name);
			strcpy(result_list[j].email, student_list[i].email);
			strcpy(result_list[j].school, student_list[i].school);
			strcpy(result_list[j].major, student_list[i].major);

			j++;
		}
	}


	//검색 결과 출력
	searchResultPrintf(result_list, count);


	//파일 출력
	fileWriting(result_list, t, count);


	//메모리 반환
	free(result_list);
}

void searchingCompany(struct studentList* student_list, int list_size, char *input, time_t t) {

	int count = 0;
	int i, j = 0;

	for (int i = 0; i < list_size; i++) {

		if (strcmp(student_list[i].company, input) == 0) {
			count++;
		}
	}

	if (count == 0)
		printf("결과가 없습니다.\n");

	struct studentList* result_list = (struct studentList*) malloc(sizeof(struct studentList) * count);


	for (i = 0; i < list_size; i++) {

		if (strcmp(student_list[i].company, input) == 0) {

			strcpy(result_list[j].leader, student_list[i].leader);
			strcpy(result_list[j].company, student_list[i].company);
			strcpy(result_list[j].name, student_list[i].name);
			strcpy(result_list[j].email, student_list[i].email);
			strcpy(result_list[j].school, student_list[i].school);
			strcpy(result_list[j].major, student_list[i].major);
			
			j++;
		}
	}

	
	//검색 결과 출력
	searchResultPrintf(result_list, count);

	//파일 출력
	fileWriting(result_list, t, count);

	//메모리 반환
	free(result_list);
}

void searchingName(struct studentList* student_list, int list_size, char *input, time_t t) {

	int count = 0;
	int i, j = 0;

	for (int i = 0; i < list_size; i++) {

		if (strcmp(student_list[i].name, input) == 0) {
			count++;
		}
	}

	if (count == 0)
		printf("결과가 없습니다.\n");

	struct studentList* result_list = (struct studentList*) malloc(sizeof(struct studentList) * count);

	for (i = 0; i < list_size; i++) {

		if (strcmp(student_list[i].name, input) == 0) {

			strcpy(result_list[j].leader, student_list[i].leader);
			strcpy(result_list[j].company, student_list[i].company);
			strcpy(result_list[j].name, student_list[i].name);
			strcpy(result_list[j].email, student_list[i].email);
			strcpy(result_list[j].school, student_list[i].school);
			strcpy(result_list[j].major, student_list[i].major);

			j++;

		}
	}

	//검색 결과 출력
	searchResultPrintf(result_list, count);

	//파일 출력
	fileWriting(result_list, t, count);

	//메모리 반환
	free(result_list);
}

void searchingEmail(struct studentList* student_list, int list_size, char *input, time_t t) {

	int count = 0;
	int i, j = 0;

	for (int i = 0; i < list_size; i++) {

		if (strcmp(student_list[i].email, input) == 0) {
			count++;
		}
	}

	if (count == 0)
		printf("결과가 없습니다.\n");

	struct studentList* result_list = (struct studentList*) malloc(sizeof(struct studentList) * count);

	for (i = 0; i < list_size; i++) {

		if (strcmp(student_list[i].email, input) == 0) {

			strcpy(result_list[j].leader, student_list[i].leader);
			strcpy(result_list[j].company, student_list[i].company);
			strcpy(result_list[j].name, student_list[i].name);
			strcpy(result_list[j].email, student_list[i].email);
			strcpy(result_list[j].school, student_list[i].school);
			strcpy(result_list[j].major, student_list[i].major);

			j++;
		}
	}

	//검색 결과 출력
	searchResultPrintf(result_list, count);

	//파일 출력
	fileWriting(result_list, t, count);

	//메모리 반환
	free(result_list);
}

void searchingSchool(struct studentList* student_list, int list_size, char *input, time_t t) {

	int count = 0;
	int i, j = 0;

	for (int i = 0; i < list_size; i++) {

		if (strcmp(student_list[i].school, input) == 0) {
			count++;
		}
	}

	if (count == 0)
		printf("결과가 없습니다.\n");

	struct studentList* result_list = (struct studentList*) malloc(sizeof(struct studentList) * count);

	for (i = 0; i < list_size; i++) {

		if (strcmp(student_list[i].school, input) == 0) {

			strcpy(result_list[j].leader, student_list[i].leader);
			strcpy(result_list[j].company, student_list[i].company);
			strcpy(result_list[j].name, student_list[i].name);
			strcpy(result_list[j].email, student_list[i].email);
			strcpy(result_list[j].school, student_list[i].school);
			strcpy(result_list[j].major, student_list[i].major);

			j++;
		}
	}

	//검색 결과 출력
	searchResultPrintf(result_list, count);

	//파일 출력
	fileWriting(result_list, t, count);

	//메모리 반환
	free(result_list);
}



//전공 검색 함수
void searchingMajor(struct studentList* student_list, int list_size, char *input, time_t t) 
{
	//변수 선언
	int count = 0;
	int i, j = 0;

	for (int i = 0; i < list_size; i++) {

		if (strcmp(student_list[i].major, input) == 0) {
			count++;
		}
	}

	if (count == 0)
		printf("결과가 없습니다.\n");


	//검색 결과 크기에 맞는
	//메모리 동적 할당
	struct studentList* result_list = (struct studentList*) malloc(sizeof(struct studentList) * count);

	for (i = 0; i < list_size; i++) {

		if (strcmp(student_list[i].major, input) == 0) {

			strcpy(result_list[j].leader, student_list[i].leader);
			strcpy(result_list[j].company, student_list[i].company);
			strcpy(result_list[j].name, student_list[i].name);
			strcpy(result_list[j].email, student_list[i].email);
			strcpy(result_list[j].school, student_list[i].school);
			strcpy(result_list[j].major, student_list[i].major);

			j++;
		}
	}


	//검색 결과 출력
	searchResultPrintf(result_list, count);


	//파일 출력
	fileWriting(result_list, t, count);


	//메모리 반환
	free(result_list);
}



//검색 결과 출력 함수
void searchResultPrintf(struct studentList *result_list, int count)
{
	//변수 선언
	int i = 0;


	//검색 결과를 출력하는 반복문
	for (i; i < count; i++)
	{
		printf("\n%s %s %s %s %s %s\n", result_list[i].leader, result_list[i].company, result_list[i].name, result_list[i].email, result_list[i].school, result_list[i].major);
	}
}



//파일 출력 함수
void fileWriting(struct studentList *list, time_t time, int count)
{
	//변수 선언
	FILE* ofp;
	int i= 0;


	//출력할 파일
	ofp = fopen("C:\\result\\result.txt", "w");

	if (ofp == NULL)
	{
		printf("출력 파일을 열지 못했습니다\n");
	}


	//검색한 결과와 검색시간을
	//파일로 출력
	for (i = 0; i < count; i++)
	{
		fprintf(ofp, "%s %s %s %s %s %s %s\n", list[i].leader, list[i].company, list[i].name, list[i].email, list[i].school, list[i].major, ctime(&time));

	};

	//포인터 반환
	fclose(ofp);
}