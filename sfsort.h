#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void swap(int&, int&);

int partition(vector<int>&, int, int);

void quickSort(vector<int>&, int, int);

void read(vector<int>&, string);

void write(vector<int>&, string);