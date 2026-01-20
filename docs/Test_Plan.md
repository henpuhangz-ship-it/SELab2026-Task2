Project Name: Student Result Processing System
Written By: Lamhen, 24mcmt12
Description: Processes student marks from a file, computes total, percentage, grade, and displays class statistics
Browser: Firefox


 | Test # | Date   | Action            | Input                          | Expected Results                             | Actual Results                        | Pass? |
| ------ | ------ | ----------------- | ------------------------------ | -------------------------------------------- | ------------------------------------- | ----- |
| 1      | 20-Jan | Read student file | `students.txt` with valid data | Program reads all students without error     | Program reads all students            | Pass  |
| 2      | 20-Jan | Validate ID       | Student ID: `STU01`            | Valid                                        | Valid                                 | Pass  |
| 3      | 20-Jan | Validate ID       | Student ID: `STU@01`           | Invalid                                      | Invalid                               | Pass  |
| 4      | 20-Jan | Validate Name     | Name: `Alice`                  | Valid                                        | Valid                                 | Pass  |
| 5      | 20-Jan | Validate Name     | Name: `Al1ce`                  | Invalid                                      | Invalid                               | Pass  |
| 6      | 20-Jan | Validate Marks    | Marks: `105`                   | Invalid                                      | Invalid                               | Pass  |
| 7      | 20-Jan | Compute Result    | Marks: `80, 90, 85, 75, 95`    | Total: 425, Percentage: 85, Grade: A+        | Total: 425, Percentage: 85, Grade: A+ | Pass  |
| 8      | 20-Jan | Display Report    | N/A                            | Table with student info                      | Table displayed correctly             | Pass  |
| 9      | 20-Jan | Class Statistics  | Multiple students              | Correct average, highest/lowest, grade count | Correct                               | Pass  |
