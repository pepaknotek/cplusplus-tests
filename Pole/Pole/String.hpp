/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   String.hpp
 * Author: student
 *
 * Created on 16. února 2018, 11:45
 */

#ifndef STRING_HPP
#define STRING_HPP

class String {
public:
    String();
    String(char*);
    String(const String& orig);
    char* getAsChars()const;
    bool setString(String&);
    bool setString(char*);
    int getLength()const;
    const String operator= (char*);
    const String operator= (const String&);
    const String operator+= (const String&);
    const String operator+= (char*);
    const String operator+ (const String&);
    const String operator+ (char*);
    virtual ~String();
    
private:
    void deleteContent();
    bool setChars(char*);
    bool addChars(char*);
    char* string;
    int length;
    
};

#endif /* STRING_HPP */

