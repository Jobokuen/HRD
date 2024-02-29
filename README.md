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
## 2024-02-28
    ---
    - 주석문 안에 주석문을 사용할 수 없다

-  반복(loop)
  - 초기화            :  반복문이 실행되기 전에 실행
  - 조건 체크하는 부분 : 조건 확인하는 부분
  - 목적부분          : 변화하는 부분

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