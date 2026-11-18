--university table 

CREATE TABLE University (
    University_ID NUMBER PRIMARY KEY,
    University_Name VARCHAR2(100),
    Location VARCHAR2(50),
    State VARCHAR2(50),
    Established_Year NUMBER
);



--department table
CREATE TABLE Department (
    Department_ID NUMBER PRIMARY KEY,
    Department_Name VARCHAR2(100),
    HOD_Name VARCHAR2(100),
    University_ID NUMBER,
    Building VARCHAR2(50),

    FOREIGN KEY (University_ID)
    REFERENCES University(University_ID)
);

-- Program table
CREATE TABLE Program (
    Program_ID NUMBER PRIMARY KEY,
    Program_Name VARCHAR2(100),
    Duration NUMBER,
    Degree_Type VARCHAR2(50),
    Department_ID NUMBER,

    FOREIGN KEY (Department_ID)
    REFERENCES Department(Department_ID)
);

--course table
CREATE TABLE Course (
    Course_ID NUMBER PRIMARY KEY,
    Course_Name VARCHAR2(100),
    Credits NUMBER,
    Semester NUMBER,
    Program_ID NUMBER,

    FOREIGN KEY (Program_ID)
    REFERENCES Program(Program_ID)
);


--syllabus table
CREATE TABLE Syllabus (
    Syllabus_ID NUMBER PRIMARY KEY,
    Course_ID NUMBER,
    Unit_Number NUMBER,
    Unit_Title VARCHAR2(100),
    Description VARCHAR2(200),

    FOREIGN KEY (Course_ID)
    REFERENCES Course(Course_ID)
);

--faculty table
CREATE TABLE Faculty (
    Faculty_ID NUMBER PRIMARY KEY,
    Faculty_Name VARCHAR2(100),
    Qualification VARCHAR2(100),
    Specialization VARCHAR2(100),
    Department_ID NUMBER,

    FOREIGN KEY (Department_ID)
    REFERENCES Department(Department_ID)
);




commit;

CREATE INDEX idx_university_location
ON University(Location);

CREATE INDEX idx_department_name
ON Department(Department_Name);

CREATE INDEX idx_program_name
ON Program(Program_Name);

CREATE INDEX idx_course_name
ON Course(Course_Name);

CREATE INDEX idx_syllabus_title
ON Syllabus(Unit_Title);

CREATE INDEX idx_faculty_specialization
ON Faculty(Specialization);

commit;



INSERT INTO University VALUES(1, 'Aligarh Muslim University', 'Aligarh', 'Uttar Pradesh', 1920);
INSERT INTO University VALUES(2, 'Jawaharlal Nehru University', 'Delhi', 'Delhi', 1969);
INSERT INTO University VALUES(3, 'University of Jammu', 'Jammu', 'Jammu and Kashmir', 1969);
INSERT INTO University VALUES(4, 'University of Delhi', 'Delhi', 'Delhi', 1922);
INSERT INTO University VALUES(5, 'Banaras Hindu University', 'Varanasi', 'Uttar Pradesh', 1916);
INSERT INTO Department VALUES(101, 'Computer Science', 'Dr. Ahmed', 1, 'Science Block');
INSERT INTO Department VALUES(102, 'Physics', 'Dr. Sharma', 1, 'Physics Block');
INSERT INTO Department VALUES(103, 'Computer Science', 'Dr. Kumar', 2, 'School of Computer Science');
INSERT INTO Department VALUES(104, 'Computer Science', 'Dr. Gupta', 3, 'IT Block');
INSERT INTO Department VALUES(105, 'Computer Science', 'Dr. Verma', 4, 'North Campus');
INSERT INTO Program VALUES(201, 'MCA', 2, 'Postgraduate', 101);
INSERT INTO Program VALUES(202, 'BCA', 3, 'Undergraduate', 101);
INSERT INTO Program VALUES(203, 'MCA', 2, 'Postgraduate', 103);
INSERT INTO Program VALUES(204, 'MCA', 2, 'Postgraduate', 104);
INSERT INTO Program VALUES(205, 'BSc Computer Science', 3, 'Undergraduate', 105);
INSERT INTO Course VALUES(301, 'Computer Architecture', 4, 1, 201);
INSERT INTO Course VALUES(302, 'Database Management System', 4, 2, 201);
INSERT INTO Course VALUES(303, 'Operating System', 4, 1, 201);
INSERT INTO Course VALUES(304, 'Computer Networks', 4, 2, 203);
INSERT INTO Course VALUES(305, 'Programming in C', 3, 1, 204);
INSERT INTO Syllabus VALUES(401, 301, 1, 'Introduction to Computer Architecture','Basic computer organization and architecture');
INSERT INTO Syllabus VALUES(402, 301, 2, 'CPU Organization','ALU, control unit and registers');
INSERT INTO Syllabus VALUES(403, 302, 1, 'Introduction to DBMS','Database concepts and architecture');
INSERT INTO Syllabus VALUES(404, 303, 1, 'Process Management','Process scheduling and synchronization');
INSERT INTO Syllabus VALUES(405, 304, 1, 'Network Fundamentals', 'OSI model and TCP IP architecture');
INSERT INTO Faculty VALUES(501, 'Dr. Rahul Sharma', 'PhD', 'Information Security', 101);
INSERT INTO Faculty VALUES(502, 'Dr. Neha Khan', 'PhD', 'Artificial Intelligence', 103);
INSERT INTO Faculty VALUES(503, 'Dr. Amit Gupta', 'MTech', 'Information Security', 104);
INSERT INTO Faculty VALUES(504, 'Dr. Priya Verma', 'PhD', 'Database Systems', 105);
INSERT INTO Faculty VALUES(505, 'Dr. Arif Ahmed', 'PhD', 'Information Security', 101);


commit;


--i. List of Universities situated in Delhi.
SELECT *
FROM University
WHERE Location = 'Delhi';

commit;

--ii. List of all Departments of AMU.
SELECT D.Department_Name
FROM Department D
JOIN University U
ON D.University_ID = U.University_ID
WHERE U.University_Name = 'Aligarh Muslim University';

commit;

--iii. Find the location of JNU.
SELECT Location
FROM University
WHERE University_Name = 'Jawaharlal Nehru University';

commit;


--iv. List of all Programs run by the University of Jammu.
SELECT P.Program_Name
FROM Program P
JOIN Department D
ON P.Department_ID = D.Department_ID
JOIN University U
ON D.University_ID = U.University_ID
WHERE U.University_Name = 'University of Jammu';

--List of Universities that run the Program "MCA"
SELECT distinct U.University_Name
FROM UNIVERSITY U
JOIN DEPARTMENT D ON U.UNIVERSITY_ID = D.UNIVERSITY_ID
JOIN PROGRAM P ON D.DEPARTMENT_ID =  P.DEPARTMENT_ID 
WHERE P.PROGRAM_NAME ='MCA';

commit;

--vi. List of Courses of "MCA" run by AMU.
SELECT C.Course_Name
FROM Course C
JOIN PROGRAM P ON C.PROGRAM_ID = P.PROGRAM_ID
JOIN DEPARTMENT D ON P.DEPARTMENT_ID = D.DEPARTMENT_ID
JOIN UNIVERSITY U ON D.UNIVERSITY_ID = U.UNIVERSITY_ID
WHERE P.PROGRAM_NAME = 'MCA'
AND U.UNIVERSITY_NAME = 'Aligarh Muslim University';

commit;

--vii. List of Faculties specialized in "Information Security" across different universities.
SELECT F.FACULTY_NAME , F.Specialization , U.UNIVERSITY_NAME
FROM FACULTY F 
JOIN DEPARTMENT D ON F.DEPARTMENT_ID =D.DEPARTMENT_ID
JOIN UNIVERSITY U ON D.UNIVERSITY_ID = U.UNIVERSITY_ID
WHERE F.SPECIALIZATION = 'Information Security';


commit;

--viii.Syllabus of "Computer Architecture" of different Universities.

SELECT U.UNIVERSITY_NAME , C.COURSE_NAME , S.UNIT_NUMBER , S.Unit_Title , S.Description
FROM SYLLABUS S
JOIN COURSE C ON S.COURSE_ID = C.COURSE_ID
JOIN PROGRAM P ON C.PROGRAM_ID = P.PROGRAM_ID
JOIN DEPARTMENT D ON P.DEPARTMENT_ID = D.DEPARTMENT_ID
JOIN UNIVERSITY U ON D.UNIVERSITY_ID =U.UNIVERSITY_ID
WHERE C.COURSE_NAME = 'Computer Architecture';


commit;
