📂 File Management Tool
COMPANY: CODTECH IT SOLUTIONS NAME: ARADHYA VERMA INTERN ID: CT04DZ475 DOMAIN: C++ PROGRAMMING DURATION: 4 WEEKS MENTOR: NEELA SANTHOSH
A simple console-based file management utility built with C++ using fstream. It enables users to write, append, and read data from text files in a structured and interactive menu-driven program.
C++ Console Tool fstream Readme License
🚀 Overview
This command-line file management tool demonstrates essential file handling operations in C++. It provides an interactive menu to perform actions such as writing new content, appending data, and reading file contents — all powered by the standard C++ fstream library.
Whether you're practicing for technical interviews or mastering the basics of file I/O, this tool is a perfect beginner-friendly utility.
✨ Key Features
✏️ Write to File: Overwrites existing content with new input
➕ Append to File: Adds new lines without removing prior data
📖 Read from File: Displays contents line by line
⚠️ Error Handling: Handles file access and input issues gracefully
🔁 Looping Menu: Seamless command execution with intuitive navigation
🛠️ Technology Stack
Language:
C++
Libraries Used:
iostream
fstream
string
Tools Used:
g++ (GNU Compiler Collection)
Terminal or Command Prompt
VS Code (Recommended)
📁 Project Structure
Task1_FileManagement/
├── main.cpp           # Source code with menu-based logic
├── managed_file.txt   # Runtime-generated file for storing input
└── README.md          # Project documentation
🚀 Quick Start
🔧 Prerequisites
C++ compiler installed (e.g., g++)
Command line access (Linux, macOS, Windows)
▶️ Compilation
bash
g++ main.cpp -o fileTool
▶️ Execution
bash
./fileTool
🧪 Sample Interaction
=== File Management Tool ===
1. Write to File
2. Read from File
3. Append to File
4. Exit

Enter your choice: 1
Enter text to write to the file: Hello Codetech
Data written successfully.

Enter your choice: 3
Enter text to append: This is Task 1!
Data appended successfully.

Enter your choice: 2
Contents of the file:
Hello Codetech
This is Task 1!
🌍 Real-World Use Cases
📚 Learning Tool: Ideal for beginners in file I/O and stream operations
🔧 Utility Scripts: Create basic data manipulation scripts
🧪 Prototyping: Build quick CLI prototypes using file handling
📁 Log Management: Store logs or input/output operations
🧑‍💻 Interview Prep: Strengthen concepts of file streams and I/O handling
🧠 Architecture & Logic Flow
Program Flow
User selects an operation from the menu
Based on selection:
Input is taken and written/appended using ofstream
File is read using ifstream
Errors are handled gracefully
Loop continues until exit command is given
📊 Performance & Design
Efficient: Minimal runtime and quick compilation
Lightweight: No external dependencies
Robust: Prevents invalid file access and handles edge cases
Simple UI: Easy to interact with, even for beginners
🔧 Configuration & Customization
Change Target Filename: Modify "managed_file.txt" in the source code
Extend Functionality: Add support for file deletion or search
Customize UI Prompts: Update messages and labels for branding
🧪 Testing Guidelines
Manual Testing
Compile and run the tool
Provide different types of input
Verify contents of managed_file.txt after each operation
Check for edge cases like empty input or invalid file access
Future Enhancements
Support for multiple files
File deletion and rename options
GUI wrapper using Qt or similar framework
🤝 Contributing
Contributions are welcome! Feel free to fork and enhance this tool with new features or optimizations.
How to Contribute
bash
git clone https://github.com/aradhyaverma/file-management-tool.git
git checkout -b feature/YourFeature
# Make changes and commit
git push origin feature/YourFeature
# Create a Pull Request!
📄 License
This project is for educational purposes under Codtech's Internship Program. Refer to the LICENSE file for usage terms.
👨‍💻 Author
Aradhya Verma C++ Enthusiast | Codetech Intern – Task 1 Skilled in building structured console tools and mastering core C++ concepts
🙏 Acknowledgments
Codtech IT Solutions for the opportunity
Neela Santhosh for guidance and mentorship
The open source community for tutorials and resources
Everyone who provided feedback during development

