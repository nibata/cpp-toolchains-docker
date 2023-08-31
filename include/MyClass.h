//
// Created by Nicolas Alejandro Bacquet Tapia on 2023-08-29.
//

#ifndef TEST_MYCLASS_H
#define TEST_MYCLASS_H

#include <string>
#include <utility>

class MyClass {
    int id;
    std::string name;

public:
    MyClass(int id, std::string name);
    int get_id() const;
    std::string  get_name();

};


#endif //TEST_MYCLASS_H
