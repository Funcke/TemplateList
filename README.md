# TList [![Supported by bytes](http://art.bytes.gq/badge.svg)](https://bytes.gq)

TList is a small library for a linked list using the C++ STL.

## Requirements:
For using this library you only need a C++11
compatible C++ compiler;

## Usage:
clone the repository and copy the header- and the source-file
in your project folder.

Include the header with:

```cpp
#include "list.h"
```
the class itself is a member of the ```List``` namespace.

## API

TList provides the following functionalities:

+ ```void Add(T); ```
+ ```void Add(Node<T>*); ```
+ ```T    Remove(); ```
+ ```T    Remove(int); ```
+ ```void Insert(int, T); ``` 
+ ```void Insert(T);``` 
+ ```void Insert(Node<T>*);```
+ ```T    Show();```
+ ```T    Show(int);```
