-- 4-1 example
select abs(-78), abs(78);
-- 4-2 example
select round(3.41519,2);
-- 4-3 example
use madnagdb;
select custid'고객번호',round(sum(saleprice)/count(*),-2)'평균금액'
from Orders
Group by custid;

-- 4-4 example
select * from Book;
select bookid, replace(bookname, '야구','농구') bookname,publisher,price from Book;

-- 4-5 example
select bookname '제목', char_length(bookname) '문자수',length(bookname)'바이트수'
from Book where publisher like '굿스포츠';

-- 4-6 example