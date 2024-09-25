# C++

## to run code

```
g++ hello_world.cpp && ./a.out
```

## add -std=c++11 to run vector code

```
g++ -std=c++11 LinearSeach.cpp && ./a.out
```

> [!NOTE]
> This syntax will work on mac system only.

# Data Types

### Primitive

- **int** - 4 Bytes
- **char** - 1 Bytes
- **float** - 4 Bytes
- **double** - 8 Bytes
- **bool** - 1 Bytes

## Type Casting

Converting data from one type to another

- Conversion [_implicit_]

  - Small to big
    > float (4 bytes) to double (8 bytes)

- Casting [_explicit_]

  - Big to Small

    > double to int

    ```
    double price = 100.99;

    int newPrice = (int)price;
    cout << newPrice << endl;
    ```

    ```
    output:
    100
    ```
