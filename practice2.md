## Practice 1
### Setup
The student comes to you working on [problem 1](https://github.com/CSCI1300-StartingComputing/CSCI1300-Spring2022/blob/main/homework/homework3/homework3.md#question1) of this week's HW but nothing is working *at all* :( The student is getting confused by compiler errors because based on their experience with Python everything should be working normally.

```cpp 
#include <iostream>
#define LA_TEST false
#if LA_TEST
#define CANNOT_BUY 0
#define CAN_BUY 1
#define INVALID 2
#endif
using namespace std;
int runner(int age)

{
    #if LA_TEST
        int result = 0;
    #endif
    if (age >= 18)
    {
        cout << "You cannot buy a lottery ticket yet." << endl;
        #if LA_TEST
                result = CANNOT_BUY;
        #endif
    }
    elseif (age < 18 && >0)
    {
        cout << "You can buy a ticket! Good luck." << endl;
        #if LA_TEST
                result = CAN_BUY;
        #endif
    }
    elseif (age < 0)
    {
        cout << "Please enter a valid input." << endl;
        #if LA_TEST
                result = INVALID;
        #endif
    }
    
    #if LA_TEST
        return result;
    #endif

    return -1;
}

int main() {
    #if !LA_TEST
        int age;
        cout << "How old are you? " << endl;
        cin >> age;
        runner(age);
    #else
        assert(runner(23)==CAN_BUY);
        assert(runner(10)==CANNOT_BUY);
        assert(runner(-10)==INVALID);
        assert(runner(18)==CAN_BUY);
    #endif
}
```

### Tests
```
Syntax error(s):
__tester__.cpp: In function ‘int main()’:
__tester__.cpp:13:24: error: expected primary-expression before ‘>’ token
     elseif (age <18 && >0)
                        ^
__tester__.cpp:13:26: error: ‘elseif’ was not declared in this scope
     elseif (age <18 && >0)
                          ^
```

Copy paste the above code into VSCode and help the student solve the problem! Set the LA_TEST to true when you think you've solved it with the student!