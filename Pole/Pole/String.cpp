/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   String.cpp
 * Author: student
 * 
 * Created on 16. února 2018, 11:45
 */

#include "String.hpp"
#include <cstring>
#include <cstdlib>
#include <iostream>


String::String() {
    this->string = nullptr;
    this->length = 0;
    this->setChars("");
}

String::String(char* string){
    this->string = nullptr;
    this->length = 0;
    this->setChars(string);
    
}

bool String::setString(char* chars){
    return setChars(chars);
}

bool String::setString(String& str){
    return setChars(str.getAsChars());
    
}

int String::getLength()const{
    return this->length;
}

bool String::setChars(char* string){
    int len = strlen(string) + 1 ;
    if(this->string != nullptr){
        delete[] this->string;
        this->string = nullptr;
    }
    this->length = 0;
    this->string = new char[len];
    if(this->string== nullptr){
        return false;
    }
    this->length= len - 1;
    for(int i = 0;i< this->length;i++){
        this->string[i] = string[i];
    }
    this->string[this->length] = '\0';
    return true;
}

char* String::getAsChars() const{
    return this->string;
    
}

bool String::addChars(char* string){
    int len = strlen(string) + 1;
    int prevlen = this->getLength();
    if(this->string == nullptr){
        return false;
    }else{
        this->length = prevlen + len ;
        for(int i = 0; i< len;i++){
            this->string[prevlen+i] = string[i];
        }
        this->string[this->length] = '\0';
        this->length--;
        return true;
    }
    
}

const String String::operator= (char* chars){
    this->setChars(chars);
    return *this;
}

const String String::operator =(const String& string){
    this->deleteContent();
    return *this = string.getAsChars();
}

const String String::operator +=(char* chars){
    this->addChars(chars);
    return *this;
}

const String String::operator +=(const String& string){
    this->addChars(string.getAsChars());
    return *this;
}

const String String::operator +(char* chars){
    String temp("");
    temp+= chars;
    return temp;
}

const String String::operator +(const String& string){
    String temp("");
    temp+=this->getAsChars();
    temp+= string.getAsChars();
    return temp;
}


String::String(const String& orig) {
}

String::~String() {
    
}


void String::deleteContent(){
    this->length = 0;
    if(this->string != nullptr){
        delete[] this->string;
        this->string = nullptr;
    }
}
