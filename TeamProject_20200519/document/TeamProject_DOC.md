## [팀 프로젝트]
<h4>날짜: 2020.05.20 | 작성자: 강나래 | Version: 1.0 </h4>
<hr>
<h3> 1. 요구사항 분석 (Requirement Analysis) </h3>
<h4>- 데이터 파일 읽고 구조체에 저장, 데이터 검색, 검색 결과 파일 출력</h4>
<br>
<h3> 2. 구조 설계 (Structure Design)</h3>
<h4> 1) 첫 번째 콘솔 입력창: 메뉴 생성 (조장 검색/기업 검색/이름 검색/이메일 검색/학교 검색/전공 검색)</h4>

<h4> 2) 구조체 선언 및 생성 </h4>
<h5>- studentList: leader(조장 여부), company(회사), name(이름), email(이메일), school(학교), major(전공)</h5>

<h4> 3) 기능(함수) </h4>
<h5>- menu: 메뉴 생성 </h5>
<h5>- fileReading: 파일 읽기 </h5>
<h5>- retToken: 토큰으로 데이터 자르기 </h5>
<h5>- inputData: 데이터 record 출력 </h5>
<h5>- searchingLeader: 조장컬럼 검색 </h5>
<h5>- searchingCompany: 기업 컬럼 검색 </h5>
<h5>- searchingName: 이름 컬럼 검색 </h5>
<h5>- searchingEmail: 이메일 컬럼 검색 </h5>
<h5>- searchingSchool: 학교 컬럼 검색 </h5>
<h5>- serachingMajor: 전공 컬럼 검색 </h5>
<h5>- logFileWrithing: 파일 출력 </h5>

<h4> 4) studnetP.h : 구조체 선언, 함수 선언  </h4>
<h4> 5) studentP.c : 함수 정의, include studnetP.h </h4>
<h4> 6) main.c : studentP.c 함수 호출, 전체 흐름 알고리즘 </h4>
<br>
<hr>
<h3> 3. 입력/출력 데이터 정의 (Data Structure Design) </h3>
<h4> - 데이터 종류: leader(조장 여부), company(회사), name(이름), email(이메일), school(학교), major(전공), time(시간) </h4> 
<h4> - 입력: 주어진 엑셀 파일 데이터는 아래 표와 같다.(dummy data) </h4> 
<br>
<table>
 <tr>
  <th>조장 여부</th>
  <th>배정 기업</th> 
  <th>이름</th>
  <th>이메일</th>
  <th>학교</th>
  <th>전공</th>
  </tr>
 
 <tr>
  <td>조장</td>
  <td>horangnavi(호랑나비)</td>
  <td>navilab(나비랩)</td>
  <td></td>
  <td></td>
  <td></td> 
 </tr>
 
 <tr>
  <td>2</td>
  <td>machinegun(머신건)</td>
  <td>5works</td>
  <td></td>
  <td></td>
  <td></td> 
 </tr>
 
 <tr>
  <td>3</td>
  <td>megaton(메가톤)</td>
  <td>megazone(메가존)</td>
  <td></td>
  <td></td>
  <td></td> 
 </tr>
 
 <tr>
  <td>4</td>
  <td>dd</td>
  <td>vitec(VITEC)</td>
  <td></td>
  <td></td>
  <td></td>
 </tr>
 
 <tr>
  <td>5</td>
  <td>banana</td>
  <td>monkeysoft(몽키소프트)</td>
  <td></td>
  <td></td>
  <td></td> 
 </tr>
 
 <tr>
  <td>6</td>
  <td>park123(박123)</td>
  <td>nurdbana(너드바나)</td>
  <td></td>
  <td></td>
  <td></td> 
 </tr>
   </table>

<br>
<hr>
<h3> 4. 알고리즘 설계 및 구현 </h3>
<ul>
  <li>
<h4>데이터 파일 입력 함수 알고리즘</h4>
 </li>
<img src="" width="50%" height="50%">
 <li>
<h4>토큰 함수 알고리즘</h4>
 </li>
<img src="" width="50%" height="50%">
 <li>
<h4>데이터 record 출력 함수 알고리즘</h4>
 </li>
<img src="" width="50%" height="50%">
 <li>
<h4>데이터 검색 함수 알고리즘: 회사명 검색</h4>
 </li>
<img src="" width="50%" height="50%">
 <li>
<h4>데이터 파일 추력 함수 알고리즘</h4>
 </li>
<img src="" width="50%" height="50%">
 </ul>
<br>

<br>
<hr>
<h3> 5. coding 및 테스트 </h3>

