# First program understanding of code and process #
## #include<iostream> ##
This import the iostream liberary into your program 
It gives you access to Input/Output tools like cin/cout without it your program has no idea about cout or cin even mean.

Think of it as: "Hey cpp go grab the file that knows to handle input and output"

## using namespace std; ##

Everything in the iostream liberary lives inside a container call std (standard) without this lline you'd have to write 
std::cout<<"Hello";
with using namespace std; you're saying "assume everything is from std", so you can just write 
cout<<"Hello";

## Variables and DataTypes

A variable is simply a named box that stores a value in memory. When you write int age = 20;

you're telling C++ to create a box named age and put the value 20 inside it.

Data types tell C++ what kind of data that box will hold, so it knows how much memory to reserve. 
int stores whole numbers like 10 or -5. float and double both store decimal numbers, but double is more precise so it's preferred. 
char stores a single character like 'A', 
bool stores only true or false, and 
string stores a full word or sentence like "hello".
The one rule to always remember is that the type must match the value — if you write int x = 3.9;, 
C++ will silently chop off the decimal and store just 3, which is a common beginner bug.

As a beginner, you'll use int, double, string, and bool for 90% of your programs — get comfortable with these four first and the rest will follow naturally.