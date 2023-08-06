
#ifndef COURSE_PAMPLET_H
#define COURSE_PAMPLET_H

#include <string>

/**
  * class course_pamplet
  * 
  */

class course_pamplet
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  course_pamplet ();

  /**
   * Empty Destructor
   */
  virtual ~course_pamplet ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void View ()
  {
  }

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
  void Course_No;
  void Period;
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
   * Set the value of Course_No
   * @param new_var the new value of Course_No
   */
  void setCourse_No (void new_var)   {
      Course_No = new_var;
  }

  /**
   * Get the value of Course_No
   * @return the value of Course_No
   */
  void getCourse_No ()   {
    return Course_No;
  }

  /**
   * Set the value of Period
   * @param new_var the new value of Period
   */
  void setPeriod (void new_var)   {
      Period = new_var;
  }

  /**
   * Get the value of Period
   * @return the value of Period
   */
  void getPeriod ()   {
    return Period;
  }
private:


  void initAttributes () ;

};

#endif // COURSE_PAMPLET_H
