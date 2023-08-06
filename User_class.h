
#ifndef USER_CLASS_H
#define USER_CLASS_H
#include "Role_class.h"
#include "Permission_class.h"

#include <string>

/**
  * class User_class
  * 
  */

class User_class : public Role_class, public Permission_class
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  User_class ();

  /**
   * Empty Destructor
   */
  virtual ~User_class ();

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
  void adduser ()
  {
  }


  /**
   */
  void edituser ()
  {
  }


  /**
   */
  void delete_user ()
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

  void user_id;
  void user_name;
  void user_email;
  void User_address;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of user_id
   * @param new_var the new value of user_id
   */
  void setUser_id (void new_var)   {
      user_id = new_var;
  }

  /**
   * Get the value of user_id
   * @return the value of user_id
   */
  void getUser_id ()   {
    return user_id;
  }

  /**
   * Set the value of user_name
   * @param new_var the new value of user_name
   */
  void setUser_name (void new_var)   {
      user_name = new_var;
  }

  /**
   * Get the value of user_name
   * @return the value of user_name
   */
  void getUser_name ()   {
    return user_name;
  }

  /**
   * Set the value of user_email
   * @param new_var the new value of user_email
   */
  void setUser_email (void new_var)   {
      user_email = new_var;
  }

  /**
   * Get the value of user_email
   * @return the value of user_email
   */
  void getUser_email ()   {
    return user_email;
  }

  /**
   * Set the value of User_address
   * @param new_var the new value of User_address
   */
  void setUser_address (void new_var)   {
      User_address = new_var;
  }

  /**
   * Get the value of User_address
   * @return the value of User_address
   */
  void getUser_address ()   {
    return User_address;
  }
private:


  void initAttributes () ;

};

#endif // USER_CLASS_H
