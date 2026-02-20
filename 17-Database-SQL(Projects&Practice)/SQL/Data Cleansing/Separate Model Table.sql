create table Makes
(
ID int identity(1,1) constraint pk_mi primary key,
Make varchar(50) not null
)

insert into Makes
select distinct Make from Cars
order by Make

select * from Makes

alter table Cars
add Make_ID int constraint fk_cm foreign key references Makes(ID)

update Cars
set Make_ID = (select ID from Makes where Make = Cars.Make)

select * from Cars

alter table Cars
drop column Make