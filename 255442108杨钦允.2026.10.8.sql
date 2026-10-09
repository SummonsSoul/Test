#qweqwe
CREATE DATABASE IF NOT EXISTS stude 
DEFAULT
CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci;

USE stude
#删除
#DROP DATABASE stude

SHOW DATABASES
SHOW CREATE DATABASE stude
/**/


/*`student``stude`
-- 修改  
ALTER DATABASE stude charSET-utf8mb4 collate utf8mb4_unicode_ci    

`student`


CREATE database exist;
DEFAULT
CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci;*/

SHOW CREATE DATABASE exist;
USE exist;
CREATE TABLE onee
(
	firs VARCHAR(20),
	nex INT
)COMMENT 'exist';

USE exist;
CREATE TABLE student
(
	stuid VARCHAR(20) PRIMARY KEY,
	hh VARCHAR(100)
	
)COMMENT 'exist';
CREATE TABLE coures
(
	cid VARCHAR(20) PRIMARY KEY,
	gg VARCHAR(100)
	
)COMMENT 'exist';
CREATE TABLE sc
(
	stuid VARCHAR(20),
	cid VARCHAR(20),
	PRIMARY KEY(stuid,cid), /*设置联合主键*/
	FOREIGN KEY(stuid) REFERENCES student(stuid), /*外键关联student主键*/
	FOREIGN KEY(cid) REFERENCES coures(cid)
)COMMENT 'exist';

	-- 向表添加值
	-- '字符串',数字<-int
INSERT INTO student(stuid,hh) VALUES('255442108','114514') ;\

INSERT INTO student(stuid,hh) VALUES('1122','3344'),('44454','7788');

SELECT * FROM student;