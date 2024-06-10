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
        printf("%d%d%d", d.year, d.month, d.day);
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

## 2024-03-19
--- interrupt(SIGNAL) / keyboard(input)_function_get() : system call 기능 / update file

- doxygen 사용을 통한 문서화 작업
  - doxywizard 설치
  - doxygen GUI 설정 

- 게임 환경 만들기
  - 게임제작
  - cmake를 통한 buliding
  - CPack 사용을 통해 배포
  - 제작 이후 update관리

- 게임제작
  - 조건에 맞는 파일 배분(main.c, display_*.c, display_tetris.h, update.c)

- cmake를 통한 빌딩
  - cmake의 최소 버전 지정
  - src 디렉토리에 있는 파일을 검색 후 컴파일 하여 실행파일을 생성
  - 빌드된 실행파일을 디렉토리, 헤더파일, 소스파일 설치
  - setting cpack

- CPack
  - 표준화된 패키징
  - 간편한 배포
  - 의존성 관리
  - 프로젝트 유지보수의 용의성
  - 자동화된 빌드 시스템 통합

  
  ## 2024-03-26
--- what is the Linux command , C++(cout, cin, using, namespace)

  - Linux
    - 도움말 : -h / --help
      - ex) ls -h
    - rm -rf , mkdir, cc -S ...

    - C++ compile : g++
      - 실행파일 확인 ls -l 
      - /usr/bin/ : path 실행
  
  - Visual Studio Code
    - build : 빌드작업실행(컴파일 및 빌드)
      - ex. /usr/bin/g++ -fdiagnostics-color=always -g /home/hrd/hrd/HRD/cpp_src/02_chapter/EX2_5.cpp -o /home/hrd/hrd/HRD/cpp_src/02_chapter/EX2_5

  - C++
    - << 연산자 : operator overloading
    - std:: > cout, cin 등
    - using namespace : 주소록
    - 문자열과 문자 배열 : NULL의 유무

  ## 2024-03-26
--- C 심화 복습
  - 정수, 실수 출력(printf)
    - %a.b*
    - a : 출력 전체 자리수 표현(소수점 포함)
    - b : 소수점 자리수 표현
      - printf("%5d",10); > "   10"
      - printf("%03d",10); > "010"
      - printf("%6.3%f",10.46); > "10.460"

  - 문자 상수의 컴파일
    - 아스키 코드
    - 비트연산
    - mask연산
    - 2의 보수 : 1의 보수 + 1

  - 증감연산자
    - 전위 후위 차이점
  
  - 관계 연산자 : true,false
  - 조건문 : if, if else, switch-case
  - 반복문 : while, for, do-while
    - while, for은 어느정도 반복할 횟수가 정해졌느냐에 따라 어떤걸 선택하여 사용할 지를 확인할 수 있다.
    

  ## 2024-03-27
--- C 심화 복습
  - 함수 : 정의(구현), 호출, 선언
   - 매개변수, 인자값.
  - 배열
    - 0번지부터 시작한다
    - 배열과 반복문
    - 배열의 주소는 시작주소에 해당한다.
    - 배열의 +1은 시작주소의 다음번째 주소에 해당한다.
    - sizeof(배열명)/sizeof(배열요소)
      - num = sizeof(score)/sizeof(score[0])
    - 문자열
     - 널문자, 문자열, 문자배열
     - strcpy
    - 포인터
      - 간점 참조 연산자
      - 주소, 주소 값.
      - 주소위치에 있는 자료형
      - MSD : 최상위 비트   LSD : 최하위 비트
      - little endian / big endian
      - swap함수

    ## 2024-03-27
--- C언어 연습문제풀이
  - d

    ## 2024-04-02
--- C++, 클래스와 객체. 구조체
  - 클래스
    - 선언, 구현, 객체생성
    - 맴버 변수, 생성자 함수, 멤버 함수.
    - 생성자 함수 : 객체가 생성될 때 자동으로 호쿨되는 함수
      - 생성자의 목적은 객체가 생성될 떄 필요한 초기 작업을 위함이다.
      - 생성자 함수는 오직 한번만 실행된다.
      - 생성사 함수의 이름은 클래스 이름과 동일하게 작성되어야 한다.
      - 생성자 함수의 원형에 리턴 타입을 선언하지 않는다.
      - 생성자는 중복 가능하다.
    - 오버로딩 : 같은 이름의 함수에 매개변수를 다르게 사용하여 매개 변수에 따라 다른 함수가 실행되는 것.
    - 오버라이딩 : 상속받았을 때 부모클래스의 함수를 사용하지 않고 다른 기능을 실행할 때 함수를 자식클래스에 같은 이름, 매개변수로 재정의 해서 사용하는 것.
    - 위임 생성자 : 생성자는 객체의 초기화를 다른 생성자에 위임함.
    
    - C++컴파일러는 반드시 하나를 호출 해야 한다.
    - 소멸자 : 객체가 사라질 때 호출된다.
      - 소멸자가 선언되어 있지 않으면 기본 소멸자가 자동으로 생성된다.
      - 동적 메모리 할당과 같은 변수를 클래스 안에서 사용할 시 free와 같은 소멸자를 사용해야 한다.
      - 클래스 이름 앞에 '~'를 붙인다.
    
    - 접근 지정자
        - private, public, protected
      - private : 접근 지정, 클래스 내의 멤버함수 접근 허용
      - public : 프로그램 모든 함수들에게 접근이 허용

    - 구조체 : C언어와의 호환성을 위해

    ## 2024-04-03
--- 객체 포인터
  - 객체 포인터
    - 포인터 변수 선언, 주소지점, 멤버접근
    - 객체포인터로 멤버를 접근할 때 '->' 연산자를 사용한다.

    ## 2024-04-04
--- 객체 포인터, 객체 배열, this 포인터, 동적 메모리
  - 포인터
    - 포인터의 타입과, 접근 변수의 타입이 서로 다를 경우 > segmentation fault

  - 배열
   - 객체 배열 선언문은 기본 생성자를 호출한다.
   - 포인터를 이용하여 배열을 다룰 수 있다.
   - 초기화: 생성자를 사용하여 지정.

  - 동적 메모리
    - new, delete
    - heap 메모리 부족시 NULL를 return한다.
    - 할당된 곳에 초기값 지정 
      - int *pArray = new int [] {1,2,3,4,}

  - this 포인터
    - 객체 자신의 포인터
      - 멤버 변수의 이름과 동일한 이름으로 매개 변수 이름을 짓고자 하는 경우
      - 객체의 멤버 함수에서 객체 자신의 주소를 리턴할 때. -> 클래스/함수의 복사
    - 개발자가 선언하는 변수가 아니고, 컴파일러가 선언한 변수
      - 멤버 함수가 컴파일러에 의해 묵시적으로 삽입 선언되는 매게 변수.

  - string 클래스
    - 멤버함수 p,194

    ## 2024-04-05
--- 함수의 인자 전달 방식, 객체전달, 치환, 리턴, 참조와 함수, 복사 생성자
  - 인자전달방식
    - call by (value, address, reference)
    - 값에 의한 호출은 함수 내에서 실인자를 손상 시킬 수 없는 장점.
    - 주소에 의한 호출은 의도적으로 함수 내에서 실인자 값을 변경하고자 할 때 사용.
  
  - 함수 호출 시 객체 전달.
    - '값에 의한 호출'로 객체를 전달할 때 문제점
      - 생성자는 실행되지 않고 소멸자만 실행
        - 전달받은 원본의 상태를 잃어버리기 때문
      - 복사 생성자의 필요성
    - '주소에 의한 호출'은 매개 변수포인터로 의도하지 않게 원본 객체를 훼손할 가능성이 있기 때문에 코딩에 조심한다.

  - 참조(reference)
    - 이름만 생성되고 별도의 공간이 할당되지 않는다.
    - 원본 변수의 공간을 공유한다.
    - 참조의 의한 호출에 많이 사용
    - 선언과 구현을 동시에 해야 한다.

  - 참조에 의한 호출(call by reference)
    - 실인자를 참조하여 실인자의 공간을 공유
    - 참조 매개변수라고 부름
    - 함수의 원형에 의해 구분

  ## 2024-04-08
  --- 복사생성자
  - 복사생성자
    - 복사 생성자의 매개 변수는 오직 하나
    - 자기 클래스에 대한 참조로 선언된다.
    - 클래스에 오직 한 개만 선언할 수 있다.
    - const를 사용하여 복사된 객체에 값의 변환을 방지한다.
      class ClassName{
        ClassName(const ClassName& c);
      };
    - 디폴트 복사 생성자는 얕은 복사를 실행하도록 만들어진 코드이다.
  
  - 묵시적 복사 생성
    - 1. 객체로 초기화하여 객체가 생성될 때
    - 2. '값에 의한 호출'로 객체가 전달될 때
    - 3. 함수가 객체를 리턴할 때
    
  ## 2024-04-09
  --- 함수 중복과 static 멤버
    - 문자배열 vs 포인터를 사용한 문자열
      - 문자열 배열 vs 문자열 상수를 저장할 주소
    - 얕은복사 vs 깊은 복사

    - 함수중복(function overloading)
    - 같은 이름의 함수가 중복됨.
      - 이름이 동일
      - 매개 변수 타입이나 개수가 달라야 한다.
      - 리턴 타입은 고려되지 않는다.
    - 소멸자 함수중복은 불가능 하다.

    - 디폴트 매개 변수
      void star(int a = 5) // 디폴트로 a값은 5이다.
      - 디폴트 매개 변수는 모두 끝 쪽에 몰려 선언되어야 한다.

    - 함수중복의 모호성
      - 형 변환으로 인한 모호성
        - 컴파일러는 작은 타입을 큰 타입으로 자동 형 변환한다.
      - 참조 매개 변수로 인한 모호성
      - 디폴트 매개 변수로 인한 모호성


    - static 멤버
      - 생명주기 : 프로그램이 시작할 때 생성되고 프로그램이 종료할 때 소멸
      - 사용범위 : 변수나 함수가 선언된 범위 내에서 사용, 전역 혹은 지역을 구분
      - non-static 멤버는 객체가 생성될 때 생성되고, 각 객체마다 별도로 생성된다.
      - static 멤버 함수는 오직 static멤버들만 접근 가능하다.
      - static 멤버 함수에서 this를 사용할 수 없도록 제약한다.

    ## 2024-04-11
    --- 프렌드와 연산자 중복
      - 프렌드 함수
        - 클래스 멤버 함수로는 적합하지 않지만, 클래스의 private, protected 멤버를 접근해야 하는 특별한 경우, 이 함수를 외부 함수로 작성하고 프렌드로 선언한다.
        - 프렌드를 이용한 연산자 함수

      - error of forward reference > forward declaration

      - 연산자 중복
        - 동일한 연산 혹은 기호를 대상(피연산자)에 따라 서로 다른 의미로 해석하는 일종의 다형성이다.
        - 특징
          - C++언어에 본래 있는 연산자만 중복 가능하다.
          - 연산자 중복은 피연산자의 타입이 다른 연산을 새로 정의하는 것이다.
          - 연산자 중복은 함수를 통해 이루어진다.
          - 연산자 중복은 반드시 클래스와 관계를 가진다.
          - 연산자 중복으로 피연산자의 개수를 바꿀 수 없다.
          - 연산자 중복으로 연산의 우선순위를 바꿀 수 없다.
          - 모든 연산자가 중복 가능한 것은 아니다.

        - 외부함수 연산자 중복
          - 클래스와 관계를 가져야 한다.
          - A + B == A.operator(B) == (Class name)operator+(Cn a, Cn b)
        - 참조 리턴
          - Book Class 에서의 참조리턴
            Book& Book::operator+=(int A){
              this->price += A;
              return *this
            }
          

        
    ## 2024-04-18
    --- TCP/IP
      - 네트워크 프로그래밍과 소켓의 이해
        - 네트워크 프로그래밍
          - 소켓이라는 것을 기반으로 프로그래밍을 하기 때문에 소켓 프로그래밍이라고도 함.
        - 소켓
          - 소켓은 socket함수의 호출을 통해서 생성한다.
          - 원하는 서버에 접속하기 위해서 IP번호와 PORT번호가 필요하다
          - 과정
            1. 소켓 생성              socket 함수
            2. ip와 port번호 할당     bind 함수
            3. 연결요청 가능상태 변경   listen 함수
            4. 연결요청에 대한 수락     accept 함수
          
  ## 2024-04-22
    --- 3장 소켓에 할당되는 IP주소와 Port번호
      - 인터넷 주소
        - 4바이트 주소체계인 IPv4와 16바이트 주소체게인 IPv6가 존재한다.
        - 소켓을 생성할 때 기본적인 프로토콜을 지정해야 한다.
        - 네트워크주소와 호스트 주소로 나뉜다.
          - 네트워크 주소를 이용해서 네트워크를 찾고, 호스트 주소를 이용해서 호스트를 구분한다.
        - 클래스 별 네트워크 주소와 호스트 주소의 경계
          A클래스 : 0 ~ 127     > 첫 번째 비트는 0으로 시작
          B클래스 : 128 ~ 191   > 첫 두 비트는 항상 10으로 시작
          C클래스 : 192 ~ 223   > 첫 세 비트는 항상 110으로 시작


      - port번호
        - ip는 컴퓨터를 구분하기 위한 목적으로 존재한다.
        - PORT번호는 소캣을 구분하는 용도로 사용된다.
        - 16비트로 표현(0 ~ 65535)


      - 주소정보의 표현
        - sin_family : 주소체계 > IPv4 : AF_INET
        - sin_port   : PORT번호 (네트워크 바이트 순서 : 빅엔디언)
        - sin_addr   : IP주소정보 (네트워크 바이트 순서 : 빅엔디언)
        host to network long (htonl)
        host to network short (htons)
        memset(memory set) : 초기화
        - sin_zero :
            struct sockaddr{
              sa_family_t sin_family;     // 주소체계(Address Family)
              char        sa_data[14];    // 주소정보
            }
          - sa_data[14] : sin_port[2] + sin_addr[4] + sin_zeor[8] // port + IP_address + 0


    --- 4장 TCP 기반 서버/클라이언트 1
      - TCP/IP 프로토콜 스택
        - 인터넷 기반의 데이터 송수신을 목적으로 설계된 스택
        - 7계층으로 세분화가 되어있으며, 4계층으로도 표현함
        - OSI 7 Layer Model -> TCP/IP Protocal (4 Layer)
        - APPLICATION > Transport > Internet(경로) > Network Interface(LINK Layer)


      - TCP/UDP 계층
        - 실제 데이터의 송수신과 관련 있는 계층
        - TCP : 연결지향형 소켓(SOCK_STREAM)
        - UDP : 비연결지향형 소켓(SOCK_DGRAM)


      - APPLICATION 계층
        - 용용프로그램의 프로토콜을 구성하는 계층
        - 소켓을 기반으로 완성하는 프로토콜을 의미함


      - echo lterative server


## 2024-05-03
  - OpenCV로 배우는 컴퓨터 비전
    - 컴퓨터 비전과 영상의 이해
      - 컴퓨터 비전 : 정지영상 또는 동영상으로부터 의미 있는 정보를 추출하는 방법을 연구하는 학문
        - 영상의 구조와 표현방법
          - 양자화, 샘플링
          - 2차 배열을 통한 표현
          - 그레이스스케일 영상
            - 밝기정보를 0 ~ 255 사이의 정수값으로 표현
          - 컬러영상
            -  RGB값을 각각 0 ~ 255사이의 정수값으로 표현

    - OpenCV 기초 주요 클라스
      - Point
        - 2차원 좌표를 나타냄 (멤버변수 : x , y)
      - Size
        - 영상 또는 사각형 영역의 크기를 표현 (멤버변수 : width, hegiht)
      - Rect
        - 사격형의 위차와 크기 정보를 표현할 때 사용
        - 멤버변수 : x, y, width, height

      - Point, Size, Rect 클래스는 클래스객체와의 산술연산자 재정이가 되어 있으며 각각 템플릿으로 정의되어 있다.

      - RotatedRect
        - 회전된 사각형을 표현하는 클래스
        - 멤버변수 : center, size, angle

      - Range
        - 범위 또는 구간을 표현하는 클래스
        - 멤버변수 : start, end

      - String
        - OpenCV에서 문자열을 다룰 때, 영상에 문자열을 출력할 때
        - cv::String
        - 특징 : std::string 호환가능

      - Mat(중요)
        - 일반적인 2차원 행렬, 고차원 행렬 표현
        - 한 개 이상의 체널을 가질 수 있음.
        - 벡터필드, 포인트 클라우드, 텐서, 히스토그램 등 정보를 저장하는 용도

      - 행렬의 생성과 초기화
      
    - 직선그리기
      - line, arrowedLine, drawMarker
    - 도형 그리기
      - 사각형 : rectangle
      - 원 : circle
      - 타원 : ellipse
    - 문자열 출력하기렬의 크기(Size(cols, rows) or Size(width,hegiht))

          - Mat::Mat(int rows, int cols, int type, const Salar& s);
          - Mat::Mat(Size size, int type, const Salar& s);
            - const Salar& s : 행렬 원소 초기값.

        - 행렬의 초기화
          - static MatExpr Mat::zeros(int rows, int cols, int type);
          - static MatExpr Mat::zeros(Size size, int type);
            - Mat::zero는 0으로 초기화한 행렬을 생성
            - 유사 : Mat::ones / Mat::eye

        - 외부 메모리 공간의 주소
          - Mat::Mat(int rows, int cols, int type, void* data, size_t step=AUTO_STEP);
            - data : 사용할(외부) 행렬 데이터의 주소, 외부 데이터를 사용하여 Mat객체를 생성할 경우, 생성자에서 원소 데이터 저장을 위한 메모리 공간을 동적으로 할당하지 않습니다.
            - step : (외부) 행렬 데이터에서 한 행이 차지하는 바이트 수.

            - Mat 객체의 원소 값과 외부메모리 공가느이 데이터 값이 상호 공유됨

    - OpenCV 주요 기능


## 2024-05-07
  - chapter 4
    - 직선그리기
      - line, arrowedLine, drawMarker
    - 도형 그리기
      - 사각형 : rectangle
      - 원 : circle
      - 타원 : ellipse
    - 문자열 출력하기
      - putText()
        - 영어만 인식됨. UTF-8을 지원하지 않아서, 한글이 안됨
      - freetypeFont : 한글 사용 가능
    - keyboard 이벤트 처리
      - waitykey()
        - 특수키는 입력받을 수 없다.
        - 대기시간으로는 동작시간을 조절하기 힘들다.
        - 밀리초 단위의 시간을 대기하면서 키의 asc값을 반환
    - Mouse 이벤트 처리
      -setMouseCallback()
        - 마우스 콜백 처리
    - 트랙바 사용하기
      - createTrackbar()
        - gui에 추가하는 대표적인 코드

    - 4.4 OpenCV 데이터 파일 입출력
      - FileStorage 클래스
        - 데이터 파일 입출력
        - OpenCV에서 사용하는 데이터의 파입 입출력 기능을 캡술화하여 지원하는 클래스
        - Mat, Scalar, Point, Size, Rect
        - char, int, float, double, string, vector 저장

      - 구조화가 잘되어 있어 중복적으로 코드를 생성할 수 있다.

  ## 2024-05-08
    --- 6장 영상의 산술 및 논리 연산
      - 영상의 산술연산
        영상의 덧셈,뺄셈을 통해서 새로운 결과영상을 생성할 수 있다.
      - add(),addWeighted().subtract(),absdiff(),multiply(), divide(),

      - 영상의 논리 연산
        - 각 비트 단위 논리연산을 수행하는 것을 의미
          - 논리곱, 논리합, 베타적 논리합, 부정(mask연산)
    
    --- 7장 필터링
      -  영상의 필터링, 블러핑, 샤프닝, 잡음제거필터링

      - 필터링 연산방법(마스크)
        - 영상의 필터링은 마스크, 커널, 윈도우 라고 불리는 작은 크기의 팽렬을 이용한다.
        - 이러한 연산을 컨불루션이라고 한다.

        - 가장자리 픽셀에 대해 필터링을 수행할 때에는 특별한 처리를 해야 한다.(BorderTypes)

        - filter2D(),blur()

        - 평균값 필터는 입력 영상에서 특정 픽셀과 주변 픽셀들의 산술 평균을 결과 영상 픽셀 값으로 설정하는 필터이다.

        - 가우시안필터는 가우시안 분포 함수를 근사하여 생성한 필터 마스크를 사용하는 필터링 기법이다.

        - 중앙부에서 비교적 큰 값을 가지고, 주변부로 갈수록 행렬 원소 값이 0에 가까운 작은 값을 가진다.

        - 필터링 대상 픽셀 근처에는 가중치를 크게주고, 필터링 대상 픽셀과 멀리 떨어져 있는 주변부에는 가중치를 조금만 주어서 가중평균을 구하는 것과 같다.

      - 샤프닝
        - 사물의 윤곽이 뚜렷하고 선명한 느낌이 나도록 영상을 변경하는 필터링 기법

        - 언샤프 마스크 필터
          - 블러링이 적용되어 부드러워진 영상과 기존 영상과의 차이를 기존영상에 더햐여 날카로운 영상을 제작함.
          - 언샤프 마스크 필터 함수는 따로 제공하지 않으며 소스코드 형태로 작성하여 샤프닝 결과 영상을 얻을 수 있다.

      - 영상과 잡음 모델
        - 원본신호에 추가된 원치 않은 신호를 의미
        - 주로 영상을 획득하는 과정에서 발생
        - 가우시안 잡음모델 : 평균이 0인 가우시안 분포를 따르는 잡음을 의미

      - 양방향 필터
        - 픽셀 값이 급격하게 변경되는 에지 근방에 동일한 가우시안 필터가 적용되면 잡읍뿐만 아니라 에지 성분까지 함께 감소하게 된다.
        - 잡음이 줄어들면서 함께 에지도 무뎌지기 때문에 객체의 윤곽이 흐릿하게 바뀐다.

        - 에지 보전 잡음 제거 필터(edge-preserving noise removal filter)

      - 미디언 필터
        - 입력 영상에서 자기 자신 픽셀과 주변 픽셀 값 중에서 중간값을 선택하여 결과 영상 픽셀 값으로 설정하는 필터링 기법
      
    --- 8장 영상의 기하학적 변환
      - 어파인 변환, 투시변한

      - 영상의 기하학적 변환
        - 영상을 구성하는 픽셀의 배치 구조를 변경함으로써 전체 영상의 모양을 바꾸는 작업
      - 어파인 변환
        - 영상을 평행이동시키거나 회전, 크기 변환 등을 통해 만들 수 있는 변한
      - 이동 변환
        - 영상을 가로 또는 세로 방향으로 일정 크기만큼 이동 시키는 연산을 의미
        - 시프트연산
      - 전단 변환
        - 직사각형 형태의 영상을 한쪽 방향으로 밀어서 평행사변형 모양으로 변형되는 벼환
        - 층밀림 변환
      - 크기 변환
        - 영상의 전체적인 크기를 확태 또는 축소하는 변환



    --- 9장 에지 검출과 응용 _ 에지검출, 직선검출과 원 검출
      - 에지검출
        - 미분과 그래디언트
          - 에지 : 어두운 영역에서 갑자기 밝아지거나 또는 반대로 밝은 영역에서 급격하게 어두워지는 부분
          - 객체의 윤곽을 알아낼 수 있는 유용한 방법
          - 함수의 미분이란 주어진 함수의 순간 변화율을 의미

          - 소별마스크
            - 3x1마스크는 노이즈에 취약한 단점
            - 평균값을 이용하는 3z3마스크가 제안
          - 샤르 필터 마스크
            - 소별 마스크에서 숫자만 3.10 으로 바꿈

        - 순서
          1. edge -> line -> corner -> keypoint
          a. edge : 미분값을 가지고 검출

### PYTHON
  ## 2024-05-21

  - 인터프리터 언어
    - 마이크로 파이썬을 통해서 인베디드 환경에서도 작용할 수 있다.
    - 바이너리 코드가 아니기 때문에 속도가 느리다.
    - 컴파일할 필요가 없어 인터프리터에 의해 해석되고 바로 실행
    
  - 동적 타이핑 언어
    - 프로그램의 실행 시점에서 변수와 타입이 결정함.
    - 변수를 유연하게 사용가능
    - 타입캐스트를 실행하면서 디버깅을 해야할 수 있다.

  - 인공지능, 빅데이터 > 파이썬을 사용
  
  - 리눅스 터미널에서 파이썬 쉘을 통해 사용 가능  
  - 파이썬 파일을 만들어 사용하는 방법

  - 가상환경을 만들어서 파이썬을 실행
    - 파이썬 내부에 설정(어딜 참조하는지_package)
    1. conda <상용적>
    2. virtualenv + pip
    - 패키지 관리
      - 필요한 라이브러리 설치 및 가상환경 구축
      - requirements.txt > 패키지를 한번에 설치하는 방법
      - pip 를 사용해서 한번에 설치한다.
  - 프로젝트 간 의존성 관리
  - 프로젝트 격리, 패키지 테스트 및 개발, 배포 등


  - def > tab이아닌 space 4이므로 다른 에디터 활용할 때 주의
  - 변수 : 모두 클래스의 객체이다
    - 기본자료형이 없으며 모두 class로 이루어져 있다.(int, float, string 등)

  - object class : 모든 자료형이 달라도 구동을 하게 되어있다 따라서 모든 class는 object부모 클래스를 사용한다.
  
  - operation
    - // or / 차이
    - 제곱승 : **
    - 증감 연산자(++ / --)가 없다. > ++a(X),  a += 1(O)

  - 화면 입출력
    - input함수는 str를 리턴한다.
    - f-string을 사용한다.
    - print함수안에 첫 시작을 f를 사용하여 활용할 수 있다.
    - 예외처리 (try, except)

  - 리스트(비슷: C++ STL(vector))
    - 값이 아닌 메모리 주소로 접근한다.
    - 리스트 연산이 가능하다
    - 리스트 요소를 빼고 더할 수 있다.

  - 조건문
    - if절중 not을 사용할 수 있다.
    - && >> and, || >> or
    - ture,false >> True, False (대문자 유무)
    - int나 float에대하여 0-False 나머지-True
    - 데이터가 빈칸이거나 아무것도 없을 때 거짓으로 본다.

  ## 2024-05-21
  - 조건문
    - else if >> elif

  - 반복문
    - print > end >> defalt "\n"
    - range(start,end,step)
    - ' " 차이가 없다(str)
    - enumerate
for i, student in enumerate(student_average):
  -  반복문 3항 연산자 
print("x는 y보다 큽니다.") if x>y else print("x가 y보다 작거나 같습니다.")

  - 함수
    - 함수의 인수 : C/C++ 과 다른점이 많음
    - 키워드 인수 : 함수의 인터페티스에서 지정한 변수명을 사용하여 함수의 인수를 지정하는 방법
      - positional argument
    - 디폴트 인수 : 
    -  가 변 인수 : *arg
      - 매개변수의 개수를 정하지 않아야 할 때
      - tople형으로 반환
    - 키워드 가변인수 : dictionary type으로 반환
      - 매개변수의 이름을 따로 지정하지 않고 입력하는 방법
      - items()를 사용해서 dictionalry내용을 확인하기도 함
    
    - 키워드 가변인수는 가변 인수보다 뒤에 있어야 한다.

- 람다(lamda)
  - 함수를 정의를 하지 않고 정의한 것 처럼 사용함
def call_ten_times(func):
    for i in range(10):
        func()

def main():
    call_ten_times(lambda: print("hello"))
  - map(), fiter

- 제너레이터
  - 이터레이터를 직접 만들 때 사용하는 코드
  - 함수 내부에서 yield키워드 사용하면 해당 함수는 제너레티어 함수 됨
  - 일반 함수와 달리 호출해도 함수 내부 코드가 실행되지 않음

- String
  - indexing
  - slicing
  - operator
  - method
    - return값을 가지고 있으므로 본 데이터는 변하지 않는다.
    - len,upper,title,join etc..

- 문자열 서식 지정(formant)
  - fstring
  - 패딩(%,format()) : 간격을 맞추는 용도
  
  ## 2024-05-24

  - 예외처리
    - try-except
    - try-except-else
    - try-except -finally
    - raise
    - assert

  - 파일 다루기
    - 파일 읽기
    - 파일 쓰기

  - pickle 모듈
    - 

- Chapter 13 CSV와 로그관리
  - CSV(Comma Separate Values)
  - 테이블 데이터라고 하는 엑셀 형태의 데이터를 텍스트 형태로 다루는 형식
  - csv 객체 이용하기
  - pandas 이용

  - log 관리

### 데이터 과학을 위한 통계
  ## 2024-05-27
- 탐색적 데이터 분석
    - 추론, 데이터분석, 
  - 정형화된 데이터의 요소
    - 수치형 : 연속형, 이산
    - 범주형 : 이진, 순서형
  - 테이블 데이터
    - 데이터 프레임 : 데이터구조
    - 테이블의 각 열
    - 결과 : 데이터 과학 프로젝트의 목표는 대부분 어떤 결과를 예측하는 데 있다.
    - 레코드 테이블의 각 행
    - pandas라이브러리는 데이터 구조를 위한 DateFrame객체 제공
    - 테이블 형식이 아닌 데이터 구조 : 객체표현, 필드 등

- 빅데이터
  - 통계 >> 표본
    - 대표값 :평균, 중앙값, 가중평균 구현 시 numpy 사용
    - 분산, 편차, 절대편차, 표준편차(std)
    - 모집단 추적 및 표본끼리 비교 등

  - 데이터 분포 탐색(그래프)
    1. 수치 데이터 - 히스토, x/y그래프 + boxplot
      - boxplot << 대표값
    2. 이산(범주) 데이터 - 히스토 등

  - 상관관계
    - 상관계수: 변수사이에 연관을 -1 ~ 1 사이에 값으로 표현
    - 상관계수를 사용하여 hitmap(sns) 그림

  - pandas의 활용을 위한 기초 지식
    - numpy: python List에 약점을 보안하고, 속도가 빠르며, 메모리가 절약됨
    - 선언 : 단위, eye, diag, [] 등
    - method : reshap(형태를 변환 - 원소의 개수를 맞쳐야함)
    - 사칙연산, dot_product, broadcasting_operation.
    - broadcasting_operastion: 논리적으로 증식이 가능한 경우 증식하여 계산함.

  ## 2024-05-28
  - 비교 연산과 데이터 추출
    - 비교연산들의 결과는 항상 불린형을 가진 배열로 추출된다.
    - 비교연산함수
      - all: 모든값이 참일때 True 하나라도 아닐 때 False
      - any: 모든값이 거짓일때 False 하나라도 맞을 때 True
    - 인덱스 반환 함수
      - where: 어떤 특정한 조건에 맞는 인덱스를 반환하는 함수
    - 정렬된 값의 인덱스를 반환해주는 함수
      - argsort: 배열 내에 있는 값들을 작은 순서대로 인덱스를 반환
      - argmax: 배열 내에 있는 값들 중 가장 큰 값의 인덱스를 반환
      - argmin: 배열 내에 있는 값들 중 가장 작은 값의 인덱스를 반환
    - 인덱스를 활용한 데이터 추출
      - 불린 인덱스(boolen index) : 측정 조건에 의해 반환
      - 팬시 인덱스(fancy index) : 정수형 배열의 값을 사용하여 해당 정수의 인덱스에 위치한 값을 반환

- 판다스
  - 파이썬계의 엑셀, 스프레드시트와 같은 구조의 데이터를 처리할 때 가장 쉽게 사용할 수 있다.
  - class : DataFrame, Series
    - Series: 하나의 열에 해당하는 데이터의 모음 객체
      - index 열이 자동으로 생성된다.
      - 객체의 이름을 변경할 수 있다.
      - 인덱스에 대한 이름도 추가 지정이 가능하다.
      - 데이터 타입에 대한 저장이 가능하다.

    - DataFrame: 데이터 테이블 전체를 포함하는 객체
      - 데이터 로딩(read_excel)
      - 열이름을 사용한 데이터 추출
      - 행번호를 사용한 데이터 추출
      - 행과 열을 모두 사용한 데이터 추출

  - 그룹별 집계 함수
    - split: 데이터에서 같은 종류의 데이터끼리 나누는 기능이다. 이때 데이터를 나누는 기준은 키(key)값이 되며, 이 키 값은 다양한 종류의 열이 될 수 있다.
    - apply: 데이터 분할로 나누어진 데이터 블록마다 다양한 연산을 적용시킨다.
      - sum, count, mean 등 연산 함수 적용
    - combine: 데이터 분할로 나누어진 블록마다 연산 적용으로 인해 함수가 적용된 각 블록들을 합치는 단계이다.

  
- 시본+주피터 노트북
  - 주피터 노트북을 활용하여 Matplotlib, Seaborn, Plotly 등의 라이브러리를 사용 데이터를 시각적으로 표현
  - 그래프와 차트를 바로 노트북 내에 삽입하고 상호작용할 수 있습니다.
  - 이를 통한 메모리 절약

## 2024-05-29
- 플롯리
  - 비즈니스 인텔리전스 대시보드로의 역할
  - 인터랙션 그래프 지원하여 데이터를 분석 할 수 있다.
  - '*.ipynb'

- 데이터 분석 >> 상관관계 >> 히트맵구현


- 데이터와 표분분표
  - chaptor 2
    - 임의 표본 추출 원칙 지키기
    - 분산합 평균을 표준화를 해야지 비교하기 쉽다.
    - 다양한 분포도에 대해서 공부


## 2024-06-04

  - Google Colab 사용
    - Colab을 사용한 파일 저장 참조.
  
  - sklearn 라이브러리 모음
  from sklearn.ensemble         import RandomForestClassifier
  from sklearn.metrics          import accuracy_score
  from sklearn.model_selection  import train_test_split
  from sklearn.preprocessing    import StandardScaler


## 2024-06-10
  - 데이터 전처리에 기초
    - 데이터 전처리에 품질문제
    1. 데이터 분포의 지나친 차이
    2. 기수형 데이터와 서수형 데이터
    3. 결측치
    4. 이상치

  - 결측치 처리하기 : 드롭과 채우기(python/machineLearning/chap06/data_preprocessing.py)
  - 결측치 비율 : isnull() :값에 대해서 불 인덱싱처럼 널인지 아닌지 확인

  - 드롭 : 의미없는 데이터 삭제
    - dropna()
    df.dropna()
    df.dropna(axis=0, inplace=True, thresh=1, how=all)
      - axis:
      - inplace:
      - thrsh:
      - how: defalt=any,


  - 채우기 : nan데이터 채우기
  - fillna

  - 범주형 데이터 처리하기
    - 원핫인코딩 : 범주형 데이터의 개수만큼 가변수를 생성하여 존재 유무를 True 혹은 False로 표현하는 기법이다.
      - get_dummies
      pd.get_dummies(edges, dtype=int)
      - 실제 edges변수는 변화가 없고 출력값만 생성

    - 바인딩
      - 기존 연속형 데이터를 범주형 데이터로 변환하여 처리해야 할 때
      - pd.cut사용
      bins = [0, 25, 50, 75, 100]
      pd.cut(raw_data['postTestScore'],bins)

    - 피쳐 스케일링 : 데이터의 크기 맞추기
      - 최소값과 최댓값을 정규화하는 방법
      scaling = (df["A"] - df["A"].min()) / (df["A"].max() - df["A"].min())

      - z-스코어 정규화(평균값과 표준편차)
      z_score_scaling = (df["B"] - df["B"].mean()) / df["B"].std()


- 선형회귀의 이해
    - 종속변수 y와 한개 이상의 독립변수 x와의 선행상관관계를 모델링하는 회귀분석 기법
    - 데이터를 잘 표현한다는 말의 기준
  - 예측 함수와 실제값 간의 차이
    - 차이는 최소화하는 방향으로 예측값을 잡아야함
    - 예측값과 실제값의 제곱을 표시하는 것을 제곱오차라고 함.
  
- 비용함수의 개념
    - 비용함수 : 머신러닝에서 최소화해야할 예측값과 실제값의 차이
    - 가설함수 : 예측값을 예측하는 함수
    - 잔차의 제곱합: 예측값인 가설함수와 실제값인 y값 간의 차이를 제곱해서 모두 합한 것.
    - 손실함수 : 잔차의 제곱합 부분
    - 평균제곱오차(MSE) : 잔차의 제곱합을 2m으로 나눈 것.
  - 편미분
    - 웨이트의 미분값을 보면서 변하지 않은 가장 아랫단을 찾아야함.
    