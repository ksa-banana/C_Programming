## [팀 프로젝트]
<h4>날짜: 2020.05.18 | 작성자: 김주연 | Version: 1.0 </h4>
<hr>
<h3> 1. 요구사항 분석 </h3>
- 데이터 입력, 정렬 후 출력
<br>
<hr>
<h3> 2. 구조 설계 </h3>
<h4> 1) 첫 번째 콘솔 입력창: 메뉴 생성 (①입력 ②정렬)</h4>

<h4> 2) 구조체 선언 및 생성 </h4>
- teamList: id(번호), team(팀 이름), company(회사)

<h4> 3) 기능(함수) </h4>
- menu: 메뉴 생성 <br>
- input: 데이터 입력 <br>
- sortingSelect: 정렬 선택 <br>
- printingList: 데이터 출력 <br>
- bubbleSorting: 데이터 정렬 -> 버블 알고리즘 <br>

<h4> 4) main.c : 위의 함수의 전체 흐름 정리 </h4>
<hr>
<h3> 3. 입출력 데이터 정의 </h3>
 - 데이터 종류: 번호(id), 팀 이름(team), 회사(company) <br>
 - 입력: 기본 입력은 아래 표와 같다.
<br>
<table>
 <tr>
  <th>번호</th>
  <th>팀 이름</th> 
  <th>회사</th>
  </tr>
 
 <tr>
  <td>1</td>
  <td>horangnavi(호랑나비)</td>
  <td>navilab(나비랩)</td>
 </tr>
 
  <tr>
  <td>2</td>
  <td>machinegun(머신건)</td>
  <td>5works</td>
 </tr>
 
  <tr>
  <td>3</td>
  <td>megaton(메가톤)</td>
  <td>megazone(메가존)</td>
 </tr>
 
   <tr>
  <td>4</td>
  <td>dd</td>
  <td>vitec(VITEC)</td>
 </tr>
 
  <tr>
  <td>5</td>
  <td>banana</td>
  <td>monkeysoft(몽키소프트)</td>
 </tr>
 
  <tr>
  <td>6</td>
  <td>park123</td>
  <td>nurdbana(너드바나)</td>
 </tr>
   </table>

<br>
<hr>
<h3> 4. 알고리즘 설계 및 구현 </h3>
<h4>- 정렬 함수 알고리즘: 버블정렬</h4>

<h4>- 출력 함수 알고리즘</h4>

  <img src="https://github.com/ksa-banana/C_Language/blob/master/TeamProject_20200518/image/13.png" width="80%" height="60%">
<br>
input : list, 정렬 순서, 리스트 사이즈<br>
output : 프린트문<br><br>
i. 오름차순으로 정렬하고자 할때<br>
- for문을 활용하여 0부터 마지막 리스트 인덱스까지 id, team, company를 차례로 출력한다. 
<br>
ii. 내림차순으로 정렬하고자 할때<br>
- for문을 활용하여 마지막 리스트 인덱스부터 0까지 역순으로 id, team, company를 차례로 출력한다. 
<br>

<br>
<hr>
<h3> 5. coding 및 테스트 </h3>
<ul>
 <li>
<h4><a href="https://github.com/ksa-banana/C_Language/tree/master/TeamProject_20200518/version_01">프로젝트</a></h4>
 </li>
 <li><h4>첫 번째 출력화면</h4></li>
  <img src="https://github.com/ksa-banana/C_Language/blob/master/TeamProject_20200518/image/01.PNG" width="50%" height="50%">
  <li><h4>입력 선택, 데이터 입력</h4></li>
  <img src="https://github.com/ksa-banana/C_Language/blob/master/TeamProject_20200518/image/02.PNG" width="50%" height="50%">
  <li><h4>정렬 선택, 정렬 기준 </h4></li>
  <img src="https://github.com/ksa-banana/C_Language/blob/master/TeamProject_20200518/image/03.PNG" width="50%" height="50%">
  <li><h4>오름차순 또는 내림차순 선택 </h4></li>
  <img src="https://github.com/ksa-banana/C_Language/blob/master/TeamProject_20200518/image/04.PNG" width="50%" height="50%">
  <li><h4>id를 기준으로 오름차순 선택</h4></li>
  <img src="https://github.com/ksa-banana/C_Language/blob/master/TeamProject_20200518/image/05.PNG" width="100%" height="100%">
   <li><h4>id를 기준으로 내림차순 선택</h4></li>
  <img src="https://github.com/ksa-banana/C_Language/blob/master/TeamProject_20200518/image/06.PNG" width="100%" height="100%">
 </li>
</ul>
