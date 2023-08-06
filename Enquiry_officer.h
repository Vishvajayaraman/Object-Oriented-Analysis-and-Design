
#ifndef ENQUIRY_OFFICER_H
#define ENQUIRY_OFFICER_H

#include <string>

/**
  * class Enquiry_officer
  * 
  */

class Enquiry_officer
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Enquiry_officer ();

  /**
   * Empty Destructor
   */
  virtual ~Enquiry_officer ();

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
  void issue_of_passport ()
  {
  }


  /**
   */
  void renewal_of_passport ()
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

  Enquiry officer Verification_of_details;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Verification_of_details
   * @param new_var the new value of Verification_of_details
   */
  void setVerification_of_details (Enquiry officer new_var)   {
      Verification_of_details = new_var;
  }

  /**
   * Get the value of Verification_of_details
   * @return the value of Verification_of_details
   */
  Enquiry officer getVerification_of_details ()   {
    return Verification_of_details;
  }
private:


  void initAttributes () ;

};

#endif // ENQUIRY_OFFICER_H
