/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.h
 * Author: James
 *
 * Created on 25. février 2017, 15:58
 */

#ifndef MAIN_H
#define MAIN_H

#include <vector>

using namespace std;

size_t chercherPosition( const vector<int>& v , int val );
void trier( vector<int>& v );
unsigned chercherSiContient( const vector<int>& v , int val );
unsigned long long f( unsigned n );
void g( vector<int>& v );
vector<int> random( size_t N , int maxVal );



#endif /* MAIN_H */

