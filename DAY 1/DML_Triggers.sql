create table superheros(
    sh_name varchar2(20)
);


CREATE OR REPLACE TRIGGER bi_superheroes
BEFORE INSERT on superheros
FOR EACH ROW
ENABLE
DECLARE
    v_user varchar2(20);
BEGIN
    select user into v_user from dual;
    DBMS_OUTPUT.PUT_LINE('Welcome to avengers!! You were recruited by MR. '|| v_user);
END;
\


CREATE OR REPLACE TRIGGER bu_superheroes
BEFORE UPDATE on superheros
FOR EACH ROW
ENABLE
DECLARE
    v_user varchar2(20);
BEGIN
    select user into v_user from dual;
    DBMS_OUTPUT.PUT_LINE('Your new name is saved!! Edited by by MR. '|| v_user);
END;
\



CREATE OR REPLACE TRIGGER bisuperheroes
BEFORE INSERT OR UPDATE OR DELETE on superheros
FOR EACH ROW
ENABLE
DECLARE
    v_name varchar2(20);
BEGIN
    select user into v_name from dual;
    IF INSERTING THEN
        dbms_output.put_line('WELCOME TO AVENGERS!!! YOU WERE RECRUITED BY Mr. '|| v_name);
    ELSIF DELETING THEN
        dbms_output.put_line('IT WAS GOOD TILL IT LASTED!! BYE BYE!! FROM Mr. '|| v_name);
    ELSIF UPDATING THEN
        DBMS_OUTPUT.PUT_LINE('Your new name is saved!! Edited by by MR. '|| v_name);
    END IF;
END;



insert into superheros values ('THOR');
insert into superheros values ('IRONMAN');
insert into superheros values ('HULK');
UPDATE superheros
SET sh_name='VISION' where sh_name='HULK';
\
--Here both of the triggers will work as THe older onw is also compiled even if we comment it
--TO get one output we need to delete it from compilatiopn firs
