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