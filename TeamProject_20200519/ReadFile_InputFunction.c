#define _CRT_SECURE_NO_WARNINGS
#define MAX 1024
#include <stdio.h>
#include <string.h>
#include <stdlib.h>  


struct studentList
{
	//int leader;
    char leader[20];
	char company[20];
	char name[20];
	char email[20];
	char school[30];
	char major[60];

};

// 함수 선언
// 파일 읽기
// 반환형: int
int fileReading(void);

// 데이터 토큰 구별 후 저장  
// arry[]: 자른 데이터 저장 배열
// ptr: 포인터
// 반환형: int
int retToken(char* arry[], char* ptr);

// 구조체에 데이터 저장
// 반환형: studentList의 포인터
struct studentList inputData(char arry[]);

// 전체 리스트 개수 반환

int main(void) {

    int list_Num = 0;
    list_Num = malloc(MAX * MAX);
    // 구조체 리스트 선언 -> 동적 할당을 어떻게 해야 할지? 
    struct studentList fileList[100];

    // 파일 읽기와 구조체에 저장
    fileReading();

    //fileList->leader = inputData()


}


// 함수 정의
// fileReading 함수: 파일을 읽는 함수
int fileReading(void) {

    // 파일 포인터 
    FILE* fp;

    int index = 0, data = 0;

    // 원본 데이터 포인터
    char* inp;

    // 버퍼 사이즈
    int buf_size = MAX * MAX;

    // 포인터
    char* ptr;

    // 문자열이 들어갈 배열 포인터
    char* arry[MAX];

    // 파일 열기
    //fp = fopen("C:\\result\\list2.csv", "r");
    fp = fopen("C:\\result\\서울반 교육생 명단_한국표준협회.csv", "r");

    // 크기 동적 할당
    inp = malloc(buf_size);


    // fgets: 문자열 입력
    while (fgets(inp, buf_size, fp)) {

        // 함수로 arry 배열의 주소와 입력받은 스트링을 전달. 
        index = retToken(arry, inp);

    }

    for (data = 0; data < index; data++) {

        printf("%s \n", arry[data]);

    }

    fclose(fp);

}

// retToken 함수: 토큰을 기준으로 데이터 절단
int retToken(char* arry[], char* inp) {

    int i = 0;

    // strtok()을 이용하여 문자열을 ';' 토큰을 기준으로 자름
    // char* ptr = strtok(inp, ";");
    char* ptr = strtok(inp, "??,\n");

    char line[60] = {NULL};

    while (ptr != NULL) {

        arry[i] = ptr;
        //ptr = strtok(NULL, ";");
        strcpy(line[i], arry[i]);
        ptr = strtok(NULL, "??,\n");

        i++;

    }
    inputData(line, i);
    return i;

}

// inputData 함수: 구조체에 데이터 저장
struct studentList inputData(char *line, int i) {

    struct studentList new_list = {NULL};
    char new_test[20] = {NULL};
    strcpy(new_test, line[0]);
    //newList.leader = arry[i-6];

    /**strcpy(new_list.leader, *arry[i - 6]);
    strcpy(new_list.company, *arry[i-6 + 1]);
    strcpy(new_list.name, *arry[i - 6 + 2]);
    strcpy(new_list.email, *arry[i - 6 + 3]);
    strcpy(new_list.school, *arry[i - 6 + 4]);
    strcpy(new_list.major, *arry[i - 6 + 5]);**/

   // strcpy(new_list.leader, new_arry[i - 6]);
   // *new_list.company = new_arry[i - 6 + 1];
   // *new_list.name = new_arry[i-6 + 2];
   // *new_list.email = new_arry[i-6 + 3];
   // *new_list.school = new_arry[i + 4];
   // *new_list.major = new_arry[i + 5];

    return new_list;

}