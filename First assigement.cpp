#include <iostream>

using namespace std;

int main()
{
    int choice;
    int numEmployees;

    while (true)
    {
        cout << "===== EMPLOYEE PAYROLL SYSTEM =====" << endl;
        cout << "1. Calculate Employee Payroll" << endl;
        cout << "2. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "How many employees do you want to process? ";
            cin >> numEmployees;

            while (numEmployees <= 0)
            {
                cout << "Invalid number. Enter a number greater than 0: ";
                cin >> numEmployees;
            }

            for (int i = 1; i <= numEmployees; i++)
            {
                int employeeID;
                int departmentChoice;
                int attendanceDays;

                string employeeName;
                string department;

                double basicSalary;
                double departmentBonus;
                double attendanceBonus;
                double bonusAmount;
                double totalPay;

                cout << "===== EMPLOYEE " << i << " =====" << endl;

                cout << "Enter Employee ID: ";
                cin >> employeeID;

                cout << "Enter Employee Name: ";
                getline(cin, employeeName);

                cout << "Enter Basic Salary: R";
                cin >> basicSalary;

                while (basicSalary <= 0)
                {
                    cout << "Invalid salary. Enter an amount greater than 0: R";
                    cin >> basicSalary;
                }

                cout << "Select Department:" << endl;
                cout << "1. Sales" << endl;
                cout << "2. IT" << endl;
                cout << "3. Finance" << endl;
                cout << "4. HR" << endl;
                cout << "5. Operations" << endl;
                cout << "Enter department number: ";
                cin >> departmentChoice;

                while (departmentChoice < 1 || departmentChoice > 5)
                {
                    cout << "Invalid choice. Enter a number from 1 to 5: ";
                    cin >> departmentChoice;
                }

                switch (departmentChoice)
                {
                    case 1:
                        department = "Sales";
                        departmentBonus = basicSalary * 0.10;
                        break;
                    case 2:
                        department = "IT";
                        departmentBonus = basicSalary * 0.08;
                        break;
                    case 3:
                        department = "Finance";
                        departmentBonus = basicSalary * 0.07;
                        break;
                    case 4:
                        department = "HR";
                        departmentBonus = basicSalary * 0.05;
                        break;
                    case 5:
                        department = "Operations";
                        departmentBonus = basicSalary * 0.04;
                        break;
                }

                cout << "Enter attendance days (0-23): ";
                cin >> attendanceDays;

                while (attendanceDays < 0 || attendanceDays > 23)
                {
                    cout << "Invalid days. Enter a number from 0 to 23: ";
                    cin >> attendanceDays;
                }

                if (attendanceDays >= 22)
                {
                    attendanceBonus = 500;
                }
                else if (attendanceDays >= 20)
                {
                    attendanceBonus = 250;
                }
                else
                {
                    attendanceBonus = 0;
                }

                bonusAmount = departmentBonus + attendanceBonus;
                totalPay = basicSalary + bonusAmount;

                cout << "===== EMPLOYEE PAYSLIP =====" << endl;
                cout << "Employee ID: " << employeeID << endl;
                cout << "Employee Name: " << employeeName << endl;
                cout << "Department: " << department << endl;
                cout << "Basic Salary: R" << basicSalary << endl;
                cout << "Department Bonus: R" << departmentBonus << endl;
                cout << "Attendance Bonus: R" << attendanceBonus << endl;
                cout << "Total Bonus: R" << bonusAmount << endl;
                cout << "Total Pay: R" << totalPay << endl;
                cout << "============================" << endl;
            }
        }
        else if (choice == 2)
        {
            cout << "Thank you for using the Payroll System." << endl;
            break;
        }
        else
        {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
