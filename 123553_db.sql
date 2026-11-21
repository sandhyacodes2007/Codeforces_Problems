-- =========================================================
-- EXPERIMENT 1: SQL DDL and DML Operations
-- Aim: CREATE, INSERT, UPDATE, ALTER, TRUNCATE, DROP
-- =========================================================

CREATE DATABASE IF NOT EXISTS LabDB;
USE LabDB;

CREATE TABLE Student (
    StudentID INT,
    Name VARCHAR(50),
    Age INT,
    Marks INT
);

INSERT INTO Student (StudentID, Name, Age, Marks) VALUES
(1, 'Aman', 20, 85),
(2, 'Riya', 21, 90),
(3, 'Karan', 19, 75);

SELECT * FROM Student;

ALTER TABLE Student ADD Email VARCHAR(100);

UPDATE Student SET Email = 'aman@example.com' WHERE StudentID = 1;

SELECT * FROM Student;

TRUNCATE TABLE Student;

SELECT * FROM Student;   -- empty after truncate

DROP TABLE Student;


-- =========================================================
-- EXPERIMENT 2: Integrity Constraints
-- Aim: PRIMARY KEY, NOT NULL, UNIQUE, CHECK, DEFAULT
-- =========================================================

CREATE TABLE Student (
    StudentID INT PRIMARY KEY,
    Name VARCHAR(50) NOT NULL,
    Age INT CHECK (Age >= 15),
    Email VARCHAR(100) UNIQUE,
    Marks INT DEFAULT 0
);

INSERT INTO Student (StudentID, Name, Age, Email, Marks) VALUES
(1, 'Aman', 20, 'aman@example.com', 85),
(2, 'Riya', 21, 'riya@example.com', 90),
(3, 'Karan', 19, 'karan@example.com', 75);

INSERT INTO Student (StudentID, Name, Age, Email) VALUES
(4, 'Neha', 18, 'neha@example.com');   -- Marks uses DEFAULT

SELECT * FROM Student;


-- =========================================================
-- EXPERIMENT 3: SQL Clauses and Foreign Key
-- Aim: SELECT, FROM, WHERE, GROUP BY, HAVING, ORDER BY, FOREIGN KEY
-- =========================================================

CREATE TABLE Department (
    DeptID INT PRIMARY KEY,
    DeptName VARCHAR(50)
);

INSERT INTO Department VALUES
(1, 'Computer Science'),
(2, 'Electronics'),
(3, 'Mechanical');

ALTER TABLE Student ADD DeptID INT;

ALTER TABLE Student
ADD CONSTRAINT fk_dept
FOREIGN KEY (DeptID) REFERENCES Department(DeptID);

UPDATE Student SET DeptID = 1 WHERE StudentID = 1;
UPDATE Student SET DeptID = 2 WHERE StudentID = 2;
UPDATE Student SET DeptID = 1 WHERE StudentID = 3;
UPDATE Student SET DeptID = 3 WHERE StudentID = 4;

SELECT Name, Marks FROM Student WHERE Marks > 70;

SELECT DeptID, COUNT(*) AS TotalStudents
FROM Student
GROUP BY DeptID
HAVING COUNT(*) >= 1;

SELECT Name, Marks FROM Student ORDER BY Marks DESC;


-- =========================================================
-- EXPERIMENT 4: GROUP BY and Aggregate Functions
-- Aim: SUM(), COUNT(), AVG(), MIN(), MAX()
-- =========================================================

SELECT
    DeptID,
    COUNT(*) AS NumStudents,
    SUM(Marks) AS TotalMarks,
    AVG(Marks) AS AvgMarks,
    MIN(Marks) AS MinMarks,
    MAX(Marks) AS MaxMarks
FROM Student
GROUP BY DeptID;

SELECT
    COUNT(*) AS TotalStudents,
    SUM(Marks) AS TotalMarks,
    AVG(Marks) AS AvgMarks,
    MIN(Marks) AS LowestMarks,
    MAX(Marks) AS HighestMarks
FROM Student;


-- =========================================================
-- EXPERIMENT 5: SQL JOIN Operations
-- Aim: INNER, LEFT OUTER, RIGHT OUTER, FULL OUTER, NATURAL JOIN
-- =========================================================

SELECT s.Name, d.DeptName
FROM Student s
INNER JOIN Department d ON s.DeptID = d.DeptID;

SELECT s.Name, d.DeptName
FROM Student s
LEFT JOIN Department d ON s.DeptID = d.DeptID;

SELECT s.Name, d.DeptName
FROM Student s
RIGHT JOIN Department d ON s.DeptID = d.DeptID;

-- FULL OUTER JOIN simulated with UNION (MySQL has no native FULL OUTER JOIN)
SELECT s.Name, d.DeptName
FROM Student s
LEFT JOIN Department d ON s.DeptID = d.DeptID
UNION
SELECT s.Name, d.DeptName
FROM Student s
RIGHT JOIN Department d ON s.DeptID = d.DeptID;

SELECT Name, DeptName
FROM Student
NATURAL JOIN Department;


-- =========================================================
-- EXPERIMENT 6: SQL Set Operations
-- Aim: UNION, UNION ALL, INTERSECT, EXCEPT/MINUS
-- =========================================================

SELECT Name FROM Student WHERE DeptID = 1
UNION
SELECT Name FROM Student WHERE Marks > 80;

SELECT Name FROM Student WHERE DeptID = 1
UNION ALL
SELECT Name FROM Student WHERE Marks > 80;

-- INTERSECT and EXCEPT require MySQL 8.0.31+
SELECT Name FROM Student WHERE DeptID = 1
INTERSECT
SELECT Name FROM Student WHERE Marks > 80;

SELECT Name FROM Student WHERE DeptID = 1
EXCEPT
SELECT Name FROM Student WHERE Marks > 80;