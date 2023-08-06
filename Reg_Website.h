
#ifndef REG_WEBSITE_H
#define REG_WEBSITE_H

#include <string>

/**
  * class Reg_Website
  * 
  */

class Reg_Website
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Reg_Website ();

  /**
   * Empty Destructor
   */
  virtual ~Reg_Website ();

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
  void Verification ()
  {
  }


  /**
   */
  void Processing ()
  {
  }


  /**
   */
  void Registration ()
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

  void Qualification;
  void Login_Details;
  void Fee_Details;
  void Exam_Dates;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Qualification
   * @param new_var the new value of Qualification
   */
  void setQualification (void new_var)   {
      Qualification = new_var;
  }

  /**
   * Get the value of Qualification
   * @return the value of Qualification
   */
  void getQualification ()   {
    return Qualification;
  }

  /**
   * Set the value of Login_Details
   * @param new_var the new value of Login_Details
   */
  void setLogin_Details (void new_var)   {
      Login_Details = new_var;
  }

  /**
   * Get the value of Login_Details
   * @return the value of Login_Details
   */
  void getLogin_Details ()   {
    return Login_Details;
  }

  /**
   * Set the value of Fee_Details
   * @param new_var the new value of Fee_Details
   */
  void setFee_Details (void new_var)   {
      Fee_Details = new_var;
  }

  /**
   * Get the value of Fee_Details
   * @return the value of Fee_Details
   */
  void getFee_Details ()   {
    return Fee_Details;
  }

  /**
   * Set the value of Exam_Dates
   * @param new_var the new value of Exam_Dates
   */
  void setExam_Dates (void new_var)   {
      Exam_Dates = new_var;
  }

  /**
   * Get the value of Exam_Dates
   * @return the value of Exam_Dates
   */
  void getExam_Dates ()   {
    return Exam_Dates;
  }
private:


  void initAttributes () ;

};

#endif // REG_WEBSITE_H
