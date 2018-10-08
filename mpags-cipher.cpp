#include <iostream>
#include <string>

int main()
{
  // Hello World
  //some comments
  /* a longer comment
     look it's over several lines
  */
   std::cout << "Hello World!\n";

   // Variables
   const int var_int{1};
   const double var_double{3.66};
   int var_3{0};
   
   var_3 = var_int * var_double;
   
   std::cout << "var_int:" << var_int << std::endl;
   std::cout << "var_double:" << var_double << std::endl;
   std::cout << "var_3:" << var_3 << std::endl;
   
   // Making Strings
   std::string msg {"This is a String"};
   std::cout << msg << "\n";
   std::cout << "4nth character: " << msg[3] << std::endl;

   // test of using const
   const int var_const{0};
   //var_const = 2; //Uncommenting this line breaks const condition

   // Operators
   // change character of a string
   const char var_char{'q'};
   msg[3] = var_char;
   std::cout << "msg char changed to: " << var_char << "\nMessage now reads: " << msg << std::endl;

   // adding
   const int var_int1{4};
   const int var_int2{3};
   std::cout << "var_int1: " << var_int1 << "\n" << \
     "var_int2: " << var_int2 << "\n" << \
     "var_int1 * var_int2: " << var_int1*var_int2 << std::endl;
   
   const double var_double1{5.6666};
   const double var_double2{8.932};
   std::cout << "var_double1: " << var_double1 << "\n" << \
     "var_double2: " << var_double2 << "\n" << \
     "var_double1 * var_double2: " << var_double1*var_double2 << std::endl;

   // division
   std::cout << "var_double1: " << var_double1 << "\n" << \
     "var_int2: " << var_int2 << "\n" << \
     "var_double1 / var_int2: " << var_double1*var_int2 << std::endl; // this is type double as c++ takes the most precise order variable


   // cipher start
   std::cout << "Type input to cipher. Press [Crtl + D] to exit" << std::endl;
   std::string input_string{""};
   std::string cipher_string{""};
   char input_char{'x'};
   while(std::cin >> input_char)
     {
       //std::string input_string{""};
       input_string += input_char;
       //std::string cipher_string{""};
       
       // change numbers into words
       if(isdigit(input_char))
	 {
	   switch(input_char)
	     {
	     case '0':
	       cipher_string += "ZERO";
	       break;
	     case '1':
	       cipher_string += "ONE";
	       break;
	     case '2':
	       cipher_string += "TWO";
	       break;
	     case '3':
	       cipher_string += "THREE";
	       break;
	     case '4':
	       cipher_string += "FOUR";
	       break;
	     case '5':
	       cipher_string += "FIVE";
	       break;
	     case '6':
	       cipher_string += "SIX";
	       break;
	     case '7':
	       cipher_string += "SEVEN";
	       break;
	     case '8':
	       cipher_string += "EIGHT";
	       break;
	     case'9':
	       cipher_string += "NINE";
	       break;
	     default:
	       break;
	     }
	 }
       
       
       // convert to upper case
       if(islower(input_char))
	 {
	  cipher_string += toupper(input_char);
	   
	 }

       // ignore other characters
       
       // add to a string variable

       // print output
       std::cout << input_string << std::endl;
       std::cout << cipher_string << std::endl;
     }
   
   return 0;
}
