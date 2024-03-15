-- example 1
select Bookname, Price from Book;

-- example 2
select Price, Bookname from Book;

-- example 3-2-1
select bookid, bookname, publisher, price from Book;

-- example 3-2-2
select * from Book;

-- example 3-3
select publisher from Book;
select distinct publisher from Book;

-- example 3-4
select * from Book where price<20000;

-- example 3-5
select * from Book where price >= 10000 and price <= 20000;
select * from Book where price between 10000 and 20000;

-- example 3-6
select * from Book where publisher In ('굿스포츠', '대한미디어');
select * from Book where publisher not in('굿스포츠', '대한미디어');

-- example 3-7
select * from Book where bookname like '축구의 역사';

-- example 3-8
select * from Book where bookname like '%축구%';

select * from Book where bookname like '%축구%';

-- example 3-9
select * from Book where bookname like"_구%";

-- example 3-10, 3-11
select * from Book where (bookname like "%축구%") and (price >= 20000);
select * from Book where (publisher = '굿스포츠') or (publisher = '대한미디어');

-- example 3-12
select * from Book order by bookname;
select * from Book order by bookname desc;

-- example 3-13
select * from Book order by price, bookname;

-- example 3-14
select * from Book order by price desc, publisher asc;

-- example 3-15
select * from Orders;
select sum(saleprice) as 총판매액 from Orders;

-- example 3-16
select sum(saleprice) as 총판매액 from Orders where Custid=2;

-- example 3-17
select sum(saleprice) 총판매액, avg(saleprice) 평균, min(saleprice) 최소값, max(saleprice) 최대값 from Orders;

-- example 3-18
select count(*) from Orders;
select count(*) from Customer;
select count(phone) from Customer;

-- example 3-19
select custid, count(*), sum(saleprice) from Orders group by custid;

-- example 3-20
select custid, count(*) from Orders where saleprice >= 8000 group by custid having count(*) >= 2;