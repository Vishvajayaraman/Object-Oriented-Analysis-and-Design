
#ifndef CREW_H
#define CREW_H
#include "Information.h"

#include <string>

/**
  * class Crew
  * 
  */

class Crew : public Information
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Crew ();

  /**
   * Empty Destructor
   */
  virtual ~Crew ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  void Course_Name;
  void Year;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Course_Name
   * @param new_var the new value of Course_Name
   */
  void setCourse_Name (void new_var)   {
      Course_Name = new_var;
  }

  /**
   * Get the value of Course_Name
   * @return the value of Course_Name
   */
  void getCourse_Name ()   {
    return Course_Name;
  }

  /**
   * Set the value of Year
   * @param new_var the new value of Year
   */
  void setYear (void new_var)   {
      Year = new_var;
  }

  /**
   * Get the value of Year
   * @return the value of Year
   */
  void getYear ()   {
    return Year;
  }
private:


  void initAttributes () ;

};

#endif // CREW_H
