# FILE-MANAGEMENT-TOOL
COMPANY: CODTECH IT SOLUTIONS

NAME: Aradhya Verma

INTERN ID: CT04DZ475

DOMAIN: c++ programming

DURATION: 4 WEEKS

MENTOR: NEELA SANTHOSH

# Project Overview
This project demonstrates basic file handling operations using C++. It allows the user to perform file writing, appending, and reading in a console-based environment. The tool showcases structured I/O operations using fstream.

# Key Features
. Write data to a file (overwrites previous content)
➕ Append data to an existing file
. Read and display the content of a file
. Proper error handling for file access
. Looping menu for multiple operations

# Technology Stack
 ## Language:
 ### 💻 C++
## Standard Libraries Used:
iostream
fstream
string
# Project Structure
Task1_FileManagement/
├── main.cpp        # C++ source code
├── managed_file.txt  # (Generated at runtime)
└── README.md       # Project documentation
# How It Works
## Write Mode
Takes user input and writes it to the file, overwriting any existing content.
## Append Mode
Allows appending additional lines to the file without deleting existing data.
## Read Mode
Displays the full contents of the file line by line.
# Sample Input/Output
=== File Management Tool ===
1. Write to File
2. Read from File
3. Append to File
4. Exit
Enter your choice: 1
Enter text to write to the file:
Hello Codetech
Data written successfully.

=== File Management Tool ===
1. Write to File
2. Read from File
3. Append to File
4. Exit
Enter your choice: 3
Enter text to append:
This is Task 1!
Data appended successfully.

=== File Management Tool ===
1. Write to File
2. Read from File
3. Append to File
4. Exit
Enter your choice: 2
Contents of the file:
Hello Codetech
This is Task 1!
# How to Run
##Prerequisites
Any C++ compiler (like g++)
Terminal or Command Prompt
# Compilation
g++ main.cpp -o fileTool
# Execution
./fileTool
# Author
ARADHYA VERMA
Codetech C++ Internship – Task 1
Intern ID: [CT04DZ475]
Domain: C++ Programming
# License
This project is for educational purposes under Codetech's Internship Program.



