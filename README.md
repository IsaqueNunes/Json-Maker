# Json Maker

This repository implements a json maker made in c++

## Documentation

First of all, you need import JSON lib and instantiate a new JSON

```cpp

/* Other imports */

#include "JSON.h"


int main {
	/* ... */

	JSON json;

	/* ... */
}
```

### Inserting JSON fields individually

You have two ways to do that.

First way is inserting data with key and value parameters
```cpp
/* ... */

json.addField("value1", 2);
json.addField("value2", 5);

/* ... */
```

Second way is inserting data as Field type, just like that


```cpp
/* ... */

json.addField({"value3", 6});

/* ... */
```

### Inserting multiple fields

Here you need insert data as Field type.

```cpp
/* ... */

// Create an array of Fields
Field fields[] = {
	{"value4", 54},
	{"value5", 6468},
	{"value6", 2452}
};

// Get array size
int fieldsSize = sizeof(fields) / sizeof(*fields);

// finnaly insert data
json.addFields(fields, fieldsSize);

/* ... */
```

### Get all Fields
```cpp
/* ... */

// Example
for(auto const& field : json.getFields())
	cout << field.key << ":" << field.value << endl;

/* ... */
```

### Get specific value
```cpp
/* ... */

cout << json.getValue("valor2") << endl;

/* ... */
```

### Get json as string
```cpp
/* ... */

cout << json.toString() << endl;

/* ... */
```
