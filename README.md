# TList [![Supported by bytes](http://art.bytes.gq/badge.svg)](https://bytes.gq)

TList is a small library for a linked list using the C++ TLS.

## Usage:
clone the repository and copy the header- and the source-file
in your project folder.

Include the header with:

```
#include "list.h"
```
the class itself is a member of the ```List``` namespace.

## Functionality

TList provides the following functionalities:

+ void Add(T value);
+ void Add(Node* target);
+ T    Remove();
+ T    Remove(int position);
+ void Insert(int, T);
