# TList [![Supported by bytes](http://art.bytes.gq/badge.svg)](https://bytes.gq)

TList is a small library for a linked list using the C++ TLS.

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

+ ```cpp
  void Add(T value); 
  cpp```
+ ```cpp
void Add(Node* target); 
cpp```
+ ```cpp
T    Remove(); 
cpp```
+ ```cpp
T    Remove(int position); 
cpp```
+ ```cpp
void Insert(int, T); 
cpp```
