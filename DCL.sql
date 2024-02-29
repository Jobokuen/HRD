use madnagdb;
insert into Book(bookid, bookname, publisher, price)
		values(11, "스포츠 의학", "한솔의학서적", 90000);
select * from Book;

insert into Book values(12, '스포츠 의학','한솔의학서적',90000);
insert into Book(bookid, bookname, price, publisher)
			values(13, '스포츠 의학',90000,'한솔의학서적');


-- 3-46 example
create table Imported_book(
	bookid integer primary key,
    bookname varchar(20),
    publisher varchar(20),
    price integer);
    
select * from Imported_book;
insert into Imported_book(bookid, bookname,price,publisher)
	select bookid,bookname,price,publisher
    from Book;
