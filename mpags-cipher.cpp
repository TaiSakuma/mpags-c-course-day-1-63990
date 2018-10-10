#include <iostream>
#include <string>
#include <vector>

// g++ -std=c++11 -o  mpags-cipher mpags-cipher.cpp

void week1_training()
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

}

void week1_cipher()
{
  std::cout << "\n------------\n\nBasic Ciper (week1):" << std::endl;

  std::cout << "Type input to cipher. Press [Crtl + D] to exit" << std::endl;

  std::string cipher_output{""};
  char input_char{'x'};
  while(std::cin >> input_char)
    {
       
      // Capitalise input 
      if (isalpha(input_char))
	{
	  if (islower(input_char))
	    {
	      cipher_output += std::toupper(input_char);
	    }
	}
       
	   

      // Change numbers into strings
      else
	{
	  //if(isdigit(input_char)) // don't need as switch is in place
	  // {
	  switch(input_char)
	    {
	    case '0':
	      cipher_output += "ZERO";
	      break;
	    case '1':
	      cipher_output += "ONE";
	      break;
	    case '2':
	      cipher_output += "TWO";
	      break;
	    case '3':
	      cipher_output += "THREE";
	      break;
	    case '4':
	      cipher_output += "FOUR";
	      break;
	    case '5':
	      cipher_output += "FIVE";
	      break;
	    case '6':
	      cipher_output += "SIX";
	      break;
	    case '7':
	      cipher_output += "SEVEN";
	      break;
	    case '8':
	      cipher_output += "EIGHT";
	      break;
	    case'9':
	      cipher_output += "NINE";
	      break;
	    default:
	      break;
	    }
	  //}
	   
	}
       
    }


  std::cout << cipher_output << std::endl;  
}

int main(int argc, char* argv[])
{
  // Command Line Arguments
  const std::vector<std::string> cmdLineArgs {argv,argv+argc};

  //std::cout << "Line entered: " << cmdLineArgs << std::endl;

  week1_training();
  week1_cipher();


}


