#include <iostream>
#include <string>
#include <vector>
#include <iomanip> // setw

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

  // version number
  const std::string program_version {"1.1"};
  
  // Command Line Arguments
  const std::vector<std::string> cmdLineArgs {argv,argv+argc};

  // argument bools
  bool argument_help{false};
  bool argument_version{false};

  // argument strings
  std::string input_file{""};
  std::string output_file{""};
  
  //cycle through arguments
  // Currently whatever is after -i/-o will be taken as the input/output file name
  for (int i{1}; i<argc; i++)
    {
      // select argument
      const std::string &argument = cmdLineArgs[i];

      //search for argument
      if (argument == "-h" || argument == "--help")
	{
	  argument_help = true;
	}
      else if (argument == "--version")
	{
	  argument_version = true;
	}
      else if (argument == "-i")
	{
	  if (++i < argc)
	    {
	      input_file = cmdLineArgs[i];
	    }
	  else
	    {
	      std::cout << "No input file" << std::endl;
	    }
	}
      else if (argument == "-o")
	{
	  if (++i < argc)
	    {
	      output_file = cmdLineArgs[i];
	    }
	  else
	    {
	      std::cout << "No output file" << std::endl;
	    }
	}
      else
	{
	  std::cout << argument << " is not supported" << std::endl;
	}
    }

  // respond to command line arguments
  // Suggest changing this to Boost Format
  if (argument_help)
    {
      std::cout
	<< "Usage: mpags-cipher [options] \n"
	<< "Options: \n"
	<< std::setw(11) << std::left << "-h" << "Display this information \n"
	<< std::setw(11) << std::left << "--help" << "Display this information \n"
	<< std::setw(11) << std::left << "-i" << "Input file name \n"
	<< std::setw(11) << std::left << "-o" << "Output file name \n"
	<< std::setw(11) << std::left << "--version" << "Returns program version \n\n"
	<< std::endl;
    }

  if (argument_version)
    {
      std::cout << "Version number = " << program_version << std::endl;
    }

  if (! input_file.empty())
    {
      std::cout << "Input file recieved as \"" << input_file << "\"" << std::endl;
    }
  
  if (! output_file.empty())
    {
      std::cout << "Output file recieved as \"" << output_file << "\"" << std::endl;
    }

  std::cout << "\nPress Enter to continue" << std::endl;
  getchar();
  week1_training();
  
  std::cout << "\nPress Enter to continue" << std::endl;
  getchar();
  week1_cipher();



}


