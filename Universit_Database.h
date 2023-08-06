
#ifndef UNIVERSIT_DATABASE_H
#define UNIVERSIT_DATABASE_H

#include <string>

/**
  * class Universit_Database
  * 
  */

class Universit_Database
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Universit_Database ();

  /**
   * Empty Destructor
   */
  virtual ~Universit_Database ();

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
  void String_Registration ()
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

  void Exam_Details;
  void Reg_Details;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Exam_Details
   * @param new_var the new value of Exam_Details
   */
  void setExam_Details (void new_var)   {
      Exam_Details = new_var;
  }

  /**
   * Get the value of Exam_Details
   * @return the value of Exam_Details
   */
  void getExam_Details ()   {
    return Exam_Details;
  }

  /**
   * Set the value of Reg_Details
   * @param new_var the new value of Reg_Details
   */
  void setReg_Details (void new_var)   {
      Reg_Details = new_var;
  }

  /**
   * Get the value of Reg_Details
   * @return the value of Reg_Details
   */
  void getReg_Details ()   {
    return Reg_Details;
  }
private:


  void initAttributes () ;

};

#endif // UNIVERSIT_DATABASE_H
