
#ifndef REGISTRATION_CLASS_H
#define REGISTRATION_CLASS_H

#include <string>
#include vector



/**
  * class Registration_class
  * 
  */

class Registration_class
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Registration_class ();

  /**
   * Empty Destructor
   */
  virtual ~Registration_class ();

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
  void addregistratio ()
  {
  }


  /**
   */
  void edit_registration ()
  {
  }


  /**
   */
  void deleteregistration ()
  {
  }


  /**
   */
  void searchregistration ()
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

  void registration_id;
  void registration_name;
  void registration_type;
  void registration_description;
  void registration_number;
  void registration_date;
  void registration_user_id;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of registration_id
   * @param new_var the new value of registration_id
   */
  void setRegistration_id (void new_var)   {
      registration_id = new_var;
  }

  /**
   * Get the value of registration_id
   * @return the value of registration_id
   */
  void getRegistration_id ()   {
    return registration_id;
  }

  /**
   * Set the value of registration_name
   * @param new_var the new value of registration_name
   */
  void setRegistration_name (void new_var)   {
      registration_name = new_var;
  }

  /**
   * Get the value of registration_name
   * @return the value of registration_name
   */
  void getRegistration_name ()   {
    return registration_name;
  }

  /**
   * Set the value of registration_type
   * @param new_var the new value of registration_type
   */
  void setRegistration_type (void new_var)   {
      registration_type = new_var;
  }

  /**
   * Get the value of registration_type
   * @return the value of registration_type
   */
  void getRegistration_type ()   {
    return registration_type;
  }

  /**
   * Set the value of registration_description
   * @param new_var the new value of registration_description
   */
  void setRegistration_description (void new_var)   {
      registration_description = new_var;
  }

  /**
   * Get the value of registration_description
   * @return the value of registration_description
   */
  void getRegistration_description ()   {
    return registration_description;
  }

  /**
   * Set the value of registration_number
   * @param new_var the new value of registration_number
   */
  void setRegistration_number (void new_var)   {
      registration_number = new_var;
  }

  /**
   * Get the value of registration_number
   * @return the value of registration_number
   */
  void getRegistration_number ()   {
    return registration_number;
  }

  /**
   * Set the value of registration_date
   * @param new_var the new value of registration_date
   */
  void setRegistration_date (void new_var)   {
      registration_date = new_var;
  }

  /**
   * Get the value of registration_date
   * @return the value of registration_date
   */
  void getRegistration_date ()   {
    return registration_date;
  }

  /**
   * Set the value of registration_user_id
   * @param new_var the new value of registration_user_id
   */
  void setRegistration_user_id (void new_var)   {
      registration_user_id = new_var;
  }

  /**
   * Get the value of registration_user_id
   * @return the value of registration_user_id
   */
  void getRegistration_user_id ()   {
    return registration_user_id;
  }
private:


  void initAttributes () ;

};

#endif // REGISTRATION_CLASS_H
