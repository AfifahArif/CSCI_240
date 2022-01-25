#include <iostream>
using namespace std;

void printStringInfo(const string &);   //prototype for function at bottom to print string info

int main ()
{
int i1;                             //C data type
char c1;                            //C data type
string mynameString;                //C++ string class
mynameString="Jim"; 	            // assign value of jim inside of the object
printStringInfo(mynameString);     //call function at bottom to print info 
 
string string0, string1 ("red"), string2 ("white"), string3 ("blue");   //create 4 string objects

string string4(string3);   //use copy constructor ( ) to copy string3 (blue) to new string4 


cout<<"\n\n\n\n";                           //below we print the values separated by |
	
cout<< '|' << string0 << '|' <<string1<<'|' << string2 << '|' << string3 << '|' << string4 << '|' << endl;
cout<<endl;   


cout<<"\n\nMore information on our 5 strings: "<<endl;
printStringInfo(string0); // has ""
printStringInfo(string1);  //red
printStringInfo(string2);  //white
printStringInfo(string3);  //blue
printStringInfo(string4);  //blue
	
cout<<"\n\n copying string2 (white) to string4, before and after for string 4\n";

printStringInfo(string4);
string4 = string2;                //assigning white to blue, size of 5 is copied as well
printStringInfo(string4);
	
cout<<"\n\n Assigning a literal of yellow to string4\n";	
string4 = "Yellow ";                                        // assignment to a literal 
printStringInfo(string4);
	
 // comparison operators between strings, uses ascii chart for making decisions
cout<<"\n\n Comparing strings with operators:\n";
	
 if (string1 == string2)                                   //red == white?   r-114   w-119
	cout << string1 << " == " << string2 << endl;
 else
	cout << string1 << " != " << string2 << endl;

 if (string1 < string2)                                    //red < white?
	cout << string1 << " < " << string2 << endl;
 else
	cout << string1 << " >= " << string2 << endl;
		
 if (string1 < "green")                               // red < green ?    r-114     g-103  
	cout << string1 << " < green "<< endl;
 else
	cout << string1 << " >= green" << endl;
		
 if ("grey" > "green")                                //compare two literals
	cout << "grey > green " << endl;
 else 
	cout << "grey <= than green" << endl<<endl;

 // concatenation code
 cout<<"\n\n Concatenation results follow: \n";	
 string target="a";
 printStringInfo(target);
 target = target + "bc";       //one way to add  bc to end of string,order is important-abc
 printStringInfo(target);
 target += 'd';                //another way to add  d to end -abcd
 printStringInfo(target);
 target.append("efg");             //add on efg   -  abcdefg
 printStringInfo(target);
 
 string stringNum="456";
 target = stringNum + target;            //one way to add 456 to start of string 456abcdefg
 printStringInfo(target);
 target = "123" + target;           //another say to add 123 to start, 
 printStringInfo(target);         //we now have 123456abcdefg

 cout<<"\n\n Inserting one string inside another string to left of position 3 with insert method\n";	
 string stringDigits("0123456789");
 printStringInfo(stringDigits);
 string insertString("abc");
 stringDigits.insert(2, insertString);       //insert string abc at subscript 2  - 0,1,2
 printStringInfo(stringDigits);             //we have: 01abc23456789
 //stringDigits.insert(25, insertString);	  //be careful!
 
 cout<<"\n\n Removing one string inside another string with erase() method\n";	
 stringDigits = "0123456789";
 stringDigits.erase(1, 5);                //erase at subscript 1 , quantity of 5
 printStringInfo(stringDigits);          //06789
 
 cout<<"\n\n Pulling out a substring from a string with substr() method\n";	
 stringDigits = "0123456789";
 string str2 = stringDigits.substr (4,3);     // "start at subscript 4, pull of 3 characters,4 5 6 
 printStringInfo(str2);                      //456 is pulled off and in str2
 
 cout<<"\n\n Searching for a substring in a string with substr() method\n";	
 
 string stringText = "It never rains in southern California";
 int foundMatch = stringText.find("rains");      // position of 9 in string, -1 is value if not found
 cout<<"\n\n found a match at position "<< foundMatch;	//  //match is at position 9

 stringText.replace(foundMatch,5,"snows");          // "replace letters at position 9 for length of 5
 cout<<"\n\n New text with word change: "<< stringText;	
	
 cout<<"\n\nPRINT OUT ASCII VALUE OF FIRST CHARACTER IN stringDigits "<<(int)stringDigits[0]<<endl;
 cout<<"\nMAX SIZE FOR STRINGS ON THIS COMPUTER "<<stringDigits.max_size()<<endl;
		
 return 0;
}

//function to print out information in the string, we dont want a copy of string object so we have
//a reference back to the string object in main
void printStringInfo(const string  &stringRef)
{      
   cout << "\tString value is "<< stringRef << ", string.size() is " << stringRef.size()  
    << ", first letter of string [0] is "<< stringRef[0] << endl;
}
