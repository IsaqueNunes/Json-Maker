#include <iostream>
#include <list>
#include <sstream>

#include "JSON.h"

using namespace std;


void JSON::addField(string key, double value) {
    fields.push_back({key, value});
}

void JSON::addField(Field field) {
    fields.push_back(field);
}

void JSON::addFields(Field *fieldsToInsert, size_t fieldsAmmount) {
    cout << fieldsAmmount << endl;
    for(int i = 0; i < fieldsAmmount; i++) {
        fields.push_back(fieldsToInsert[i]);
    }
}

list<Field> JSON::getFields() {
    return fields;
}

double JSON::getValue(string key) {
    for(auto const& field : fields) {
        if(field.key == key) {
            return field.value;
        }
    }
    throw "That key does not exists";
}

string JSON::toString() {
    string fullJson = "{";

    for(auto const& field : fields) {
        stringstream ss;

        ss << field.value;
        string stringFieldValue;
        ss >> stringFieldValue;

        if ( field.key != fields.back().key) {
            fullJson+="\"" + field.key + "\":" + stringFieldValue + ",";
        } else {
            fullJson+="\"" + field.key + "\":" + stringFieldValue;
        }
    }
    fullJson+='}';

    return fullJson;
}