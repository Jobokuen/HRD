use madnagdb;
create table NewBook(
	bookid integer,
    bookname varchar(20),
    publisher varchar(20),
    price integer);
    
drop table NewBook;
create table NewBook(
	bookid integer primary key,
    bookname varchar(20),
    publisher varchar(20),
    price integer);

drop table NewBook;    
create table NewBook(
	bookid integer primary key,
    bookname varchar(20) not null,
    publisher varchar(20) unique,
    price integer default 10000 check(price >= 10000));

drop table NewBook;    
create table NewBook(
	bookid integer,
    bookname varchar(20) not null,
    publisher varchar(20) unique,
    price integer default 10000 check(price >= 10000),
    primary key (bookname, publisher));
    
create table NewOrders