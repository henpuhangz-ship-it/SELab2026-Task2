Module Specification
Student Result Processing System


Module 1: Main Module (main.c)

Input:
1. Student details read from input file `students.txt`
2. Number of students

Pre-condition
- Input file must exist and be readable
- Student data format in file must be correct

Logic
1. Open the input file
2. Read the number of students
3. For each student:
   - Read ID, Name, and Marks
   - Invoke validation functions
   - Invoke result computation module
4. Call report module to display results and statistics
5. Close the input file

Output
- Displays student results and class statistics on the console

-------------------------------------

Module 2: Validation Module (validation.c)

Input
- Student ID
- Student Name
- Marks in subjects

Pre-condition
- Student data must be read from the input file

Logic
1. Check whether Student ID is alphanumeric
2. Check whether Student ID is unique
3. Validate student name (alphabets only)
4. Validate marks to ensure they are in the range 0–100

Output
- Returns validity status (valid or invalid)

-------------------------------------

Module 3: Result Computation Module (result.c)

Input
- Marks of five subjects for a student

Pre-condition
- Marks must be validated before computation

Logic
1. Calculate total marks by summing all subject marks
2. Calculate percentage from total marks
3. Assign grade based on percentage criteria

Output
- Total marks
- Percentage
- Grade for each student

-------------------------------------

Module 4: Report Module (report.c)

Input
- Processed student records containing marks, total, percentage, and grade

Pre-condition
- Student results must be computed before generating report

Logic
1. Display student details in a tabular format
2. Calculate class average percentage
3. Identify highest and lowest percentage
4. Count number of students in each grade category

Output
- Tabular student result report
- Class statistics and grade distribution


