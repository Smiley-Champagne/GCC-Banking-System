# GCC-Banking-System

# **1. How does the program work? **

 **Step 1: Register customers**
when the program starts, it asks for the details of three customers. It saves their names, account numbers, PINs and opening balances in arrays.
   
**Step 2: Customer login**
The customer enters their account number. The program checks whether that account exists.
If the account exists, the customer must enter the correct PIN. If the PIN is incorrect, the program asks again.

**Step 3: Display the banking menu**
After logging in successfully, the program displays a menu:
   ```
   ===== BANKING SYSTEM =====
   1. Deposit Money
   2. Withdraw Money
   3. Send Cash
   4. Check Balance
   5. Exit
   ```
**Step 4: Deposit money**
The customer chooses option 1 and enters an amount.
The program checks that the amount is greater than zero. If it is valid, the amount is added to the customer's balance.
Example:
   - Current balance: R500
   - Deposit: R200
   - New balance: R700
   - 
**Step 5: Withdraw money**
The customer chooses option 2 and enters the amount they want to withdraw.
The program checks two things:
   - The amount must be greater than zero.
   - The customer must have enough money.
Example:
   - Current balance: R700
   - Withdrawal: R100
   - New balance: R600

 **Step 6: Send cash**
The customer chooses option 3 and enters the recipient's account number.
The program checks whether the recipient's account exists and whether the sender has enough money.
 Example:
   - Your balance: R600
   - You send: R150
   - Your new balance: R450
   - Recipient receives: R150
   - 
 **Step 7: Check balance**
The customer chooses option 4. The program displays how much money is currently in their account.

 **Step 8: Exit**
The customer chooses option 5. The program stops running.

# **2. Important C++ concepts used**

These are the programming concepts you should understand:
| C++ concept | What it does                             |
| ----------- | ---------------------------------------- |
| `string`    | Stores customer names                    |
| `int`       | Stores account numbers and PINs          |
| `double`    | Stores money amounts                     |
| Arrays      | Store information for three customers    |
| `if / else` | Makes decisions                          |
| `for`       | Repeats registration for three customers |
| `while`     | Repeats when input is invalid            |
| `do while`  | Keeps the banking menu running           |
| `switch`    | Runs the option selected by the customer |
| Functions   | Separate the program into smaller tasks |

# **3. How do the functions work? **

A function is a small section of code that performs a specific task.
| Function         | Purpose                             |
| ---------------- | ----------------------------------- |
| `displayMenu()`  | Displays the banking menu           |
| `findUser()`     | Searches for a customer's account   |
| `deposit()`      | Adds money to an account            |
| `withdraw()`     | Removes money from an account       |
| `sendCash()`     | Transfers money to another customer |
| `checkBalance()` | Displays the account balance        |

# **4. Important things to remember**
- The program allows three customers to register.
- Customers need their account number and PIN to log in.
- Customers can deposit, withdraw and send money.
- The program checks for invalid amounts.
- The menu keeps appearing until the customer selects Exit.
- The information is stored in arrays, so it is lost when the program closes. It is not connected to a real bank.


> My Banking System is a simple C++ program that allows three customers to use basic banking services. When the program starts, it asks the customers to register their details, including their names, account numbers, PINs and opening balances.
>
> After registration, the customer logs in using their account number and PIN. The system then displays a menu where the customer can deposit money, withdraw money, send cash, check their balance or exit.
>
> I used arrays to store customer information, functions to separate the different banking activities, and loops to repeat certain actions. I also used if and else statements to check whether the customer's information and transactions are valid.
