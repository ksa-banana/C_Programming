## [팀 프로젝트]
<h4>날짜: 2020.05.20 | 작성자: 강나래 | Version: 1.0 </h4>
<hr>
<h3> 1. 요구사항 분석 </h3>
- 데이터 파일 입력 후 검색, 검색 결과 출력
<br>
<hr>
<h3> 2. 구조 설계 </h3>
<h4> 1) 첫 번째 콘솔 입력창: 메뉴 생성 (조장 검색/기업 검색/이름 검색/이메일 검색/학교 검색/전공 검색)</h4>

<h4> 2) 구조체 선언 및 생성 </h4>
- studentList: leader(조장 여부), company(회사), name(이름), email(이메일), school(학교), major(전공)

<h4> 3) 기능(함수) </h4>
- menu: 메뉴 생성 <br>
- fileReading: 파일 읽기 <br>
- retToken: 토큰으로 데이터 자르기 <br>
- inputData: 데이터 record 출력 <br>
- searchingLeader: 조장컬럼 검색 <br>
- searchingCompany: 기업 컬럼 검색 <br>
- searchingName: 이름 컬럼 검색 <br>
- searchingEmail: 이메일 컬럼 검색 <br>
- searchingSchool: 학교 컬럼 검색 <br>
- serachingMajor: 전공 컬럼 검색 <br>
- logFileWrithing: 파일 출력 <br>

<h4> 4) main.c : 위의 함수의 전체 흐름 정리 </h4>
<hr>
<h3> 3. 입출력 데이터 정의 </h3>
 - 데이터 종류: leader(조장 여부), company(회사), name(이름), email(이메일), school(학교), <br>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;major(전공), time(시간) 
 - 입력: 기본 입력은 아래 표와 같다. (dummy data)
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

