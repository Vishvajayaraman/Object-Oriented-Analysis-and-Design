
#ifndef INFORMATION_H
#define INFORMATION_H
#include "Crew.h"
#include "user.h"
#include "user.h"

#include <string>

/**
  * class Information
  * 
  */

class Information : public Crew, public user, public user
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Information ();

  /**
   * Empty Destructor
   */
  virtual ~Information ();

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
  void view_detail ()
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

  void Name;
  void Reg_no;
  void age;
  void percentage;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Name
   * @param new_var the new value of Name
   */
  void setName (void new_var)   {
      Name = new_var;
  }

  /**
   * Get the value of Name
   * @return the value of Name
   */
  void getName ()   {
    return Name;
  }

  /**
   * Set the value of Reg_no
   * @param new_var the new value of Reg_no
   */
  void setReg_no (void new_var)   {
      Reg_no = new_var;
  }

  /**
   * Get the value of Reg_no
   * @return the value of Reg_no
   */
  void getReg_no ()   {
    return Reg_no;
  }

  /**
   * Set the value of age
   * @param new_var the new value of age
   */
  void setAge (void new_var)   {
      age = new_var;
  }

  /**
   * Get the value of age
   * @return the value of age
   */
  void getAge ()   {
    return age;
  }

  /**
   * Set the value of percentage
   * @param new_var the new value of percentage
   */
  void setPercentage (void new_var)   {
      percentage = new_var;
  }

  /**
   * Get the value of percentage
   * @return the value of percentage
   */
  void getPercentage ()   {
    return percentage;
  }
private:


  void initAttributes () ;

};

#endif // INFORMATION_H
