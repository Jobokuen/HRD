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
          - [0, 9] : 0<= num <=9
          - [0, 9) : 0<= num < 9

        - 논리(logical) : &&(and)  ||(or)  !(not)
          - (식1) && (식2)
            - 1 && 1 -> 1(int)  / 1&&0 -> 0(int)
            - 1 || 0 -> 1(int)  / 0&&0 -> 0(int)
          - 0<= num <= 9 : (이항연산자에 대한 충돌)
            -> 0<= num && num <= 9
          - shot-cut circuit
            - 0 && (식)
        
            

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
    ---
## 2024-03-05

- 다차원 배열
  - 2차원배열(array of array)
    - int m[3][4];
      - m: m[0][0] m[0][1]m[0][2]m[0][3]
           m[1][0] m[1][1]m[1][2]m[1][3]
           m[2][0] m[2][1]m[2][2]m[2][3]

- 포인터(pointer)
  - 주소 값을 저장하는 변수(중요)
  - 포인터는 반드시 대상을 가리키고 역 참조해야 한다.
  - * (포인터) : 포인터가 가리키는 대상(역참조(deferemce))
  - & (변수)   : 변수에 '시작' 주소 값.
    int a;
    int *p;
    a = 100;
    p = &a;
    *p = 200;
    printf("%d",a);   // a == 200

  - int *   vs  char *
    - 포인터가 가리키는 대상의 타입
       int a = 0x12345678;
       char *p;
       p = &a;
       printf("%x",*p)    // p == 12(big-endian) or p == 78(little-endian)

- 다중포인터
  - 이중포인터 : 단일포인터를 가리키는 포인터
    int a;
    int *pa;
    int **ppa;
    a = 100;
    pa = &pa;
    **ppa = 200;
    printf("%d",a);   // a == 200
  - 이중포인터에 주된 용도는 단일포인터를 element로 쓰는 경우이다.
  - 이차원 배열과 관린여 없다.

- 함수포인터
 - 특정 연산을 실행 시킬 수 있다.
    int add(int a, int b)
    {
      return a+b;
    }
    int substract(int a, int b)
    {
      return a-b;
    }
    int (*fp)(int,int);
    fp = &add;
    int re = (*fp)(4,3);      // re == 7
    fp &substract;
    int re = (*fp)(5,3)       // re == 2

- void 포인터
  - 포괄형(generic) pointer
  - 순수하게 주소 값을 저장하는 용도
    int a = 100;        double d = 3.4;
    void *p;            void *p;
    p = &a;  // (int)   p = %d;   // (double)
  - 역 참조를 할 수 없다.
      - 타임캐스팅 이후에 역 참조를 한다.
      *(int*)p = 200;     *(double*) = 2.718;

- pointer&array(중요)
  1. 배열이름이 식에서 사용되면 첫 번째 element의 시작주소를 의미한다
  2. 포인터의 '+1'은 다음 element를 의미한다
  3. 배열은 포인트 식으로 포인트는 배열 식으로 사용할 수 있다.

- 함수(function)
  - 반복되는 코드를 줄이기 위해서(procedure subrutine + 인자 -> 함수)
  - 사용자 정의 연산(user defined operator)

    ---
## 2024-03-06
--- 프로세스 구성 및 stack 영역 그림 경우 C.hwp - p.24 참조

- 인자전달, 변수의 종류, c파일을 헤더파일로 분리.

    - 함수의 인자로 포인터를 쓰는 이유
      1. 호출하는 쪽에 있는 변수 값을 호출 당하는 쪽에 바꿔주엉 할 때.(swap2.c)
      2. 배열을 인자로 전달할 때
    
    - global var vs local var vs static*
      - global var
        - 모든 함수의 접근 가능
        - 프로그램 시작할 때 공간이 만들어지고 끝날 때 사라짐
        - 아도이노 펌웨어 프로그램 제작할 때 사용
      - local var
        - 함수 블록 안에서 사용가능
        - 함수 시작할 때 ~ 끝날 때
        - 초기화 X
      - static global var
        - main함수에 들어가지 않게 할 시 (rand.c)
        - C파일 안에서만 접근 가능
        - 프로그램 시작할 때 ~ 끝날 때
        - 초기화 O
      - static local var
        - 전역변수인데 특정함수 하나만 사용할 시(serial.c)
        - 특정 함수 안에서 사용 가능
        - 프로그램 시작할 때 ~ 끝날 때
        - 초기화 O
    
    - 함수 사용 시
      - 함수 선언 또는 정의가 되어야 한다.
      - 함수 선언이 되어있으면 어디선가 함수가 정의되어있다.
        - 같은 파일 안에 있을 수 있고 다른 파일에 있을 수 있다.
      
    - 여러가지 c 파일을 한번에 link하는 방법

      cc -c rand.c
      cc -c main.c
      cc -o testRand rand.o main.o

      gedit rand.h                  // 함수선언
      #include "rand.h"             // "" -> directory 안에 있는 내용

    - 처리단계
        -  전처리 > (.i) > compile > (object file)s > link > (실행file)

    - .h 파일에 들어가는 코드 : include를 한번만 하기 위해 사용하는 코드

      #ifndef RAND_H        // RAND_H가 정의되어 있지 않으면
      #define RAND_H 
      ...
      #endif

    
## 2024-03-11
--- 구조체, 문자열

  - 구조체
    - 사용자 정의 자료형 : user-defined type
    - 복합형 : compound type
      - 논리적으로 관련된 data를 compound 하기 위해서
      - ex. 날짜(년,월,일)
      - struct date{
          int year;
          int month;
          int day;
        };
      - struct date today;    // today |2024|   3|  11|

      - int i = 100;
        today.year = 2024;          int t_year, t_month, t_day;
        today.month = 3;            t.year = 2024;
        today.day = 11;             t.month = 3;
                                    t. day = 11;
        temp = today;
                                    int tewp_year, tewp_month, tewp_day
                                    t.year = t_year;
                                    t.month = t_month;
                                    t.day = t_day;

      - 초기화를 할 때 배열처럼 사용할 수 있다.
        - struct date birthday = {2024,8,2};

    - 구조체의 정의는 헤더 파일로 한다.

  - 함수의 인자로 포인터를 쓰는 이유
    - 3. 구조체 자료를 인자로 전달할 때
      - overhead를 줄이기 위해서
      - 우선순위 : * < ,
      // printDate(today);
      printDate(&today);
      void printDate(struct date d){
        printf("%d%d%d"), d.year, d.month, d.day);
      }
      -> struct date *pd
      -> (*pd).year, (*pd).month, (*pd.day)
      = pd->year, pd->month, pd->day
    
    - 4. 사용자 정의 연산을 인자로 전달할 때 함수 포인터를 사용한다.
    - 5. 임의의 인자를 전달할 때, void*를 사용한다.

  - 문자열(string)
    - 문자열
      - c언어에서 마지막 제어문자 \0이 존재한다.
       char str[] = {'h'}

## 2024-03-18
--- 타이머, 카운터

  - 클럭
    - 클럭 세는 것 자체가 카운터
    - 클럭을 카운트 해주는 것이 타이머
    - 서로 다른 시스템을 사용할 때 시간이 동기화를 하기 위해
    - 정확한 시간 측정이 필요할 때 타이머 사용
  
  - 카운터
    - 시간에 대한 기준이 없음
    - 외부에서 들어오는 신호를 카운팅 하는 장치

  - 타이머
    - MCU 내부 클럭을 세는 장치
    - F = 1/T

  - 주기
    - 0에서 1까지 오르 내리는 기간
  
  - 프리스케일러
    - 주파수를 나눠주는 분주기

  - Timer/Count
    - ouput compare
      0번에서 특정 값까지 갔을 때 기간
    - overflow
      특정 값에서 끝에까지 갔을 때 기간
    - 인터럽트 발생 시
      - 특정 번지(인터럽트 벡터번지_이중벡터)로 이동

  - PWD(Pulse Width Modulation
    - Duty : 0일 때의 시간과 1일 때의 시간이 다름
    - 파형의 DC 성분이 2.5Vdlek
    - 펄스 폭을 조절하여 DC성분을 바꿀 수 있다.