--Creation and insertion into tables, Library Database
--Branch Table
create table Branch
(
    Branch_id varchar(5) primary key,
    Branch_name varchar(20),
    HOD varchar(3)
);

insert into Branch values('B001','MCA','ABC');
insert into Branch values('B004','MBA','XYZ');
insert into branch values('B010','CSE','MNO');

select * from branch;

--Student Table
create table Student
(
    USN varchar(20) primary key,
    Name varchar(20),
    Address varchar(50),
    Branch_id varchar(5) references Branch(Branch_id),
    sem int
);

insert into student values('MCA01','Anu','Delhi','B001',1);
insert into student values('MCA05','Ram','Mumbai','B010',1);
insert into student values('MCA10','Anil','Belgaum','B001',3);

select * from student;

--Author Table
create table Author
(
    author_id varchar(5),
    author_name varchar(10),
    country varchar(10),
    age int
);

--Add Primary Key to Author Table
ALTER TABLE author ADD PRIMARY KEY(author_id)

insert into author values('A001','Das','India',55);
insert into author values('A005','John','USA',60);
insert into author values('A010','Swamy','India',45);

select * from author;

--Book Table

create table Book
(
    book_id varchar(5),
    book_name varchar(100),
    author_id varchar(5),
    publisher varchar(10),
    branch_id varchar(5),
    primary key(book_id),
    foreign key(author_id) references author(author_id),
    foreign key(branch_id) references branch(Branch_id)
);

insert into book values('BK01','DBMS','A001','Pearson','B004');
insert into book values('BK02','OS','A005','McMillan','B001');
insert into book values('BK05','C#','A010','IEEE','B001');

select * from book;

--Borrow Table
create table borrow 
(
    USN varchar(10),
    book_id varchar(10),
    borrowed_date date,
    foreign key(USN) references student(USN),
    foreign key(book_id) references Book(book_id)
);

insert into borrow values('MCA05','BK05','2-OCT-2022');
insert into borrow values('MCA10','BK01','2-AUG-2022');

select * from borrow;