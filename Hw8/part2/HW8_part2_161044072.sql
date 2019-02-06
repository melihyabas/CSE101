CREATE TABLE Project (
    project_id int NOT NULL,
    title varchar(255) NOT NULL,
    project_owner varchar,
    year_written int,
   PRIMARY KEY (project_id)
);



CREATE TABLE Student (
    student_id int NOT NULL,
    name varchar(255) NOT NULL,
    year_born int,
    PRIMARY KEY (student_id) 
);




CREATE TABLE ProjectWorks (
   student_id int NOT NULL,
   Project_work_name varchar(255) NOT NULL,
   project_id int,
   PRIMARY KEY (project_id),
   FOREIGN KEY (student_id) REFERENCES Student(student_id),
   FOREIGN KEY (project_id) REFERENCES Project(project_id)
);



