## [팀 프로젝트]
<h4>날짜: 2020.05.18 | 작성자: 김주연 | Version: 1.0 </h4>
<hr>
<h3> 1. 요구사항 분석 </h3>
- 데이터 입력, 정렬 후 출력, 파일 출력
<br>
<hr>
<h3> 2. 구조 설계 </h3>
<h4> 1) 첫 번째 콘솔 입력창: 메뉴 생성 (입력/출력/파일출력/파일입력)</h4>

<h4> 2) 구조체 선언 및 생성 </h4>
- teamList: id(번호), team(팀 이름), company(회사)

<h4> 3) 기능(함수) </h4>
- menu: 메뉴 생성 <br>
- input: 데이터 입력 <br>
- sortingSelect: 정렬 선택 <br>
- printingList: 데이터 출력 <br>
- bubbleSorting: 데이터 정렬 <br>
- fileWriting: 파일 출력 <br>
- fileReading: 파일 읽기 <br>

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
  <td>park123(박123)</td>
  <td>nurdbana(너드바나)</td>
 </tr>
   </table>

<br>
<hr>
<h3> 4. 알고리즘 설계 및 구현 </h3>
<ul>
  <li>
<h4>데이터 입력 함수 알고리즘</h4>
 </li>
<img src="https://github.com/ksa-banana/C_Language/blob/master/TeamProject_20200518/image/15.png" width="40%" height="40%">
 <li>
<h4>정렬 함수 알고리즘: 버블정렬</h4>
 </li>
<img src="https://github.com/ksa-banana/C_Language/blob/master/TeamProject_20200518/image/14.png" width="70%" height="70%">
 <li>
<h4>출력 함수 알고리즘</h4>
 </li>
<img src="https://github.com/ksa-banana/C_Language/blob/master/TeamProject_20200518/image/13.png" width="50%" height="50%">
 <li>
 <h4>파일 쓰기 및 저장 함수 알고리즘</h4>
 </li>
<img src="https://github.com/ksa-banana/C_Language/blob/master/TeamProject_20200518/image/FC_fileWriting.png" width="50%" height="50%">
 <li>
<h4>파일 읽기 함수 알고리즘</h4>
 </li>
<img src="https://github.com/ksa-banana/C_Language/blob/master/TeamProject_20200518/image/FC_fileReading.png" width="50%" height="50%">
 </ul>
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
  <li><h4>정렬 기준 선택, 오름차순 선택</h4></li>
  <img src="https://github.com/ksa-banana/C_Language/blob/master/TeamProject_20200518/image/04.PNG" width="100%" height="100%">
  <li><h4>id를 기준으로 오름차순 선택</h4></li>
  <img src="https://github.com/ksa-banana/C_Language/blob/master/TeamProject_20200518/image/05.PNG" width="100%" height="100%">
   <li><h4>id를 기준으로 내림차순 선택</h4></li>
  <img src="https://github.com/ksa-banana/C_Language/blob/master/TeamProject_20200518/image/06.PNG" width="100%" height="100%">
 <li><h4>팀 이름을 기준으로 오름차순 선택</h4></li>
  <img src="https://github.com/ksa-banana/C_Language/blob/master/TeamProject_20200518/image/07.PNG" width="100%" height="100%">
  <li><h4>팀 이름을 기준으로 내림차순 선택</h4></li>
  <img src="https://github.com/ksa-banana/C_Language/blob/master/TeamProject_20200518/image/08.PNG" width="100%" height="100%">
 <li><h4>회사 이름을 기준으로 오름차순 선택</h4></li>
  <img src="https://github.com/ksa-banana/C_Language/blob/master/TeamProject_20200518/image/09.PNG" width="100%" height="100%">
  <li><h4>회사 이름을 기준으로 내림차순 선택</h4></li>
  <img src="https://github.com/ksa-banana/C_Language/blob/master/TeamProject_20200518/image/09.PNG" width="100%" height="100%">
   <li><h4>파일 출력 선택</h4></li>
  <img src="https://github.com/ksa-banana/C_Language/blob/master/TeamProject_20200518/image/10.PNG" width="50%" height="50%">
    <li><h4>파일 출력 결과</h4></li>
  <img src="https://github.com/ksa-banana/C_Language/blob/master/TeamProject_20200518/image/12.PNG" width="100%" height="100%">
 <li><h4>파일 입력 선택, 결과</h4></li>
 <img src="https://github.com/ksa-banana/C_Language/blob/master/TeamProject_20200518/image/11.PNG" width="50%" height="50%">
 </li>
</ul>
