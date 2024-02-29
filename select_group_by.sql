use madnagdb;

-- 3-15 example
select sum(saleprice) 총판매액 from Orders;

-- 3-16 example
select sum(saleprice) 총매출 from Orders where Orders.custid = 2;
select custid 김연아, saleprice 총매출 from Orders where Orders.custid = 2;

-- 3-17 example
select sum(saleprice), avg(saleprice),
min(saleprice), max(saleprice) from Orders Where custid=2;

-- 3-18 example
select count(*) from Orders;

-- 3-19 example
select custid, count(*) 도서수량, sum(saleprice) 총액 from Orders Group by custid;

-- 3-20 example
select custid, COUNT(*) 도서수량 From Orders where saleprice >=8000
group by custid having count(*) >=2;

-- 3-21 example
select * from Orders, Customer
where Customer.custid=Orders.custid;

-- 3-22 example
select * from Customer, Orders
where Customer.custid=Orders.custid
order by Customer.custid;

-- 3-23 example
select name, saleprice from Customer, Orders where Customer.custid=Orders.custid;

-- 3-24 example
select name, sum(saleprice) from Customer, Orders where Customer.custid=Orders.custid
group by Customer.name order by Customer.name;

-- 3-25 example
select Customer.name, Book.bookname From Customer, Book, Orders
where Customer.custid=Orders.custid and Orders.bookid=Book.bookid;

-- 3-26 example
select Customer.name, Book.bookname from Customer, Book, Orders
where Customer.custid=Orders.custid and Orders.bookid=Book.bookid and Book.price=20000;

-- 3-27 example
select Customer.name, Orders.saleprice
from Customer left outer join Orders on Customer.custid=Orders.custid;

-- NULL 값 X
select Customer.name, Orders.saleprice
from Customer ,Orders where Customer.custid=Orders.custid;

-- 3-28 example
select bookname from Book where price = (select max(price) from Book where price<15000);

-- 3-29 example
select name from Customer
where custid in(
	select custid From Orders);
    
-- 3-30 example
select name from Customer
where custid in(select custid 
				from Orders 
                where bookid in(select bookid 
								from Book 
                                where publisher="대한미디어")
				);
                
-- 3-31 example
select b1.bookname
from Book b1
where price > (select avg(price) 
				from Book b2
                where publisher = publisher;
