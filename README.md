# HRD
c/c++ &amp; iot class

---
## 2024-02-02
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

- 데이터 조작어 검색
     1. select 문법 : select (속성이름) from (테이블이동) where (검색조건)
     2. where 조건 : between, and, or, in, not in, like, '%', '__구%', 'order by', 'desc', 'asc'

- DDL : 테이블 구조     : create  /  drop
- DML : 테이블 데이터   : insert  / delete  / select
- DCL : 데이터 제어어   :  grant  / revoke