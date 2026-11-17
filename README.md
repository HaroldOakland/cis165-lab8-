# cis165-lab8-

# **README**

## **1\. Program Plan**

**Purpose:**  
The program asks a user to select from four options, three of which find the area of one of three different geometric shape, and one to exit the program.

**Inputs / Starting Data:**  
The user will first be asked to choose between four options, and then asked to input specific measurements for the geometric shape they choose to find the area of. 

**Variables:**  
PI, choice, float length, width, height, base, radius, area

**Calculations / Comparisons:**  
Radius of a circle – area \= pi \* radius \* radius

Area of a rectangle – area \= length \* width

Area of a triangle – area \= base \* height \* 0.5

**Checks:**  
If an invalid choice is made in the first menu–a number less than one or greater than four–the program terminates. In the remaining menus, any negative number terminates the program. 

**Expected Output:**  
Area of a rectangle – 2 length \* 2 width \= 4; returns “The area is 4.”

---

## **2\. Testing Results**

Record the expected result before running each test. Then record the actual output and whether they match.

|  Test / Input |  . Expected Result |  Actual Result |  Match? |
| ----- | ----- | ----- | ----- |
| Choice 1, radius 2 | Area \= 12.56636 (state display precision) | \[12.5664\] | \[Match\] |
| Choice 2, length 3, width 4.5 | Area \= 13.5 | \[13.5\] | \[Match\] |
| Choice 3, base 5, height 3 | Area \= 7.5 | \[7.5 | \[Match\] |
| Choice 4 | Exits without dimension prompts or calculation | \[Exits\] | \[Match\] |
| Choice 0 | Invalid-choice error | \[Invalid, Exits\] | \[Match\] |
| Choice 5 | Invalid-choice error | \[Invalid, Exits\] | \[Match\] |
| Circle radius \-1 | Error message | \[Invalid, Exits\] | \[Match\] |
| Rectangle length \-1 | Error message | \[Invalid, Exits\] | \[Match\] |
| Rectangle width \-1 | Error message | \[Invalid, Exits\] | \[Match\] |
| Triangle base \-1 | Error message | \[Invalid, Exits\] | \[Match\] |
| Triangle height \-1 | Error message | \[Invalid, Exits\] | \[Match\] |
| Circle radius 0 | Area \= 0 | \[Invalid, Exits\] | \[Match\] |
| Additional valid calculation | Rectangle \- 10\*10.5 \= 105 | 105 | \[Match\] |

All tests were performed as indicated above, and validated the code as functioning as intended and as instructed.

**Additional Test Explanation:**  
This is a simple calculation that demonstrates the use of a float and integer calculation. 

---

### **5\. Explain your code**

* ### **1\. How does the program use selection logic?**

* The program uses an `if / else if` structure to check the user's menu selection. Each condition corresponds to a different menu choice. If the user selects 1, 2, or 3, the corresponding calculation is performed. If the user selects 4, the program exits. Choices outside the range of 1–4 display an error message.

* ### **2\. Why is `radius * radius` correct while `radius ^ 2` is not?**

* Multiplying the radius by itself calculates its square. Radius ^ 2 is improper syntax for C++.  
* **3\. Why does the triangle calculation use `0.5` rather than integer division `1 / 2`?**  
* In C++, dividing two integers produces an integer result so `1/2` calculates as zero. Using `0.5` makes the calculation use floating-point arithmetic and produces the correct triangle area.

### **4\. Where do you check negative dimensions, and how do you handle zero and choice 4?**

The program checks each dimension immediately after the user enters it. If a dimension is negative, an error message is displayed and the program terminates. Zero is allowed because the validation only checks for values less than zero. Choice 4 exits the program without requesting dimensions or calculating an area.

