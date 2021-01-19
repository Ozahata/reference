Check the `src/data-type-limits` to see the data type limit.

# bool

```c++
bool x = true;
```

# int

```c++
int x = 0;
```

# Float

```c++
float f1 = 5.0f;
float f2 = 5E-5; // 3*10^-5
```

# Double

```c++
double pi = 3.14159;
```

# Char

```c++
char c = 'C';
```

# String

```c++
string something = "Something";
```

# Array

```c++
string list[3];

string inventory[] = {"Sword", "Shield", "Boots"};
```

# Vector

Mutable arrays

```c++
#include <vector>

vector<string> inventory;
inventory.push_back("Sword");
inventory.push_back("Shield");
inventory.pop_back();
inventory.size();
```

# Pointer

Use these to reference a specific variable or object rather than just copying its value

```c++
int * ptr;
bool * bl;

int someInt = 1;
int * ptr = &someInt;
```
