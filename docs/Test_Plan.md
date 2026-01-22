# Test Plan

Project Name: Student Result Processing System
Version: 2.0
Test Environment: VS Code, input through text file

-----------------------------------------------------------------------------

Test Case 1

Test ID: TC-01
Functionality Tested: Student ID validation (`isValidID`)
Input:
Student ID = `24mcmt14`, existing student list contains unique IDs

Expected Output:
The function should accept the ID since it is alphanumeric and not duplicated.

Actual Output:
The ID was accepted and the student record was processed successfully.

Test Report:
Pass. The function correctly validated a proper student ID.

-----------------------------------------------------------------------------

Test Case 2

Test ID: TC-02
Functionality Tested:* Student name validation (`isValidName`)
Input:
Student name = `Sahil123`

Expected Output:
The function should reject the name because it contains numeric characters.

Actual Output:
The student record was skipped and not stored.

Test Report:
Pass. The function correctly identified and rejected an invalid name.

-----------------------------------------------------------------------------
Test Case 3

Test ID: TC-03
Functionality Tested: Marks validation (`isValidMarks`)
Input:
Marks = `{78, 85, 75, 110, 90, 55}`

Expected Output:
The function should reject the record since one mark exceeds the allowed range (0–100).

Actual Output:
The student record was ignored and not included in result processing.

Test Report:
Pass. The function correctly handled invalid marks.

-----------------------------------------------------------------------------

Test Case 4

Test ID: TC-04
Functionality Tested: Result computation (`computeResult`)
Input:
Marks = `{70, 70, 70, 70, 70, 65}`

Expected Output:
Total marks, percentage, CGPA, and grade should be calculated correctly and the student should pass.

Actual Output:
Total, percentage, CGPA, and grade were computed correctly and displayed in the report.

Test Report:
Pass. The result computation logic works as expected.

-----------------------------------------------------------------------------

Test Case 5

Test ID: TC-05
Functionality Tested: Statistics generation (`Statistics`)
Input:
Array of valid student records

Expected Output:
The program should display class average, highest and lowest percentage along with corresponding student IDs, and grade distribution.

Actual Output:
All statistics were displayed correctly, including correct identification of highest and lowest scorers.

Test Report:
Pass. Statistics module produced correct and complete results.

-----------------------------------------------------------------------------
