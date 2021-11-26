#include <iostream>
#include "JSON.h"

using namespace std;

int main() {
	// instatiating an JSON
	JSON json;

	// individually inserting fields
	json.addField("value1", 2);
	json.addField("value2", 5);

	// individually inserting fields as Field Type
	json.addField({"value3", 6});

	// inserting multiple fields as an Field array
	Field fields[] = {
		{"value4", 54},
		{"value5", 6468},
		{"value6", 2452}
	};

	// Remember pass array size as an argument
	int fieldsSize = sizeof(fields) / sizeof(*fields); // example getting array size
	json.addFields(fields, fieldsSize);

	// get allFields and iterating inside them
	for(auto const& field : json.getFields()) {
		cout << field.key << ":" << field.value << endl;
	}

	// get specific key from field
	cout << json.getValue("valor2") << endl;

	// get JSON in string format	
	cout << json.toString() << endl;
}