--DBMS AAT 2 4th question about database.
--Creation of tables.
create table actor
(
act_id int primary key,
name varchar(20),
gender char(1)
);

create table director
(
dir_id int primary key,
name varchar(20),
phone int
);

create table movies
(
mov_id int primary key,
title varchar(20),
year int,
larg varchar(15),
dir_id int references director(dir_id)
);

create table movie_cast
(
act_id int references actor(act_id),
mov_id int references movies(mov_id),
role varchar(10),
primary key(act_id,mov_id)
);

create table rating
(
mov_id int references movies(mov_id),
rev_stars varchar(25)
);

--Helps in insertion of values
insert into actor values('&act_id','&name','&gender');

insert into director values('&dir_id','&name','&phone');

insert into movies values('&mov_id','&title','&year','&larg','&dir_id');

insert into movie_cast values('&act_id','&mov_id','&role');

insert into rating values('&mov_id','&rev_stars');

--1st Query
select title from movies
where dir_id=(select dir_id from director 
where name='Hitchcock');

--2nd Query
select title from movies m,movie_cast mc
where m.mov_id=mc.mov_id and act_id in(select act_id from movie_cast
group by act_id having count(act_id)>1)
group by title
having count(*)>1;

--3rd Query
select name from actor a
join movie_cast c on a.act_id=c.act_id
join movies m
on c.mov_id=m.mov_id
where m.year not between 2000 and 2015;

--4th Query
select title,max(rev_stars)
from movies
inner join rating using(mov_id)
group by title having max(rev_stars)>0
order by title;

--5th query
update rating set rev_stars=5
where mov_id=(select mov_id from movies m,director d 
where m.dir_id=d.dir_id and d.name='Steven Spielberg');

select * from rating;