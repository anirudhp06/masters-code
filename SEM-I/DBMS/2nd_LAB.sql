--Query For Library Database

--List details of students who all are studying in 
--2nd sem MCA

select name,branch_name from student s, branch b where s.branch_id=b.branch_id 
and b.branch_name='MCA' and s.sem=3;

--Automated insertion to student table;
insert into student values('&USN','&name','&address','&branch_id','&sem');

--Select Student who have not borrowed book;
select usn,name from student where usn in(select usn from student minus(select distinct usn from borrow));

/* Display USN,Student name,branch_name,book_name,Author_name,
book_borrowed_date of 2nd sem MCA who borrowed books. */

select s.usn,s.name,br.branch_name,b.book_name,a.Author_name,
bo.borrowed_date from student s,book b,author a,borrow bo,branch br 
where s.usn=bo.usn and s.branch_id=br.branch_id and b.book_id=bo.book_id 
and b.author_id=a.author_id and sem=2 and br.branch_name='MCA';

--Display total number of books written by each author
select a.author_id,count(b.book_id) from book b,author a
where b.author_id=a.author_id group by a.author_id;