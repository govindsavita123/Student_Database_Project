# Student_Database_Project
Develop a database-like CLI (Command Line Interface) application for student records. The application should support:

----------------------------------------------------------------------------------------------------------------------
🎯 Objective
---------------------------------------------------------------------------------------------------------------------
Develop a database-like CLI (Command Line Interface) application for student records. The application should support:
Adding, deleting, displaying, and editing student records.
Searching, sorting, and saving data.
File handling to persist data between sessions.

-----------------------------------------------------------------------------------------------------------------------
🧑‍💻 User Interface
----------------------------------------------------------------------------------------------------------------------
On execution (./dataBase), the program displays a menu with the following options:

MENU

a/A  : Add a new student record

p/P  : Print the records from database

s/S  : Save the database in a file

d/D  : Delete a record

e/E  : Edit a record (shows a sub-menu)
   1) For name edit
   2) For DOB
   3) For percentage
   4) For contact
   6) For email id

f/F  : Find a student

r/R  : Reverse the display of records (in-memory only)

q/Q  : Quit the app


--------------------------------------------------------------------------------------------------------------------------
📌 Requirements
--------------------------------------------------------------------------------------------------------------------------
Record Structure: Each student record must include:
Student ID (e.g., V24HE5A1)
Name
Date of Birth
Percentages (Matriculation, Inter/Diploma, Graduation)
Contact number
Email ID
Unique IDs: No duplicate student IDs allowed.
File Persistence: Previously saved data should be reloaded when the app is restarted.

---------------------------------------------------------------------------------------------------------------------------
📦 Deliverables
---------------------------------------------------------------------------------------------------------------------------
Modular Code: Use user-defined functions (e.g., add_record(), find_record()).

Makefile: Include a makefile for compilation.

README: Explain usage, compilation, and execution.

Persistence: Ensure data is saved and restored between sessions.

Submission Format: A folder named with your ID containing:

Source code

Header files

Makefile

readme.txt

-----------------------------------------------------------------
🔧 Project Implementation Guidelines
-----------------------------------------------------------------
Version 1
Use structure pointers and dynamic memory allocation.

No file handling.

Version 2
Use structure pointers and Singly Linked List (SLL).

Include file handling for saving/loading data.

----------------------------------------------------------------
💡 Suggestions
----------------------------------------------------------------
Use typedef, enum, and union where applicable.

Create a separate header file to store all data structures and type definitions.

---------------------------------------------------------------------------------------------------
