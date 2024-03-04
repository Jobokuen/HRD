# HRD
c/c++ &amp; iot class

---
## 2024-02-22
---



---
## 2024-02-22
---

- 개요.
- gitHub 가입.
- gitHub  저장소생성.
- ubuntu  한글 설정
- VsCode 설치
- git 설치
- sudo su 
- git clone https://github.com/Jobokuen/HRD.git

 - window : install mysql workbench & community
 - rinux
    - '''sudo apt install mysql-serber'''
    - '''sudo snap install mysql-workbench-community'''
- rinux code
    ''' sudo mysql -u root -p'''

- chapter 01  데이터베이스 개론
    1. DB 특징 : 실시간접근, 계속변화, 동시공유가능, 내용참조가능
    2. 파일시스템 - db시스템 - web시스템 - 분산db시스템
    3. 문법 : select - form - where
    4. 개념적 구조 : 외부, 개념, 내부
    5. 데이터 독립성

- chapter 03 SQL 기초
    - create database;
    - maked third table(book, orders, customer)
    - insert into ... values(...)
    - 유저만들어서 권한설정
        - grant all privileges on. to 'root'@'localhost'identified by '1234'
    - windows cli 에서 textDB 생성

    ---
## 2024-02-23
    ---

- 데이터 조작어 검색(p.149-p.164)
     1. select 문법 : select (속성이름) from (테이블이동) where (검색조건)
     2. where 조건 : between, and, or, in, not in, like, '%', '__구%', 'order by', 'desc', 'asc'

- DDL : 테이블 구조     : create  /  drop
- DML : 테이블 데이터   : insert  / delete  / select
- DCL : 데이터 제어어   :  grant  / revoke

- - 데이터베이스 모델
 -> relation = table

 - 키(속성)
   - 슈퍼키(후보키(기본키))
   - 기본키(PK) : 중복x , Nudll X 
   - 외래키(FK)

- 무결성
  - 도메인 무결성
    - 도메인을 int 라 하였을 때 튜플의 값은 int여야 한다
  - 개체 무결성
    - PK가 NULL이면 안되고 하나만 있어야 한다.
  - 참조 무결성
    - FK, 자식릴레이션과 부모 릴레이션이 제약을 받는다

- 관계대수
 - 관계대수 연산자(p.96)

 - 

    ---
## 2024-02-26
    ---

- C 언어 연산자
  - 연산자(operater)
      - 산술(arithmetic) : +. -, *, /, %(나머지연산자)
        ex) 1(int)+2(int) = 3(int)    1.0(double)+2.0(double) = 3.0(double)
            1(int)+2.0(double) => (int->double) = 3.0(double)
            5(int)/9(int) = 0     5.0(double)/9.0(double) = 0.555---6

      - %(정수형연산자)
      ex) 1%3 = 1
      - 똑같은 수열
      - 주사위 패턴
        - int num = ?
        - int result = num % 6 + 1;     // (0,1,2,3,4,5,) + 1 = 1,2,3,4,5,6
      - 형식지정자 중복
        - %% (% 두 개로 사용)

      - 증감(incrementor, decrementor)
        - ++, -- : 정수연산, 정수형 변수(상수, double X)
            a + b : 이항연산자
            ++100 : 단항연산자
        - + : 기계어로 변환시 > ADD
        - ++: 기계어로 변환시 > INCRES
          ex) int a = 1;
              ++a;        // a = 2
              int a = 1;
              a++;        // a = 2

              int a = 1;
              int b = ++a;  // a = 2, b = 2
              int a = 1;
              int b = a++;  // a = 2, b = 1

            --> 식(expression)은 실행시간에 평가되면 하나의 결과값을 가진다

        - 치환(assigment) : =
          - 상수값을 왼쪽에 쓸 수 없다.
          - a = 5; > 치환식의 결과값은 5이다. side effect로 a변수가 5로 된다.

        - 비교/관계(compare) : <, >, <=, >=, ==, !=
          - true : 1(int)   / false : 0(int)  c언어는 (bool) 논리식 타입이 없다.
    ---   - [0, 9] : 0<= num 0>=9
## 2024-02-27
    ---

  - 비트연산자
      - 쉬프트 연산자 : << , >>
      - 오른쪽 밀 때는 부호비트가 채워진다.
      - 왼쪽은 0이 채워진다.
      - <<1 == x2     5*6 == 5<<2 + 5<<1
      ex)
          int a = 0x33;         // 0011 0011
          int b = a << 2;       // 1100 1100
          printf("0x%02y",b);   // 0xCC

          int a = 0x3c;         // 0011 1100
          int b = a >> 2;       // 0000 1111
          printf("0x%2y",b);    // 0x0F


    ---
## 2024-02-28
    ---
    - 주석문 안에 주석문을 사용할 수 없다

-  반복(loop)
  - 초기화            :  반복문이 실행되기 전에 실행
  - 조건 체크하는 부분 : 조건 확인하는 부분
  - 목적부분          : 임변화하는 부분

  -명령문
    - while
      ex) 1부터 10까지 중 짝수의 합
          int i = 1 ;
          int sum ;
          while(1 <= 10){
            sum = sum + i;
            i = i + 2;}
          printf("%d",sum); 
    - for
          int sum;
          for(int = 1 ; 1 <= 10 ; ++i>){
            sum = sum + i;
          }
          printf("%d",sum);
    - do_while

  - 배열(array)  vs 변수
    - 메모리상에 연속적으로 존재하는 같은 자료형의 data들
      - 같은 형으로 존재(int 중 double X)

    int num;
    int nums[5];          // 배열의 크기는 [0 ~ 4] -> [0 ~ n-1]
    
    num = 100;
    nums[0] = 100;        // 첫 번째 index는 0임
    nums[1] = 200;
    nums[4] = nums[1];
    ---
## 2024-02-29
    ---

  - make 명령어
    - Makefile
      - 한 번에 실행하고자 하는 명령어 파일
      - 여러 파일을 연쇄적으로 컴파일 하고자 할 때 사용
      - 변수를 사용하는 것이 가능
         - TAGET, "${TAGET}"
      - 제외하고 싶은 file를 설정할 수 있다.

    - Makefile 관련 명령어
      - touch Makefile       : Makefile 제작
      - make                 : Makefile 실행
      - make clean           : Makefile clean 설정 실행
      - TARGET = ''          : TARGET 설정
      - ${TARGET}            : TARGET 대체 내용 삽입
      - circle: $@           : circle.c
- 집계함수와 GROUP BY
  -집계함수
    -테이블의 각 열에 대해 계산하는 함수
        - sum, avg, count, max, min
  
  -GROUP BY
    - 속성값이 같은 값끼리 그룹을 만듦
    - HAVING
        -그룹을 제한하는 역할
    - 실행순서
        - SELECT > FROM > WHERE > GROUP BY > HAVING(집계함수)

- 두 개 이상의 테이블을 이용한 SQL 질의의

  - JOIN
    - 두 개 이상의 테이블을 결합하는 연산
        - FROM A, B, WHERE Pk = Fk (NULL X)
        - FROM A INNER JOIN B ON Pk = Fk
    - 아무런 조건 없이 SELECT > 관계대수의 카티션 프로덕트 연산
    - 특정 값으로 보기 위해 ORDER BY절 이용하여 정렬
    - 외부조인(outer join)
        - INNER JOIN(default) (NULL X) OUTER JOIN (NULL 0)
        - LEFT OUTER JOIN  /  RIGHT OUTER JOIN :관련 NULL을 제외할 수 있는 경우

  - 부속질의
    - 질의가 중첩되어 있다
    - WHERE 절에 SELECT문을 사용
        -ex) WHERE price = (SELECT max(price) FROM Book)
    - 상관부속질의
      - 부속질의 간에 상하관계가 있음
      - 상위 부속질의와 하위 부속질의가 독립적이지 않고 서로 관련을 맺고 있음
    
  - DDL(Data Definition Languate)
    - create문

  - DCL(Data Control Language)
    - insert문
    - update문
    - delete문

- SQL 내장함수
    - 상수나 속성 이름을 입력 값으로 받아 단일 값을 결과로 반환함
    - 모든 내장 함수는 사용될 때 유효한 입력 값을 받아야 함
    - SELECT절과 WHERE절 UPDATE절 등에서 모두 사용 가능
    - 주요내장함수
        - 단일행 함수(숫자, 문자, 날짜, 시간, 변환, 정보, NULL관련)
        - 집계함수
        - 윈도함수

  - 숫자함수
     - ABS, CEIL, FLOOR, ROUND, LOG, POWER, SQRT, SIGN
  
  - 문자함수
    - CONCAT, LOWER, LPAD, REPLACE, RPAD, SUBSTR, TRIM, UPPER, ASC||, LENGTH, CHAR_LENGTH
  
  - 날짜 시간함수
    - STR_TO_DATE, DATE_FORMAT, ADDDATE, DATE, DATEDIFF, SYSDATE
    - format의 주요 지정자
      - %d, %m, %Y
