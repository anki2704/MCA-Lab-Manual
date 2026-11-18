--1.branch table
CREATE TABLE BRANCH (
    branch_name VARCHAR2(30) PRIMARY KEY,
    branch_city VARCHAR2(30),
    assets NUMBER(12,2)
);

--2.account table
CREATE TABLE ACCOUNT (
    accno NUMBER(10) PRIMARY KEY,
    branch_name VARCHAR2(30),
    balance NUMBER(12,2),
    FOREIGN KEY (branch_name)
        REFERENCES BRANCH(branch_name)
);
--3.customer table
CREATE TABLE CUSTOMER (
    customer_name VARCHAR2(30) PRIMARY KEY,
    customer_street VARCHAR2(50),
    customer_city VARCHAR2(30)
);
--4.depositor table
CREATE TABLE DEPOSITOR (
    customer_name VARCHAR2(30),
    accno NUMBER(10),
    PRIMARY KEY (customer_name, accno),
    FOREIGN KEY (customer_name)
        REFERENCES CUSTOMER(customer_name),
    FOREIGN KEY (accno)
        REFERENCES ACCOUNT(accno)
);
--5.loan table
CREATE TABLE LOAN (
    loan_number NUMBER(10) PRIMARY KEY,
    branch_name VARCHAR2(30),
    amount NUMBER(12,2),
    FOREIGN KEY (branch_name)
        REFERENCES BRANCH(branch_name)
);
--6.borrower table
CREATE TABLE BORROWER (
    customer_name VARCHAR2(30),
    loan_number NUMBER(10),
    PRIMARY KEY (customer_name, loan_number),
    FOREIGN KEY (customer_name)
        REFERENCES CUSTOMER(customer_name),
    FOREIGN KEY (loan_number)
        REFERENCES LOAN(loan_number)
);

commit;

INSERT INTO BRANCH VALUES ('Main', 'Delhi', 5000000);
INSERT INTO BRANCH VALUES ('City', 'Mumbai', 3000000);
INSERT INTO BRANCH VALUES ('Park', 'Delhi', 2500000);
INSERT INTO BRANCH VALUES ('Lake', 'Mumbai', 4000000);
INSERT INTO BRANCH VALUES ('Central', 'Agra', 3500000);
INSERT INTO ACCOUNT VALUES (101, 'Main', 50000);
INSERT INTO ACCOUNT VALUES (102, 'Main', 75000);
INSERT INTO ACCOUNT VALUES (103, 'City', 30000);
INSERT INTO ACCOUNT VALUES (104, 'Park', 45000);
INSERT INTO ACCOUNT VALUES (105, 'Lake', 60000);
INSERT INTO ACCOUNT VALUES (106, 'Central', 25000);
INSERT INTO ACCOUNT VALUES (107, 'Park', 80000);
INSERT INTO CUSTOMER VALUES ('Amit', 'MG Road', 'Delhi');
INSERT INTO CUSTOMER VALUES ('Rahul', 'Station Road', 'Mumbai');
INSERT INTO CUSTOMER VALUES ('Priya', 'Civil Lines', 'Delhi');
INSERT INTO CUSTOMER VALUES ('Neha', 'Shastri Nagar', 'Agra');
INSERT INTO CUSTOMER VALUES ('Karan', 'Park Street', 'Mumbai');
INSERT INTO DEPOSITOR VALUES ('Amit', 101);
INSERT INTO DEPOSITOR VALUES ('Amit', 102);
INSERT INTO DEPOSITOR VALUES ('Rahul', 103);
INSERT INTO DEPOSITOR VALUES ('Priya', 104);
INSERT INTO DEPOSITOR VALUES ('Neha', 106);
INSERT INTO DEPOSITOR VALUES ('Karan', 105);
INSERT INTO DEPOSITOR VALUES ('Priya', 107);
INSERT INTO LOAN VALUES (201, 'Main', 100000);
INSERT INTO LOAN VALUES (202, 'City', 150000);
INSERT INTO LOAN VALUES (203, 'Park', 200000);
INSERT INTO LOAN VALUES (204, 'Lake', 120000);
INSERT INTO LOAN VALUES (205, 'Central', 180000);
INSERT INTO BORROWER VALUES ('Amit', 201);
INSERT INTO BORROWER VALUES ('Rahul', 202);
INSERT INTO BORROWER VALUES ('Priya', 203);
INSERT INTO BORROWER VALUES ('Neha', 205);
INSERT INTO BORROWER VALUES ('Karan', 204);

commit;


--(c) Find all customers who have at least two accounts at the Main branch SQL Query:
SELECT D.customer_name
FROM DEPOSITOR D
JOIN ACCOUNT A
ON D.accno = A.accno
WHERE A.branch_name = 'Main'
GROUP BY D.customer_name
HAVING COUNT(D.accno) >= 2;

commit;


--(d) Find all customers who have an account at all branches in a specific city
SELECT D.customer_name
FROM DEPOSITOR D
JOIN ACCOUNT A
ON D.accno = A.accno
JOIN BRANCH B
ON A.branch_name = B.branch_name
WHERE B.branch_city = 'Delhi'
GROUP BY D.customer_name
HAVING COUNT(DISTINCT B.branch_name) =
(
    SELECT COUNT(*)
    FROM BRANCH
    WHERE branch_city = 'Delhi'
);

commit;

--(e) Delete all account tuples at every branch located in a specific city
DELETE FROM DEPOSITOR
WHERE accno IN
(
    SELECT A.accno
    FROM ACCOUNT A
    JOIN BRANCH B
    ON A.branch_name = B.branch_name
    WHERE B.branch_city = 'Mumbai'
);

DELETE FROM ACCOUNT
WHERE branch_name IN
(
    SELECT branch_name
    FROM BRANCH
    WHERE branch_city = 'Mumbai'
); 

commit;

--verify the deletion
SELECT *
FROM ACCOUNT
WHERE branch_name IN
(
    SELECT branch_name
    FROM BRANCH
    WHERE branch_city = 'Mumbai'
);

commit;