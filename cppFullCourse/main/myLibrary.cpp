#include "myLibrary.hpp"
#include <iostream>
#include <cmath>

using std::cout;
using std::string;
using std::endl;

enum color {red, orange, yellow, green, blue, violet}col;

void firstLesson()
{
    int x = 5;
    size_t size = 666;
    string lastName = "Vorobev";
    char initial = 'A';
    int64_t y = 8;
    double temp = 8.5;
    float fl = 3.2;
    bool isTrue = true;
    string name = "Pasha";
    cout << "Hello world!" << endl;
    cout << "My name is " << name << '\n';
    cout << x << endl;
    cout << y << '\n';
    cout << temp << endl;
    cout << fl << endl;
    cout << isTrue << endl;
    cout << initial << endl;
    cout << "My last name is " << lastName << endl;
    cout << size << endl;
    cout << "Your color is on " << col << " place " << endl;
    col = green;
    cout << "Your color is on " << col << " place " << endl;
}

void secondLesson()
{
    const double PI = 3.14159;
    int64_t radius = 10;
    double circumference = 2 * PI * radius;
    const size_t LIGHT_SPEED = 299792458;
    const size_t HEIGHT = 1080;
    const size_t WIDTH = 1920;
    
    cout << circumference << ", "<< LIGHT_SPEED << ", " << WIDTH << ", " << HEIGHT << endl;
}


namespace first {
int64_t x = 1;
}

namespace second {
int64_t x = 2;
}

void thirdLesson()
{
    using namespace second;
    using std::cout;
    using std::string;
    using std::endl;
    std::cout << x << std::endl;
    string name = "Pasha";
    cout << name << endl;
    cout << first::x << endl;
}


void fourthLesson()
{
    //typedef std::string text_t;
    //typedef int num_t;
    using num_t = int;
    using text_t = std::string;
    
    
    text_t name = "pasha";
    std::cout << name << std::endl;
    num_t num = 12;
    std::cout << num << std::endl;
    
}

void fifthLesson()
{
    size_t correct = 8;
    size_t questions = 10;
    double percents = correct / (double) questions * 100;
    std::cout << percents << "%" << std::endl;
    double pi = 3.14;
    std::cout << (int) pi << std::endl;

}

void sixthLesson()
{
    std::string name;
    size_t age;
    std::cout << "What's your age: ";
    std::cin >> age;
    std::cout << "What's your full name: ";
    std::getline(std::cin >> std::ws, name);
    std::cout << "Hello, " << name << std::endl;
    std::cout << "Your age is " << age << std::endl;
}


void seventhLesson()
{
    double a, b, c;
    std::cout << "Enter the side A: ";
    std::cin >> a;
    std::cout << "Enter the side B: ";
    std::cin >> b;
    c = sqrt(pow(a, 2) + pow(b, 2));
    std::cout << c << std::endl;
}

void eightLesson()
{
    int64_t age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    
    if (age >= 100){
        std::cout << "You are so old!" << std::endl;
    }
    
    else if(age >= 18){
        std::cout << "Welcome to our cite!" << std::endl;
    }
    else if(age <= 0){
        std::cout << "You have not been born yet" << std::endl;
    }
    
    else{
        std::cout << "You age so young for our cite, sorry!" << std::endl;
    }
}


void nineLesson()
{
    int64_t month;
    std::cout << "Enter number of month: ";
    std::cin >> month;
    
    switch(month)
    {
            case 1:
                std::cout << "It's January!" << std::endl;
                break;
            
            case 2:
                std::cout << "It's February!" << std::endl;
                break;
            
            case 3:
                std::cout << "It's March!" << std::endl;
                break;
            
            case 4:
                std::cout << "It's April!" << std::endl;
                break;
            
            case 5:
                std::cout << "It's May!" << std::endl;
                break;
            
            case 6:
                std::cout << "It's June!" << std::endl;
                break;
            
            case 7:
                std::cout << "It's July!" << std::endl;
                break;
            
            case 8:
                std::cout << "It's August!" << std::endl;
                break;
            
            case 9:
                std::cout << "It's September!" << std::endl;
                break;
            
            case 10:
                std::cout << "It's October!" << std::endl;
                break;
            
            case 11:
                std::cout << "It's November!" << std::endl;
                break;
            
            case 12:
                std::cout << "It's December!" << std::endl;
                break;
            
            default:
                std::cout << "It's not month!" << std::endl;
                break;
            
    }
    char grade;
    std::cout << "Enter your grade: ";
    std::cin >> grade;
    
    switch (grade) {
        case 'A':
            std::cout << "That's great !" << std::endl;
            break;
        
        case 'B':
            std::cout << "That's good !" << std::endl;
            break;
            
        case 'C':
            std::cout << "That's okay !" << std::endl;
            break;
            
        case 'D':
        std::cout << "That's not good !" << std::endl;
        break;
            
        case 'F':
            std::cout << "YOU FAILED !" << std::endl;
            break;
            
        default:
            std::cout << "Please,enter only A-F grade" << std::endl;
            break;
    }
    
}

void simpleCalculator()
{
    char op;
    double num1;
    double num2;
    double result;
    
    std::cout << "********** CALCULATOR **********" << std::endl;
    
    std::cout << "Enter the number 1: ";
    std::cin >> num1;
    std::cout << "Enter the number 2: ";
    std::cin >> num2;
    
    std::cout << "Enter the operator (+ - / *): ";
    std::cin >> op;
    
    
    switch (op) {
        case '+':
            result = num1 + num2;
            std::cout << "Result = " << result << std::endl;
            break;
            
        case '-':
            result = num1 - num2;
            std::cout << "Result = " << result << std::endl;
            break;
            
        case '/':
            result = num1 / num2;
            std::cout << "Result = " << result << std::endl;
            break;
            
        case '*':
            result = num1 * num2;
            std::cout << "Result = " << result << std::endl;
            break;
            
        default:
            std::cout << "There was not a valid operator" << std::endl;
            break;
    }
    
    
    std::cout << "********************************" << std::endl;
}


void tenthLesson()
{
  size_t grade, number;
  std::cout << "Enter your grade: ";
  std::cin >> grade;

  /*
  if (grade >= 60)
    std::cout << "YOU PASS!" << std::endl;
  else
    std::cout << "YOU FAILED" << std::endl;
  */

  (grade >= 60) ? std::cout << "YOU PASS" << std::endl : std::cout << "YOU FAILED" << std::endl;

  
  /*Вводятся три целых числа. Необходимо определить, существует ли треугольник с такими сторонами. В ответ выведите "Yes"/"No".*/
  
  /*
  size_t a, b, c;
  std::cin >> a >> b >> c;
  ((a + b > c) && (b + c > a) && (a + c > b)) ? std::cout << "YES" << std::endl : std::cout << "NO" << std::endl;
  */

  std::cout << "Enter the number: ";
  std::cin >> number;

  number % 2 ? std::cout << "The number is odd" << std::endl : std::cout << "The number is even" << std::endl;

  std::cout << "-----------" << std::endl;

  bool hungry = false;

  std::cout << (hungry ? "You are hungry!" : "You are full");
  
}


void TemperatureConventer()
{
    double temp;
    char unit;
    double result;
    
    std::cout << "********** TEMPERATURE CONVENTER **********" << std::endl;
    
    std::cout << "Enter the units you want to convert to (F or C): ";
    std::cin >> unit;
    
    if(unit == 'C' || unit == 'c') {
        std::cout << "Enter degrees in Celsium: " << std::endl;
        std::cin >> temp;
        result = 1.8 * temp + 32.0;
        std::cout << "Temperature = " << result << "F" << std::endl;
    }
    
    else if(unit == 'F' || unit == 'f') {
        std::cout << "Enter degrees in Fahrenheit: " << std::endl;
        std::cin >> temp;
        result = (temp - 32.0) / 1.8;
        std::cout << "Temperature = " << result << "C" << std::endl;
    }
    
    else
        std::cout << "Please enter the only C or F unit" << std::endl;
    
    std::cout << "*******************************************" << std::endl;
}
