//
// Created by Nicolas Alejandro Bacquet Tapia on 2023-08-29.
//

#include <utility>

#include "../include/MyClass.h"

MyClass::MyClass(int id, const std::string &name) {
    this->id = id;
    this->name = name;
}

int MyClass::get_id() const{
    return this->id;
}

std::string MyClass::get_name(){
    return this->name;
}
