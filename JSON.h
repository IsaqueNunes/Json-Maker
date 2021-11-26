#ifndef JSON_H
#define JSON_H

#include "Field.h"
#include <list>

using namespace std;

class JSON {
    list<Field> fields;

    public:
		void addField(string key, double value);

		void addField(Field field);

		void addFields(Field *fieldsToInsert, size_t fieldsAmmount);

		list<Field> getFields();

		double getValue(string key);
		
		string toString();
};

#endif /* JSON_H */
