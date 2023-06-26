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

-- Circket Tournament Table.
-- Tables in this DB player,team,match,stadium,plays

-- Player Table
create table player
(
    pid int primary key,
    pname varchar(20),
    age int,
    phno int,
    tid int
);

-- Team Table
create table team
(
    tid int primary key,
    team_name varchar(20),
    city varchar(20),
    captain int references player(pid)
);
-- Alter command to refer tid of player to tid of team.
alter table player add foreign key(tid) references team(tid);
-- Stadium Table

create table stadium
(
    sid int primary key,
    sname varchar(20),
    city varchar(20),
    area varchar(20),
    pincode int
);

-- Plays Table
create table plays
(
    mid int primary key,
    team1 int references team(tid),
    team2 int references team(tid),
    sid int references stadium(sid),
    mdate date,
    time varchar(20)
);

--Match Table
create table match
(
    mid int references plays(mid),
    result varchar(20),
    mom int references player(pid) -- mom stands for Man of the Match.
);

-- Update Command Syntax
update team set team_name='your_value' where tid='team_id';

-- Dropping primary key from table command.
alter table table_name drop primary key;