/*
Day of the Programmer in C++
*/

string dayOfProgrammer(int year)
{

  if(year==1918)
    {
        return "26.09.1918";
    }
  // If year is leap according to Julian Calendar or Georgian Calendar.   
  else if((year<1918 && year%4==0) ||(year>1918  &&(year%4==0 && year%100 !=0 || year%400==0)))
    {
        return "12.09." + to_string(year);
    }
  else
    {
        return "13.09." + to_string(year);
    }

}
