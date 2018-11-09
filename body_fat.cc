/**
    Program name:   body_fat.cc
    Purpose:        Compute body fat using the U.S. Navy method.
                    
    Author:         Josua Goecking
    GitHub:         https://github.com/JosuaGoecking/Body_fat_calculator
    
*/
#include<iostream>
#include<cmath>
using namespace std;

// function to compute body fat for males
double get_bodyfat_m(double abdomen, double neck, double height){
  return 86.010*log10(abdomen-neck)-70.041*log10(height)+30.30;
}

// function to compute body fat for females
double get_bodyfat_f(double waist, double hips, double neck, double height){
  return 163.205*log10(waist + hips - neck) - 97.684*log10(height) - 104.912;
}

int main (){

// Check for gender
  string male = "m";
  string female = "f";
  string gender;
  
  cout << "Gender (m/f)?" << endl;
  cin >> gender;

// Read in the gender specific variables and compute the body fat percentage
  if(gender==male){
    double abdomen, neck, height;
    cout << "Abdomen, neck, height [cm]?" << endl;
    cin >> abdomen;
    cin >> neck;
    cin >> height;
    cout << "Your body fat percentage is " << ceil(get_bodyfat_m(abdomen, neck, height)) << "%" << endl;
  }
  else if(gender==female){
    double waist, hips, neck, height;
    cout << "Waist, hips, neck, height [cm]?" << endl;
    cin >> waist;
    cin >> hips;
    cin >> neck;
    cin >> height;
    cout << "Your body fat percentage is " << ceil(get_bodyfat_f(waist, hips, neck, height)) << "%" << endl;
  }
  else {cout << "Syntax Error: Type m for male and f for female." << endl;}

}

