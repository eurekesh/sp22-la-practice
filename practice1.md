## Practice 1
### Setup
The student comes to you working on [problem 3](https://github.com/CSCI1300-StartingComputing/CSCI1300-Spring2022/blob/main/homework/homework3/homework3.md#question3) of this week's HW but seems to be having some weird output. They have tried applying an incremental discount but it's just not working as they thought :( Where do they go from here?

``` 
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int order = 0;
    double total = 0;
    
    cout << setprecision(2);
    cout << fixed;
    
    cout << "How many ducks would you like to order?" << endl;
    cin >> order;
    
    if(order < 0) {
        cout << "Please enter a valid input." << endl;
        return 0;
    }
    else if(order > 500) {
        total = (order * .50) * .50;
    }
    else if(order > 100) {
        total = (order * .50) * .20;
    }
    else if(order > 20) {
        total = (order * .50) * .10;
    }
    else {
        total = order * .50;
    }
    
    cout << "Your total is $" << total << endl;
    
    return 0;
} 
```

### Tests
|   | Test                                | Input | Expected                                                     | Got                                                          |
|---|-------------------------------------|-------|--------------------------------------------------------------|--------------------------------------------------------------|
| ✅ | //test case 1 - between 0 & 20      | 10    | How many ducks would you like to order? Your total is $5.00  | How many ducks would you like to order? Your total is $5.00  |
| ❌ | //test case 2 - between 20 & 100    | 75    | How many ducks would you like to order? Your total is $33.75 | How many ducks would you like to order? Your total is $3.75  |
| ❌ | //test case 4 - between 100 and 500 | 220   | How many ducks would you like to order? Your total is $88.00 | How many ducks would you like to order? Your total is $22.00 |
| ❌ | //test case 12 - edge case          | 100   | How many ducks would you like to order? Your total is $45.00 | How many ducks would you like to order? Your total is $5.00  |

Copy paste the above code into VSCode and help the student solve the problem!