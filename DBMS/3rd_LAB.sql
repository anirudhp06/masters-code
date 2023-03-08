-- Having Clause 

-- Syntax of having clause
select column_name from table_name where condition
group by column_name having condition order by column_name;

-- Example Query
select author_id,count(book_id) from book 
group by book_id having count(book_id)>2;

-- Query on Library Database.
-- Query to find students who have borrowed more than 2 books.
select s.usn,count(bo.book_id) from student s, borrow bo,book bk 
where s.usn=bo.usn and bo.book_id=bk.book_id group by s.usn having 
count(bo.book_id)>2;
