/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ucitel
 *
 * Created on 5. ledna 2018, 11:50
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <cstring>
#include "String.hpp"

using namespace std;

int main(int argc, char** argv) {
    String asdf("asdf");
    String qwer("qwer");
    String celek;
    
    cout<< asdf.getAsChars()<<" ," <<asdf.getLength()<< " znaky" <<endl;
    cout<< qwer.getAsChars()<<" ," <<qwer.getLength()<<" znaky"  <<endl;
    /*
    asdf="qwer";
    
    cout<< asdf.getAsChars()<<" ," <<asdf.getLength()<<" znaky"  <<endl;
    
    asdf+=qwer;
    
    cout<< asdf.getAsChars()<<" ," <<asdf.getLength()<<" znaky"  <<endl;
    */
    asdf+="qwer";
     
    cout<< asdf.getAsChars()<<" ," <<asdf.getLength()<<" znaky"  <<endl; 
    
    //celek=asdf+qwer;
    
    //cout<< celek.getAsChars()<<" ," <<asdf.getLength()<<" znaky"  <<endl;
    
    return 0;
}

