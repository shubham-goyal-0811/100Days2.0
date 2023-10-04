DECLARE 
    a number :=&a;
    b number :=&b;
    c number;
    e exception;
BEGIN
    c:=a/b;
    if(c mod 2 = 0 ) then
        dbms_output.put_line('PASS');
    else if(c mod 2 = 1) then
        dbms_output.put_line('FAIL');
    else
        raise e;
    END IF;
    END IF;
    EXCEPTION
        when e then
            dbms_output.put_line('ERROR...........');
END;